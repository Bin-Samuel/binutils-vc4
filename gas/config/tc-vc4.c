/* tc-vc4.c -- Assembler for the Vc4 family.
   Copyright 2012
   Free Software Foundation.
   Contributed by Mark Marshall, markmarshall14@gmail.com

   This file is part of GAS, the GNU Assembler.

   GAS is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GAS is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GAS; see the file COPYING.  If not, write to
   the Free Software Foundation, 51 Franklin Street - Fifth Floor,
   Boston, MA 02110-1301, USA.  */

#include "as.h"
#include "subsegs.h"
#include "symcat.h"
#include "safe-ctype.h"
#include "opcodes/vc4-desc.h"
#include "opcodes/vc4-opc.h"
#include "cgen.h"
#include <inttypes.h>
#include <limits.h>
#include <assert.h>
#include <stdbool.h>
#ifdef OBJ_ELF
#include "elf/vc4.h"
#endif

typedef struct
{
  const CGEN_INSN *insn;
  CGEN_FIELDS fields;
#if CGEN_INT_INSN_P
  CGEN_INSN_INT buffer[CGEN_MAX_INSN_SIZE / sizeof (CGEN_INSN_INT)];
#define INSN_VALUE(buf) (*(buf))
#else
  unsigned char buffer [CGEN_MAX_INSN_SIZE];
#define INSN_VALUE(buf) (buf)
#endif
} vc4_insn;

const char vc4_comment_chars[] = ";";
const char line_comment_chars[]   = "#";
const char line_separator_chars[] = "@";
const char EXP_CHARS[]            = "eE";
const char FLT_CHARS[]            = "dD";


#define VC4_SHORTOPTS "m:"
const char * md_shortopts = VC4_SHORTOPTS;

struct option md_longopts[] =
{
  {NULL, no_argument, NULL, 0}
};
size_t md_longopts_size = sizeof (md_longopts);

unsigned long vc4_machine = 0; /* default */

int
md_parse_option (int c ATTRIBUTE_UNUSED, char * arg ATTRIBUTE_UNUSED)
{
  return 0;
}

void
md_show_usage (FILE * stream ATTRIBUTE_UNUSED)
{
}


/* The target specific pseudo-ops which we support.  */
const pseudo_typeS md_pseudo_table[] =
{
  {0, 0, 0}
};

void
md_begin (void)
{
  /* Initialize the `cgen' interface.  */

  /* Set the machine number and endian.  */
  gas_cgen_cpu_desc = vc4_cgen_cpu_open (CGEN_CPU_OPEN_MACHS, 0,
					 CGEN_CPU_OPEN_ENDIAN,
					 CGEN_ENDIAN_LITTLE,
					 CGEN_CPU_OPEN_END);
  vc4_cgen_init_asm (gas_cgen_cpu_desc);

  /* This is a callback from cgen to gas to parse operands.  */
  cgen_set_parse_operand_fn (gas_cgen_cpu_desc, gas_cgen_parse_operand);
}

void
md_assemble (char *str)
{
  vc4_insn insn;
  char *errmsg;

  /* Initialize GAS's cgen interface for a new instruction.  */
  gas_cgen_init_parse ();

  insn.insn = vc4_cgen_assemble_insn
    (gas_cgen_cpu_desc, str, & insn.fields, insn.buffer, & errmsg);

  if (!insn.insn)
    {
      as_bad ("%s", errmsg);
      return;
    }

  /* Doesn't really matter what we pass for RELAX_P here.  */
  gas_cgen_finish_insn (insn.insn, insn.buffer,
			CGEN_FIELDS_BITSIZE (& insn.fields), 1, NULL);
}

/* Return the bfd reloc type for OPERAND of INSN at fixup FIXP.
   Returns BFD_RELOC_NONE if no reloc type can be found.
   *FIXP may be modified if desired.  */

bfd_reloc_code_real_type
md_cgen_lookup_reloc (const CGEN_INSN *insn ATTRIBUTE_UNUSED,
		      const CGEN_OPERAND *operand,
		      fixS *fixP)
{
  switch (operand->type)
    {
    case VC4_OPERAND_PCRELCC:
      return BFD_RELOC_VC4_REL7_MUL2;
    case VC4_OPERAND_OFFSET10BITS:
      return BFD_RELOC_VC4_REL10_MUL2;
    case VC4_OPERAND_OFFSET8BITS:
      return BFD_RELOC_VC4_REL8_MUL2;
    case VC4_OPERAND_OFFSET23BITS:
      return BFD_RELOC_VC4_REL23_MUL2;
    case VC4_OPERAND_OFFSET27BITS:
      return BFD_RELOC_VC4_REL27_MUL2;
    case VC4_OPERAND_MEM48PCREL27:
      return BFD_RELOC_VC4_REL27;
    case VC4_OPERAND_ALU48OFFSET:
      return BFD_RELOC_VC4_REL32;
    case VC4_OPERAND_ALU16IMM:
      return BFD_RELOC_VC4_IMM5_1;
    case VC4_OPERAND_ALU48IMMU:
      return BFD_RELOC_VC4_IMM32;
    default:
      break;
    }

  fprintf (stderr, "Unknown operand type %d\n", (int) operand->type);

  return BFD_RELOC_NONE;
}

/* Write a value out to the object file, using the appropriate endianness.  */

void
md_number_to_chars (char * buf, valueT val, int n)
{
  number_to_chars_littleendian (buf, val, n);
}

char *
md_atof (int type, char * litP, int *  sizeP)
{
  return ieee_md_atof (type, litP, sizeP, TRUE);
}

valueT
md_section_align (segT segment, valueT size)
{
  int align = bfd_get_section_alignment (stdoutput, segment);
  return ((size + (1 << align) - 1) & (-1 << align));
}

symbolS *
md_undefined_symbol (char * name ATTRIBUTE_UNUSED)
{
  return NULL;
}

/* The subtypes available for relaxable instruction fields.
   The fields are:
   1) most positive reach of this state,
   2) most negative reach of this state,
   3) how many bytes this mode will add to the size of the current frag
   4) which index into the table to try if we can't fit into this one.  */

const relax_typeS md_relax_table[] =
{
  /* The first entry must be unused because an `rlx_more' value of zero ends
     each list.  */
  { 1, 1, 0, 0 },

  /* 16-bit and 48-bit immediate ALU ops.  */
  {          0,          31, 0, 2 }, /* 5-bit unsigned immediate.  */
  { 0x7fffffff, -0x80000000, 4, 0 }, /* 32-bit unsigned immediate.  */
  
  /* 16-bit and 32-bit conditional branch.  */
  {        126,        -128, 0, 4 }, /* 7-bit offset, left-shifted by 1.  */
  {   0x7ffffe,   -0x800000, 2, 0 }, /* 23-bit offset, left-shifted by 1.  */
  
  /* 32-bit and 48-bit LEA instructions.  */
  {     0x7fff,     -0x8000, 0, 6 }, /* 16-bit offset.  */
  { 0x7fffffff, -0x80000000, 2, 0 }
};

int
md_estimate_size_before_relax (fragS *fragP, segT segment)
{
  unsigned int firstword;
  unsigned char *opcode = (unsigned char *) fragP->fr_opcode;

  fprintf (stderr, "md_estimate_size_before_relax: subtype=%d\n",
	   fragP->fr_subtype);

  firstword = (opcode[1] << 8) | opcode[0];

  /* A short conditional branch instruction.  Change to the correct subtype
     (an index into md_relax_table) before relaxing, because CGEN apparently
     just defaults to 1.  */
  if ((firstword & 0xf800) == 0x1800)
    fragP->fr_subtype = 3;

  /* A 32-bit LEA instruction.  */
  else if ((firstword & 0xffe0) == 0xbfe0)
    fragP->fr_subtype = 5;

  /* Undefined symbols can't be relaxed by the assembler, and should use the
     biggest insn type available (until they can be relaxed by the linker).  */
  if (S_GET_SEGMENT (fragP->fr_symbol) != segment
      || S_IS_EXTERNAL (fragP->fr_symbol)
      || S_IS_WEAK (fragP->fr_symbol))
    {
      const CGEN_INSN *insn;
      int i;
      bool found = false;

      switch (fragP->fr_subtype)
	{
	case 1:
	case 3:
	case 5:
	  fragP->fr_subtype++;
	  break;
	default:
	  abort ();
	}

      for (i = 0, insn = fragP->fr_cgen.insn; ; i++, insn++)
        if (strcmp (CGEN_INSN_MNEMONIC (insn),
		    CGEN_INSN_MNEMONIC (fragP->fr_cgen.insn)) == 0
	    && CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_RELAXED))
	  {
	    found = true;
	    break;
	  }

      if (!found)
        abort ();

      fragP->fr_cgen.insn = insn;
    }

  return md_relax_table[fragP->fr_subtype].rlx_length;
}

/*long
md_pcrel_from (fixS *fixP)
{
  long temp_val;
  temp_val=fixP->fx_size + fixP->fx_where + fixP->fx_frag->fr_address;

  return temp_val;
}*/

long
md_pcrel_from_section (fixS *fixP, segT sec)
{
  if (fixP->fx_addsy != (symbolS *) NULL
      && (! S_IS_DEFINED (fixP->fx_addsy)
	  || S_GET_SEGMENT (fixP->fx_addsy) != sec
          || S_IS_EXTERNAL (fixP->fx_addsy)
          || S_IS_WEAK (fixP->fx_addsy)))
    {
      if (S_GET_SEGMENT (fixP->fx_addsy) != sec
	  && S_IS_DEFINED (fixP->fx_addsy)
	  && ! S_IS_EXTERNAL (fixP->fx_addsy)
	  && ! S_IS_WEAK (fixP->fx_addsy))
	return fixP->fx_offset;

      /* The symbol is undefined (or not defined in this section).  */
      return 0;
    }

  return fixP->fx_frag->fr_address + fixP->fx_where /*+ fixP->fx_size*/;
}

arelent *
vc4_tc_gen_reloc (asection *section ATTRIBUTE_UNUSED, fixS *fixp)
{
  arelent *rel;
  bfd_reloc_code_real_type r_type;

  if (fixp->fx_addsy && fixp->fx_subsy)
    {
      if ((S_GET_SEGMENT (fixp->fx_addsy) != S_GET_SEGMENT (fixp->fx_subsy))
	  || S_GET_SEGMENT (fixp->fx_addsy) == undefined_section)
	{
	  as_bad_where (fixp->fx_file, fixp->fx_line,
			_("Difference of symbols in different sections is not supported"));
	  return NULL;
	}
    }

  rel = xmalloc (sizeof (arelent));
  rel->sym_ptr_ptr = xmalloc (sizeof (asymbol *));
  *rel->sym_ptr_ptr = symbol_get_bfdsym (fixp->fx_addsy);
  rel->address = fixp->fx_frag->fr_address + fixp->fx_where;
  rel->addend = fixp->fx_offset;

  r_type = fixp->fx_r_type;

#define DEBUG 0
#if DEBUG
  fprintf (stderr, "%s\n", bfd_get_reloc_code_name (r_type));
  fflush (stderr);
#endif

  rel->howto = bfd_reloc_type_lookup (stdoutput, r_type);

  if (rel->howto == NULL)
    {
      as_bad_where (fixp->fx_file, fixp->fx_line,
		    _("Cannot represent relocation type %s"),
		    bfd_get_reloc_code_name (r_type));
      return NULL;
    }

  return rel;
}

int
vc4_cgen_parse_fix_exp (int opinfo, expressionS *exp)
{
  return opinfo;
}

/*void
vc4_cons_fix_new (fragS *frag,
		  int where,
		  int size,
		  expressionS *exp)
{
  bfd_reloc_code_real_type type;

  switch (size)
    {
    case 1:
      type = BFD_RELOC_8;
      break;
    case 2:
      type = BFD_RELOC_16;
      break;
    case 3:
      type = BFD_RELOC_24;
      break;
    case 4:
    default:
      type = BFD_RELOC_32;
      break;
    case 8:
      type = BFD_RELOC_64;
      break;
    }

  fix_new_exp (frag, where, (int) size, exp, 0, type);
}*/

fixS *
vc4_cgen_record_fixup_exp (fragS *frag,
			   int where,
			   const CGEN_INSN *insn,
			   int length,
			   const CGEN_OPERAND *operand,
			   int opinfo,
			   expressionS *exp)
{
  fixS *fixP = gas_cgen_record_fixup_exp (frag, where, insn, length, operand,
					  opinfo, exp);
  fprintf (stderr, "vc4_cgen_record_fixup_exp\n");
  return fixP;
}

void
vc4_apply_fix (fixS *fixP, valueT *valP, segT seg ATTRIBUTE_UNUSED)
{
  fprintf (stderr, "vc4_apply_fix\n");
  gas_cgen_md_apply_fix (fixP, valP, seg);
}

static int
target_address_for (fragS *frag)
{
  int rv = frag->fr_offset;
  symbolS *sym = frag->fr_symbol;

  if (sym)
    rv += S_GET_VALUE (sym);

  /*printf("target_address_for returns %d\n", rv);*/
  return rv;
}

void
md_convert_frag (bfd *headers, segT seg, fragS *fragP)
{
  unsigned char *opcode = (unsigned char *) fragP->fr_opcode;
  unsigned int firstword = (opcode[1] << 8) | opcode[0];
  int where = fragP->fr_opcode - fragP->fr_literal;
  int extension;
  int operand;
  int addend;

  fprintf (stderr, "md_convert_frag, subtype=%d\n", fragP->fr_subtype);

  addend = target_address_for (fragP) - (fragP->fr_address + where);

  switch (fragP->fr_subtype)
    {
    case 1:
      extension = 0;
      break;
    case 2:
      {
	unsigned int op4, dstreg;
	/* 16-bit scalar immediate insns.  */
	gas_assert ((firstword & 0xe000) == 0x6000);
	op4 = (firstword >> 9) & 0xf;
	dstreg = firstword & 0xf;
	/* Rebuild as a 48-bit immediate insn.  */
	firstword = 0xe800 | (op4 << 6) | dstreg;
	opcode[0] = firstword & 0xff;
	opcode[1] = (firstword >> 8) & 0xff;
	extension = 4;
	operand = VC4_OPERAND_ALU48IMMU;
      }
      break;
    case 3:
      extension = 0;
      break;
    case 4:
      {
        unsigned int condcode;
	/* 16-bit conditional branches.  */
	gas_assert ((firstword & 0xf800) == 0x1800);
	condcode = (firstword >> 7) & 0xf;
	/* Rebuild as 32-bit conditional branch insn.  */
	firstword = 0x9000 | (condcode << 8);
	opcode[0] = firstword & 0xff;
	opcode[1] = (firstword >> 8) & 0xff;
	extension = 2;
	operand = VC4_OPERAND_OFFSET23BITS;
      }
      break;
    case 5:
      extension = 0;
      break;
    case 6:
      {
        unsigned int dstreg;
	/* 32-bit LEA instruction.  */
	gas_assert ((firstword & 0xffe0) == 0xbfe0);
	dstreg = firstword & 0x1f;
	/* Rebuild as 48-bit LEA instruction.  */
	firstword = 0xe500 | dstreg;
	opcode[0] = firstword & 0xff;
	opcode[1] = (firstword >> 8) & 0xff;
	extension = 2;
	operand = VC4_OPERAND_ALU48OFFSET;
      }
      break;
    default:
      abort ();
    }

  if (S_GET_SEGMENT (fragP->fr_symbol) != seg
      || S_IS_EXTERNAL (fragP->fr_symbol)
      || S_IS_WEAK (fragP->fr_symbol))
    {
      gas_assert (fragP->fr_cgen.insn != 0);

      gas_cgen_record_fixup (fragP, where, fragP->fr_cgen.insn,
			     (fragP->fr_fix - where) * 8,
			     cgen_operand_lookup_by_num (gas_cgen_cpu_desc,
							 operand),
			     fragP->fr_cgen.opinfo, fragP->fr_symbol,
			     fragP->fr_offset);
    }
  else
    /* A relaxable insn, but all bets are off when the relaxation machinery is
       active.  We have to put the operand bytes into the frag ourselves!  */
    switch (fragP->fr_subtype)
      {
      case 1: /* 5-bit unsigned immediate (in 16-bit instruction).  */
	opcode[0] = (opcode[0] & 0x0f) | ((addend & 0xf) << 4);
	opcode[1] = (opcode[1] & 0xfe) | ((addend >> 4) & 1);
        break;
      case 2: /* 32-bit immediate (in 48-bit instruction).  */
      case 6: /* 32-bit PC-relative offset (in 48-bit LEA insn).  */
        opcode[2] = addend & 0xff;
	opcode[3] = (addend >> 8) & 0xff;
	opcode[4] = (addend >> 16) & 0xff;
	opcode[5] = (addend >> 24) & 0xff;
        break;
      case 3: /* 7-bit PC-relative offset (in 16-bit words).  */
	opcode[0] = (opcode[0] & 0x80) | ((addend >> 1) & 0x7f);
	break;
      case 4: /* 23-bit PC-relative offset (in 16-bit words).  */
        opcode[2] = (addend >> 1) & 0xff;
	opcode[3] = (addend >> 9) & 0xff;
	opcode[0] = (addend >> 17) & 0x7f;
        break;
      case 5: /* 16-bit PC-relative offset (in 32-bit LEA insn).  */
        opcode[2] = addend & 0xff;
	opcode[3] = (addend >> 8) & 0xff;
        break;
      default:
        abort ();
      }

  fragP->fr_fix += extension;
}

