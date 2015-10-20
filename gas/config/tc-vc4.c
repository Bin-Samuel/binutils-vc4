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
  return 0;
}

int
md_estimate_size_before_relax (fragS *fragP ATTRIBUTE_UNUSED,
			       segT segment_type ATTRIBUTE_UNUSED)
{
  printf (_("call to md_estimate_size_before_relax \n"));
  abort ();
}

long
md_pcrel_from (fixS *fixP)
{
  long temp_val;
  temp_val=fixP->fx_size + fixP->fx_where + fixP->fx_frag->fr_address;

  return temp_val;
}

long
md_pcrel_from_section (fixS *fixP, segT sec)
{
  if (fixP->fx_addsy != (symbolS *) NULL
      && (! S_IS_DEFINED (fixP->fx_addsy)
	  || S_GET_SEGMENT (fixP->fx_addsy) != sec
          || S_IS_EXTERNAL (fixP->fx_addsy)
          || S_IS_WEAK (fixP->fx_addsy)))
    {
      return 0;
    }

  return md_pcrel_from (fixP);
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

void
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
}

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

void
md_convert_frag (bfd *headers ATTRIBUTE_UNUSED,
		 segT seg ATTRIBUTE_UNUSED,
		 fragS *fragP ATTRIBUTE_UNUSED)
{
  printf (_("call to md_convert_frag \n"));
  abort ();
}

