/* Instruction opcode table for vc4.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#include "sysdep.h"
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "vc4-desc.h"
#include "vc4-opc.h"
#include "libiberty.h"

/* The hash functions are recorded here to help keep assembler code out of
   the disassembler and vice versa.  */

static int asm_hash_insn_p        (const CGEN_INSN *);
static unsigned int asm_hash_insn (const char *);
static int dis_hash_insn_p        (const CGEN_INSN *);
static unsigned int dis_hash_insn (const char *, CGEN_INSN_INT);

/* Instruction formats.  */

#define F(f) & vc4_cgen_ifld_table[VC4_##f]
static const CGEN_IFMT ifmt_empty ATTRIBUTE_UNUSED = {
  0, 0, 0x0, { { 0 } }
};

static const CGEN_IFMT ifmt_bkpt ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_swireg ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_swiimm ATTRIBUTE_UNUSED = {
  16, 16, 0xffc0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_6) }, { F (F_OP5_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushrn ATTRIBUTE_UNUSED = {
  16, 16, 0xff9f, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushrnrm0 ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0_BASE_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushrnrm6 ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0_BASE_6) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushrnrm16 ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0_BASE_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushrnrm24 ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0_BASE_24) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldind ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff ATTRIBUTE_UNUSED = {
  16, 16, 0xf000, { { F (F_OPLEN) }, { F (F_LDSTOFF) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsp ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_SPOFFSET) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff12 ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_9) }, { F (F_OFFSET12) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff16 ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP31_16S) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldcndidx ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22_21) }, { F (F_OP4_0) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldcnddisp ATTRIBUTE_UNUSED = {
  16, 31, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP4_0) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldpredec ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22_21) }, { F (F_OP4_0) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_addsp ATTRIBUTE_UNUSED = {
  16, 16, 0xf81f, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_ADDSPOFFSET) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_lea ATTRIBUTE_UNUSED = {
  16, 16, 0xf800, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_ADDSPOFFSET) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bcc ATTRIBUTE_UNUSED = {
  16, 16, 0xf800, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_7) }, { F (F_PCRELCC) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov16 ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi16 ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8i16 ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4_SHL3) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bcc32r ATTRIBUTE_UNUSED = {
  16, 32, 0xf0f0, { { F (F_OPLEN) }, { F (F_OP31_30) }, { F (F_OP29_26) }, { F (F_OP11_8) }, { F (F_PCREL10) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bcc32i ATTRIBUTE_UNUSED = {
  16, 32, 0xf0f0, { { F (F_OPLEN) }, { F (F_OP31_30) }, { F (F_OP29_24) }, { F (F_OP11_8) }, { F (F_OP7_4) }, { F (F_PCREL8) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_addcmpbrr ATTRIBUTE_UNUSED = {
  16, 32, 0xf000, { { F (F_OPLEN) }, { F (F_OP31_30) }, { F (F_OP29_26) }, { F (F_OP11_8) }, { F (F_PCREL10) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_addcmpbri ATTRIBUTE_UNUSED = {
  16, 32, 0xf000, { { F (F_OPLEN) }, { F (F_OP31_30) }, { F (F_OP29_26) }, { F (F_OP11_8) }, { F (F_PCREL10) }, { F (F_OP7_4S) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_addcmpbir ATTRIBUTE_UNUSED = {
  16, 32, 0xf000, { { F (F_OPLEN) }, { F (F_OP31_30) }, { F (F_OP29_24) }, { F (F_OP11_8) }, { F (F_OP7_4) }, { F (F_PCREL8) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_addcmpbii ATTRIBUTE_UNUSED = {
  16, 32, 0xf000, { { F (F_OPLEN) }, { F (F_OP31_30) }, { F (F_OP29_24) }, { F (F_OP11_8) }, { F (F_OP7_4S) }, { F (F_PCREL8) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bcc32 ATTRIBUTE_UNUSED = {
  16, 32, 0xf080, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OFFSET23BITS) }, { 0 } }
};

static const CGEN_IFMT ifmt_bl32 ATTRIBUTE_UNUSED = {
  16, 32, 0xf080, { { F (F_OPLEN) }, { F (F_OP7) }, { F (F_OFFSET27BITS) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_10) }, { F (F_OP26_23) }, { F (F_OP9_5) }, { F (F_OP22_21) }, { F (F_OP4_0) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_10) }, { F (F_OP26_23) }, { F (F_OP9_5) }, { F (F_OP22) }, { F (F_OP21_16S) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds2i32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_10) }, { F (F_OP26_23) }, { F (F_OP9_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL1) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds4i32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_10) }, { F (F_OP26_23) }, { F (F_OP9_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL2) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8i32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_10) }, { F (F_OP26_23) }, { F (F_OP9_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL3) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds16i32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_10) }, { F (F_OP26_23) }, { F (F_OP9_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL4) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_mulhdiss ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_clamp16r ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22_21) }, { F (F_OP4_0) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds5i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds6i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL6) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds7i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL7) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL8) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_subs1i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL1) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_subs2i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL2) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_subs3i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL3) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_subs4i ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_8) }, { F (F_OP26_23) }, { F (F_OP7_5) }, { F (F_OP22) }, { F (F_OP21_16S_SHL4) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_lea32r ATTRIBUTE_UNUSED = {
  16, 32, 0xfc00, { { F (F_OPLEN) }, { F (F_OP31_16S) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_lea32pc ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_PCREL16) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_moviu32 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_16S) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds2iu32_shl1 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_16S_SHL1) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds4iu32_shl2 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_16S_SHL2) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8iu32_shl3 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_16S_SHL3) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds16iu32_shl4 ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_16S_SHL4) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_faddr ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_9) }, { F (F_OP26_23) }, { F (F_OP8_5) }, { F (F_OP22_21) }, { F (F_OP4_0) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_faddi ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP31_27) }, { F (F_OP11_9) }, { F (F_OP26_23) }, { F (F_OP8_5) }, { F (F_OP22) }, { F (F_OP21_16) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_lea48 ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_PCREL32_48) }, { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldpcrel27 ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OP47_43) }, { F (F_PCREL27_48) }, { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff27 ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_add48i ATTRIBUTE_UNUSED = {
  16, 48, 0xfc00, { { F (F_OP47_16) }, { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi48 ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OP47_16) }, { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_vec48 ATTRIBUTE_UNUSED = {
  16, 48, 0xf800, { { F (F_OP47_16) }, { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_vec80 ATTRIBUTE_UNUSED = {
  16, 80, 0xf800, { { F (F_OP47_16) }, { F (F_OP79_48) }, { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_0) }, { 0 } }
};

#undef F

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) VC4_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The instruction table.  */

static const CGEN_OPCODE vc4_cgen_insn_opcode_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { { 0, 0, 0, 0 }, {{0}}, 0, {0}},
/* bkpt */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x0 }
  },
/* nop */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x1 }
  },
/* sleep */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x2 }
  },
/* user */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x3 }
  },
/* ei */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x4 }
  },
/* di */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x5 }
  },
/* cbclr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x6 }
  },
/* cbadd1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x7 }
  },
/* cbadd2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x8 }
  },
/* cbadd3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x9 }
  },
/* rti */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0xa }
  },
/* swi $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_swireg, { 0x20 }
  },
/* rts */
  {
    { 0, 0, 0, 0 },
    { { MNEM, 0 } },
    & ifmt_bkpt, { 0x5a }
  },
/* b.s $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_swireg, { 0x40 }
  },
/* bl $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_swireg, { 0x60 }
  },
/* tbb $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_swireg, { 0x80 }
  },
/* tbh $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_swireg, { 0xa0 }
  },
/* mov.s $alu32dreg,cpuid */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', 'c', 'p', 'u', 'i', 'd', 0 } },
    & ifmt_swireg, { 0xe0 }
  },
/* swi $swi_imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (SWI_IMM), 0 } },
    & ifmt_swiimm, { 0x1c0 }
  },
/* push.s $ppstartreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (PPSTARTREG), 0 } },
    & ifmt_pushrn, { 0x280 }
  },
/* push $ppstartreg,lr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (PPSTARTREG), ',', 'l', 'r', 0 } },
    & ifmt_pushrn, { 0x380 }
  },
/* push r0-$ppendreg0 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '0', '-', OP (PPENDREG0), 0 } },
    & ifmt_pushrnrm0, { 0x280 }
  },
/* push r6-$ppendreg6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '6', '-', OP (PPENDREG6), 0 } },
    & ifmt_pushrnrm6, { 0x2a0 }
  },
/* push r16-$ppendreg16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '1', '6', '-', OP (PPENDREG16), 0 } },
    & ifmt_pushrnrm16, { 0x2c0 }
  },
/* push r24-$ppendreg24 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '2', '4', '-', OP (PPENDREG24), 0 } },
    & ifmt_pushrnrm24, { 0x2e0 }
  },
/* push r0-$ppendreg0,lr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '0', '-', OP (PPENDREG0), ',', 'l', 'r', 0 } },
    & ifmt_pushrnrm0, { 0x380 }
  },
/* push r6-$ppendreg6,lr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '6', '-', OP (PPENDREG6), ',', 'l', 'r', 0 } },
    & ifmt_pushrnrm6, { 0x3a0 }
  },
/* push r16-$ppendreg16,lr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '1', '6', '-', OP (PPENDREG16), ',', 'l', 'r', 0 } },
    & ifmt_pushrnrm16, { 0x3c0 }
  },
/* push r24-$ppendreg24,lr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '2', '4', '-', OP (PPENDREG24), ',', 'l', 'r', 0 } },
    & ifmt_pushrnrm24, { 0x3e0 }
  },
/* pop.s $ppstartreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (PPSTARTREG), 0 } },
    & ifmt_pushrn, { 0x200 }
  },
/* pop $ppstartreg,pc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (PPSTARTREG), ',', 'p', 'c', 0 } },
    & ifmt_pushrn, { 0x300 }
  },
/* pop r0-$ppendreg0 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '0', '-', OP (PPENDREG0), 0 } },
    & ifmt_pushrnrm0, { 0x200 }
  },
/* pop r6-$ppendreg6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '6', '-', OP (PPENDREG6), 0 } },
    & ifmt_pushrnrm6, { 0x220 }
  },
/* pop r16-$ppendreg16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '1', '6', '-', OP (PPENDREG16), 0 } },
    & ifmt_pushrnrm16, { 0x240 }
  },
/* pop r24-$ppendreg24 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '2', '4', '-', OP (PPENDREG24), 0 } },
    & ifmt_pushrnrm24, { 0x260 }
  },
/* pop r0-$ppendreg0,pc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '0', '-', OP (PPENDREG0), ',', 'p', 'c', 0 } },
    & ifmt_pushrnrm0, { 0x300 }
  },
/* pop r6-$ppendreg6,pc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '6', '-', OP (PPENDREG6), ',', 'p', 'c', 0 } },
    & ifmt_pushrnrm6, { 0x320 }
  },
/* pop r16-$ppendreg16,pc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '1', '6', '-', OP (PPENDREG16), ',', 'p', 'c', 0 } },
    & ifmt_pushrnrm16, { 0x340 }
  },
/* pop r24-$ppendreg24,pc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'r', '2', '4', '-', OP (PPENDREG24), ',', 'p', 'c', 0 } },
    & ifmt_pushrnrm24, { 0x360 }
  },
/* ld.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0x800 }
  },
/* st.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0x900 }
  },
/* ldh.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0xa00 }
  },
/* sth.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0xb00 }
  },
/* ldb.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0xc00 }
  },
/* stb.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0xd00 }
  },
/* ldsh.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0xe00 }
  },
/* ldsb.s $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind, { 0xf00 }
  },
/* ld.s $alu16dreg,($alu16sreg+$ldstoff) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), '+', OP (LDSTOFF), ')', 0 } },
    & ifmt_ldoff, { 0x2000 }
  },
/* st.s $alu16dreg,($alu16sreg+$ldstoff) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), '+', OP (LDSTOFF), ')', 0 } },
    & ifmt_ldoff, { 0x3000 }
  },
/* ld.s $alu16dreg,(sp+$spoffset) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', 's', 'p', '+', OP (SPOFFSET), ')', 0 } },
    & ifmt_ldsp, { 0x400 }
  },
/* st.s $alu16dreg,(sp+$spoffset) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', 's', 'p', '+', OP (SPOFFSET), ')', 0 } },
    & ifmt_ldsp, { 0x600 }
  },
/* ld.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa200 }
  },
/* st.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa220 }
  },
/* ldh.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa240 }
  },
/* sth.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa260 }
  },
/* ldb.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa280 }
  },
/* stb.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa2a0 }
  },
/* ldsh.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa2c0 }
  },
/* ldsb.m $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12, { 0xa2e0 }
  },
/* ld.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa800 }
  },
/* st.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa820 }
  },
/* ldh.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa840 }
  },
/* sth.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa860 }
  },
/* ldb.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa880 }
  },
/* stb.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa8a0 }
  },
/* ldsh.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa8c0 }
  },
/* ldsb.m $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16, { 0xa8e0 }
  },
/* ld${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl2) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), OP (SHL2), ')', 0 } },
    & ifmt_ldcndidx, { 0xa000, { 0x0 }, { 0x60 } }
  },
/* ldh${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), OP (SHL1), ')', 0 } },
    & ifmt_ldcndidx, { 0xa040, { 0x0 }, { 0x60 } }
  },
/* ldb${alu32cond} $alu32dreg,($alu32areg+$alu32breg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), ')', 0 } },
    & ifmt_ldcndidx, { 0xa080, { 0x0 }, { 0x60 } }
  },
/* ldsh${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), OP (SHL1), ')', 0 } },
    & ifmt_ldcndidx, { 0xa0c0, { 0x0 }, { 0x60 } }
  },
/* st${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl2) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), OP (SHL2), ')', 0 } },
    & ifmt_ldcndidx, { 0xa020, { 0x0 }, { 0x60 } }
  },
/* sth${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl1) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), OP (SHL1), ')', 0 } },
    & ifmt_ldcndidx, { 0xa060, { 0x0 }, { 0x60 } }
  },
/* stb${alu32cond} $alu32dreg,($alu32areg+$alu32breg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), ')', 0 } },
    & ifmt_ldcndidx, { 0xa0a0, { 0x0 }, { 0x60 } }
  },
/* ldsb${alu32cond} $alu32dreg,($alu32areg+$alu32breg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (ALU32BREG), ')', 0 } },
    & ifmt_ldcndidx, { 0xa0e0, { 0x0 }, { 0x60 } }
  },
/* ld${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa000, { 0x40 }, { 0x40 } }
  },
/* ldh${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa040, { 0x40 }, { 0x40 } }
  },
/* ldb${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa080, { 0x40 }, { 0x40 } }
  },
/* ldsh${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa0c0, { 0x40 }, { 0x40 } }
  },
/* st${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa020, { 0x40 }, { 0x40 } }
  },
/* sth${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa060, { 0x40 }, { 0x40 } }
  },
/* stb${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa0a0, { 0x40 }, { 0x40 } }
  },
/* ldsb${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (DISP5), ')', 0 } },
    & ifmt_ldcnddisp, { 0xa0e0, { 0x40 }, { 0x40 } }
  },
/* ld${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa400, { 0x0 }, { 0x7f } }
  },
/* ldh${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa440, { 0x0 }, { 0x7f } }
  },
/* ldb${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa480, { 0x0 }, { 0x7f } }
  },
/* ldsh${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa4c0, { 0x0 }, { 0x7f } }
  },
/* st${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa420, { 0x0 }, { 0x7f } }
  },
/* sth${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa460, { 0x0 }, { 0x7f } }
  },
/* stb${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa4a0, { 0x0 }, { 0x7f } }
  },
/* ldsb${alu32cond} $alu32dreg,(--$alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', '-', '-', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldpredec, { 0xa4e0, { 0x0 }, { 0x7f } }
  },
/* ld${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa500, { 0x0 }, { 0x7f } }
  },
/* ldh${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa540, { 0x0 }, { 0x7f } }
  },
/* ldb${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa580, { 0x0 }, { 0x7f } }
  },
/* ldsh${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa5c0, { 0x0 }, { 0x7f } }
  },
/* st${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa520, { 0x0 }, { 0x7f } }
  },
/* sth${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa560, { 0x0 }, { 0x7f } }
  },
/* stb${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa5a0, { 0x0 }, { 0x7f } }
  },
/* ldsb${alu32cond} $alu32dreg,($alu32areg++) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', '+', ')', 0 } },
    & ifmt_ldpredec, { 0xa5e0, { 0x0 }, { 0x7f } }
  },
/* add sp,$addspoffset */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 's', 'p', ',', OP (ADDSPOFFSET), 0 } },
    & ifmt_addsp, { 0x1019 }
  },
/* lea $alu32dreg,(sp+$addspoffset) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', 's', 'p', '+', OP (ADDSPOFFSET), ')', 0 } },
    & ifmt_lea, { 0x1000 }
  },
/* b$condcode.s $pcrelcc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODE), '.', 's', ' ', OP (PCRELCC), 0 } },
    & ifmt_bcc, { 0x1800 }
  },
/* mov.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4000 }
  },
/* cmn.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4100 }
  },
/* add.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4200 }
  },
/* bic.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4300 }
  },
/* mul.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4400 }
  },
/* eor.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4500 }
  },
/* sub.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4600 }
  },
/* and.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4700 }
  },
/* not.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4800 }
  },
/* ror.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4900 }
  },
/* cmp.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4a00 }
  },
/* rsub.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4b00 }
  },
/* btst.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4c00 }
  },
/* or.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4d00 }
  },
/* bmask.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4e00 }
  },
/* max.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x4f00 }
  },
/* bitset.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5000 }
  },
/* min.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5100 }
  },
/* bitclear.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5200 }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL1), 0 } },
    & ifmt_mov16, { 0x5300 }
  },
/* bitflip.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5400 }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL2), 0 } },
    & ifmt_mov16, { 0x5500 }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL3), 0 } },
    & ifmt_mov16, { 0x5600 }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL4), 0 } },
    & ifmt_mov16, { 0x5700 }
  },
/* signext.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5800 }
  },
/* neg.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5900 }
  },
/* lsr.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5a00 }
  },
/* msb.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5b00 }
  },
/* shl.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5c00 }
  },
/* bitrev.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5d00 }
  },
/* asr.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5e00 }
  },
/* abs.s $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16, { 0x5f00 }
  },
/* mov.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6000 }
  },
/* add.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6200 }
  },
/* mul.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6400 }
  },
/* sub.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6600 }
  },
/* not.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6800 }
  },
/* cmp.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6a00 }
  },
/* btst.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6c00 }
  },
/* bmask.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x6e00 }
  },
/* bitset.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7000 }
  },
/* bitclear.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7200 }
  },
/* bitflip.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7400 }
  },
/* addscale.s $alu16dreg,$alu16imm_shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM_SHL3), 0 } },
    & ifmt_adds8i16, { 0x7600 }
  },
/* signext.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7800 }
  },
/* lsr.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7a00 }
  },
/* shl.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7c00 }
  },
/* asr.s $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16, { 0x7e00 }
  },
/* b$condcodebcc32 $alu16dreg,$bcc32sreg,$pcrel10bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (ALU16DREG), ',', OP (BCC32SREG), ',', OP (PCREL10BITS), 0 } },
    & ifmt_bcc32r, { 0x8000, { 0x4000 }, { 0xc000 } }
  },
/* b$condcodebcc32 $alu16dreg,$bcc32imm,$pcrel8bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (ALU16DREG), ',', OP (BCC32IMM), ',', OP (PCREL8BITS), 0 } },
    & ifmt_bcc32i, { 0x8000, { 0xc000 }, { 0xc000 } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbareg,$bcc32sreg,$pcrel10bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (ALU16DREG), ',', OP (ADDCMPBAREG), ',', OP (BCC32SREG), ',', OP (PCREL10BITS), 0 } },
    & ifmt_addcmpbrr, { 0x8000, { 0x0 }, { 0xc000 } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbimm,$bcc32sreg,$pcrel10bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (ALU16DREG), ',', OP (ADDCMPBIMM), ',', OP (BCC32SREG), ',', OP (PCREL10BITS), 0 } },
    & ifmt_addcmpbri, { 0x8000, { 0x4000 }, { 0xc000 } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbareg,$bcc32imm,$pcrel8bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (ALU16DREG), ',', OP (ADDCMPBAREG), ',', OP (BCC32IMM), ',', OP (PCREL8BITS), 0 } },
    & ifmt_addcmpbir, { 0x8000, { 0x8000 }, { 0xc000 } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbimm,$bcc32imm,$pcrel8bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (ALU16DREG), ',', OP (ADDCMPBIMM), ',', OP (BCC32IMM), ',', OP (PCREL8BITS), 0 } },
    & ifmt_addcmpbii, { 0x8000, { 0xc000 }, { 0xc000 } }
  },
/* b$condcodebcc32.m $offset23bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), '.', 'm', ' ', OP (OFFSET23BITS), 0 } },
    & ifmt_bcc32, { 0x9000 }
  },
/* bl $offset27bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (OFFSET27BITS), 0 } },
    & ifmt_bl32, { 0x9080 }
  },
/* mov${alu32cond}.m $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc000, { 0x0 }, { 0x60 } }
  },
/* cmn${alu32cond}.m $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc020, { 0x0 }, { 0x60 } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc040, { 0x0 }, { 0x60 } }
  },
/* bic${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc060, { 0x0 }, { 0x60 } }
  },
/* mul${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc080, { 0x0 }, { 0x60 } }
  },
/* eor${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc0a0, { 0x0 }, { 0x60 } }
  },
/* sub${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc0c0, { 0x0 }, { 0x60 } }
  },
/* and${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc0e0, { 0x0 }, { 0x60 } }
  },
/* not${alu32cond}.m $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc100, { 0x0 }, { 0x60 } }
  },
/* ror${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc120, { 0x0 }, { 0x60 } }
  },
/* cmp${alu32cond}.m $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc140, { 0x0 }, { 0x60 } }
  },
/* rsub${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc160, { 0x0 }, { 0x60 } }
  },
/* btst${alu32cond}.m $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc180, { 0x0 }, { 0x60 } }
  },
/* or${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc1a0, { 0x0 }, { 0x60 } }
  },
/* bmask${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc1c0, { 0x0 }, { 0x60 } }
  },
/* max${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc1e0, { 0x0 }, { 0x60 } }
  },
/* bitset${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc200, { 0x0 }, { 0x60 } }
  },
/* min${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc220, { 0x0 }, { 0x60 } }
  },
/* bitclear${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc240, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL1), 0 } },
    & ifmt_mov32, { 0xc260, { 0x0 }, { 0x60 } }
  },
/* bitflip${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc280, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL2), 0 } },
    & ifmt_mov32, { 0xc2a0, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL3), 0 } },
    & ifmt_mov32, { 0xc2c0, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL4), 0 } },
    & ifmt_mov32, { 0xc2e0, { 0x0 }, { 0x60 } }
  },
/* signext${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc300, { 0x0 }, { 0x60 } }
  },
/* neg${alu32cond}.m $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc320, { 0x0 }, { 0x60 } }
  },
/* lsr${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc340, { 0x0 }, { 0x60 } }
  },
/* msb${alu32cond}.m $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc360, { 0x0 }, { 0x60 } }
  },
/* shl${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc380, { 0x0 }, { 0x60 } }
  },
/* bitrev${alu32cond}.m $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc3a0, { 0x0 }, { 0x60 } }
  },
/* asr${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc3c0, { 0x0 }, { 0x60 } }
  },
/* abs${alu32cond}.m $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32, { 0xc3e0, { 0x0 }, { 0x60 } }
  },
/* mov${alu32cond}.m $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc000, { 0x40 }, { 0x40 } }
  },
/* cmn${alu32cond}.m $alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc020, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc040, { 0x40 }, { 0x40 } }
  },
/* bic${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc060, { 0x40 }, { 0x40 } }
  },
/* mul${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc080, { 0x40 }, { 0x40 } }
  },
/* eor${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc0a0, { 0x40 }, { 0x40 } }
  },
/* sub${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc0c0, { 0x40 }, { 0x40 } }
  },
/* and${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc0e0, { 0x40 }, { 0x40 } }
  },
/* not${alu32cond}.m $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc100, { 0x40 }, { 0x40 } }
  },
/* ror${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc120, { 0x40 }, { 0x40 } }
  },
/* cmp${alu32cond}.m $alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc140, { 0x40 }, { 0x40 } }
  },
/* rsub${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc160, { 0x40 }, { 0x40 } }
  },
/* btst${alu32cond}.m $alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc180, { 0x40 }, { 0x40 } }
  },
/* or${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc1a0, { 0x40 }, { 0x40 } }
  },
/* bmask${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc1c0, { 0x40 }, { 0x40 } }
  },
/* max${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc1e0, { 0x40 }, { 0x40 } }
  },
/* bitset${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc200, { 0x40 }, { 0x40 } }
  },
/* min${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc220, { 0x40 }, { 0x40 } }
  },
/* bitclear${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc240, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL1), 0 } },
    & ifmt_adds2i32, { 0xc260, { 0x40 }, { 0x40 } }
  },
/* bitflip${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc280, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL2), 0 } },
    & ifmt_adds4i32, { 0xc2a0, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL3), 0 } },
    & ifmt_adds8i32, { 0xc2c0, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL4), 0 } },
    & ifmt_adds16i32, { 0xc2e0, { 0x40 }, { 0x40 } }
  },
/* signext${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc300, { 0x40 }, { 0x40 } }
  },
/* neg${alu32cond}.m $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc320, { 0x40 }, { 0x40 } }
  },
/* lsr${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc340, { 0x40 }, { 0x40 } }
  },
/* msb${alu32cond}.m $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc360, { 0x40 }, { 0x40 } }
  },
/* shl${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc380, { 0x40 }, { 0x40 } }
  },
/* bitrev${alu32cond}.m $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc3a0, { 0x40 }, { 0x40 } }
  },
/* asr${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc3c0, { 0x40 }, { 0x40 } }
  },
/* abs${alu32cond}.m $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'm', ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32, { 0xc3e0, { 0x40 }, { 0x40 } }
  },
/* mulhd$alu32cond.ss $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc400, { 0x0 }, { 0x60 } }
  },
/* mulhd$alu32cond.su $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc420, { 0x0 }, { 0x60 } }
  },
/* mulhd$alu32cond.us $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc440, { 0x0 }, { 0x60 } }
  },
/* mulhd$alu32cond.uu $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc460, { 0x0 }, { 0x60 } }
  },
/* div$alu32cond.ss $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc480, { 0x0 }, { 0x60 } }
  },
/* div$alu32cond.su $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc4a0, { 0x0 }, { 0x60 } }
  },
/* div$alu32cond.us $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc4c0, { 0x0 }, { 0x60 } }
  },
/* div$alu32cond.uu $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc4e0, { 0x0 }, { 0x60 } }
  },
/* mulhd$alu32cond.ss $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc400, { 0x40 }, { 0x40 } }
  },
/* mulhd$alu32cond.su $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc420, { 0x40 }, { 0x40 } }
  },
/* mulhd$alu32cond.us $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc440, { 0x40 }, { 0x40 } }
  },
/* mulhd$alu32cond.uu $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc460, { 0x40 }, { 0x40 } }
  },
/* div$alu32cond.ss $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc480, { 0x40 }, { 0x40 } }
  },
/* div$alu32cond.su $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 's', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc4a0, { 0x40 }, { 0x40 } }
  },
/* div$alu32cond.us $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 's', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc4c0, { 0x40 }, { 0x40 } }
  },
/* div$alu32cond.uu $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), '.', 'u', 'u', ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc4e0, { 0x40 }, { 0x40 } }
  },
/* adds$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc500, { 0x0 }, { 0x60 } }
  },
/* subs$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc520, { 0x0 }, { 0x60 } }
  },
/* shls$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xc540, { 0x0 }, { 0x60 } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl5 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL5), 0 } },
    & ifmt_ldcndidx, { 0xc580, { 0x0 }, { 0x60 } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL6), 0 } },
    & ifmt_ldcndidx, { 0xc5a0, { 0x0 }, { 0x60 } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl7 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL7), 0 } },
    & ifmt_ldcndidx, { 0xc5c0, { 0x0 }, { 0x60 } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl8 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL8), 0 } },
    & ifmt_ldcndidx, { 0xc5e0, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL1), 0 } },
    & ifmt_ldcndidx, { 0xc620, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL2), 0 } },
    & ifmt_ldcndidx, { 0xc640, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL3), 0 } },
    & ifmt_ldcndidx, { 0xc660, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL4), 0 } },
    & ifmt_ldcndidx, { 0xc680, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl5 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL5), 0 } },
    & ifmt_ldcndidx, { 0xc6a0, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL6), 0 } },
    & ifmt_ldcndidx, { 0xc6c0, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl7 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL7), 0 } },
    & ifmt_ldcndidx, { 0xc6e0, { 0x0 }, { 0x60 } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl8 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL8), 0 } },
    & ifmt_ldcndidx, { 0xc700, { 0x0 }, { 0x60 } }
  },
/* clamp16$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_clamp16r, { 0xc560, { 0x0 }, { 0xf860 } }
  },
/* count$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_clamp16r, { 0xc600, { 0x0 }, { 0xf860 } }
  },
/* adds$alu32cond $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc500, { 0x40 }, { 0x40 } }
  },
/* subs$alu32cond $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc520, { 0x40 }, { 0x40 } }
  },
/* shls$alu32cond $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc540, { 0x40 }, { 0x40 } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl5 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL5), 0 } },
    & ifmt_adds5i, { 0xc580, { 0x40 }, { 0x40 } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL6), 0 } },
    & ifmt_adds6i, { 0xc5a0, { 0x40 }, { 0x40 } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl7 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL7), 0 } },
    & ifmt_adds7i, { 0xc5c0, { 0x40 }, { 0x40 } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl8 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL8), 0 } },
    & ifmt_adds8i, { 0xc5e0, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL1), 0 } },
    & ifmt_subs1i, { 0xc620, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL2), 0 } },
    & ifmt_subs2i, { 0xc640, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL3), 0 } },
    & ifmt_subs3i, { 0xc660, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL4), 0 } },
    & ifmt_subs4i, { 0xc680, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl5 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL5), 0 } },
    & ifmt_adds5i, { 0xc6a0, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL6), 0 } },
    & ifmt_adds6i, { 0xc6c0, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl7 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL7), 0 } },
    & ifmt_adds7i, { 0xc6e0, { 0x40 }, { 0x40 } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl8 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL8), 0 } },
    & ifmt_adds8i, { 0xc700, { 0x40 }, { 0x40 } }
  },
/* clamp16$alu32cond $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc560, { 0x40 }, { 0x40 } }
  },
/* count$alu32cond $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xc600, { 0x40 }, { 0x40 } }
  },
/* lea $alu48idreg,($alu48isreg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (ALU48ISREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_lea32r, { 0xb400 }
  },
/* lea.m $alu48idreg,$pcrel16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (PCREL16), 0 } },
    & ifmt_lea32pc, { 0xbfe0 }
  },
/* mov.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb000 }
  },
/* cmn.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb020 }
  },
/* add.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb040 }
  },
/* bic.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb060 }
  },
/* mul.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb080 }
  },
/* eor.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb0a0 }
  },
/* sub.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb0c0 }
  },
/* and.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb0e0 }
  },
/* not.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb100 }
  },
/* ror.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb120 }
  },
/* cmp.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb140 }
  },
/* rsub.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb160 }
  },
/* btst.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb180 }
  },
/* or.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb1a0 }
  },
/* bmask.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb1c0 }
  },
/* max.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb1e0 }
  },
/* bitset.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb200 }
  },
/* min.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb220 }
  },
/* bitclear.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb240 }
  },
/* add.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds2iu32_shl1, { 0xb260 }
  },
/* bitflip.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb280 }
  },
/* add.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds4iu32_shl2, { 0xb2a0 }
  },
/* add.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds8iu32_shl3, { 0xb2c0 }
  },
/* add.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds16iu32_shl4, { 0xb2e0 }
  },
/* signext.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb300 }
  },
/* neg.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb320 }
  },
/* lsr.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb340 }
  },
/* msb.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb360 }
  },
/* shl.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb380 }
  },
/* bitrev.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb3a0 }
  },
/* asr.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb3c0 }
  },
/* abs.m $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32, { 0xb3e0 }
  },
/* fadd$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc800, { 0x0 }, { 0x60 } }
  },
/* fsub$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc820, { 0x0 }, { 0x60 } }
  },
/* fmul$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc840, { 0x0 }, { 0x60 } }
  },
/* fdiv$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc860, { 0x0 }, { 0x60 } }
  },
/* fcmp$alu32cond $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc880, { 0x0 }, { 0x60 } }
  },
/* fabs$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc8a0, { 0x0 }, { 0x60 } }
  },
/* frsb$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc8c0, { 0x0 }, { 0x60 } }
  },
/* fmax$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc8e0, { 0x0 }, { 0x60 } }
  },
/* frcp$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc900, { 0x0 }, { 0x60 } }
  },
/* frsqrt$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc920, { 0x0 }, { 0x60 } }
  },
/* fnmul$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc940, { 0x0 }, { 0x60 } }
  },
/* fmin$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc960, { 0x0 }, { 0x60 } }
  },
/* fceil$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc980, { 0x0 }, { 0x60 } }
  },
/* ffloor$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc9a0, { 0x0 }, { 0x60 } }
  },
/* flog2$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc9c0, { 0x0 }, { 0x60 } }
  },
/* fexp2$alu32cond $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_faddr, { 0xc9e0, { 0x0 }, { 0x60 } }
  },
/* fadd$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc800, { 0x40 }, { 0x40 } }
  },
/* fsub$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc820, { 0x40 }, { 0x40 } }
  },
/* fmul$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc840, { 0x40 }, { 0x40 } }
  },
/* fdiv$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc860, { 0x40 }, { 0x40 } }
  },
/* fcmp$alu32cond $alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc880, { 0x40 }, { 0x40 } }
  },
/* fabs$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc8a0, { 0x40 }, { 0x40 } }
  },
/* frsb$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc8c0, { 0x40 }, { 0x40 } }
  },
/* fmax$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc8e0, { 0x40 }, { 0x40 } }
  },
/* frcp$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc900, { 0x40 }, { 0x40 } }
  },
/* frsqrt$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc920, { 0x40 }, { 0x40 } }
  },
/* fnmul$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc940, { 0x40 }, { 0x40 } }
  },
/* fmin$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc960, { 0x40 }, { 0x40 } }
  },
/* fceil$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc980, { 0x40 }, { 0x40 } }
  },
/* ffloor$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc9a0, { 0x40 }, { 0x40 } }
  },
/* flog2$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc9c0, { 0x40 }, { 0x40 } }
  },
/* fexp2$alu32cond $alu32dreg,$floatimm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (FLOATIMM6), 0 } },
    & ifmt_faddi, { 0xc9e0, { 0x40 }, { 0x40 } }
  },
/* ftrunc$alu32cond $alu32dreg,$alu32areg,sasl $alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'l', ' ', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xca00, { 0x0 }, { 0x60 } }
  },
/* floor$alu32cond $alu32dreg,$alu32areg,sasl $alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'l', ' ', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xca20, { 0x0 }, { 0x60 } }
  },
/* flts$alu32cond $alu32dreg,$alu32areg,sasr $alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'r', ' ', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xca40, { 0x0 }, { 0x60 } }
  },
/* fltu$alu32cond $alu32dreg,$alu32areg,sasr $alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'r', ' ', OP (ALU32BREG), 0 } },
    & ifmt_ldcndidx, { 0xca60, { 0x0 }, { 0x60 } }
  },
/* ftrunc$alu32cond $alu32dreg,$alu32areg,sasl$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'l', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xca00, { 0x40 }, { 0x40 } }
  },
/* floor$alu32cond $alu32dreg,$alu32areg,sasl$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'l', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xca20, { 0x40 }, { 0x40 } }
  },
/* flts$alu32cond $alu32dreg,$alu32areg,sasr$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'r', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xca40, { 0x40 }, { 0x40 } }
  },
/* fltu$alu32cond $alu32dreg,$alu32areg,sasr$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', 's', 'a', 's', 'r', OP (IMM6), 0 } },
    & ifmt_mulhdiss, { 0xca60, { 0x40 }, { 0x40 } }
  },
/* lea.l $alu48idreg,$alu48pcrel */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48PCREL), 0 } },
    & ifmt_lea48, { 0xe500 }
  },
/* ld $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe700, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* st $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe720, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* ldh $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe740, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* sth $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe760, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* ldb $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe780, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* stb $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe7a0, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* ldsh $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe7c0, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* ldsb $alu48idreg,$mem48pcrel27 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (MEM48PCREL27), 0 } },
    & ifmt_ldpcrel27, { 0xe7e0, { 0x0, 0xf800 }, { 0x0, 0xf800 } }
  },
/* ld.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe600 }
  },
/* st.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe620 }
  },
/* ldh.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe640 }
  },
/* sth.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe660 }
  },
/* ldb.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe680 }
  },
/* stb.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe6a0 }
  },
/* ldsh.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe6c0 }
  },
/* ldsb.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27, { 0xe6e0 }
  },
/* add.l $alu48idreg,$alu48isreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48ISREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_add48i, { 0xec00 }
  },
/* mov.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe800 }
  },
/* cmn.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe820 }
  },
/* add.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe840 }
  },
/* bic.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe860 }
  },
/* mul.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe880 }
  },
/* eor.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe8a0 }
  },
/* sub.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe8c0 }
  },
/* and.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe8e0 }
  },
/* cmp.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe940 }
  },
/* rsub.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe960 }
  },
/* or.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe9a0 }
  },
/* max.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xe9e0 }
  },
/* min.l $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48, { 0xea20 }
  },
/* vec48 $operand10_0,$operand47_16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (OPERAND10_0), ',', OP (OPERAND47_16), 0 } },
    & ifmt_vec48, { 0xf000 }
  },
/* vec80 $operand10_0,$operand47_16,$operand79_48 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (OPERAND10_0), ',', OP (OPERAND47_16), ',', OP (OPERAND79_48), 0 } },
    & ifmt_vec80, { 0xf800 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

/* Formats for ALIAS macro-insns.  */

#define F(f) & vc4_cgen_ifld_table[VC4_##f]
static const CGEN_IFMT ifmt_breg_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_movcpuid_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushlr ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0_BASE_24) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushrn_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff9f, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_pushst ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_poppc ATTRIBUTE_UNUSED = {
  16, 16, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0_BASE_24) }, { 0 } }
};

static const CGEN_IFMT ifmt_popld_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff9f, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OP6_5) }, { F (F_OP4_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_popld ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xf000, { { F (F_OPLEN) }, { F (F_LDSTOFF) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_stoff_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xf000, { { F (F_OPLEN) }, { F (F_LDSTOFF) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsp_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_SPOFFSET) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_stsp_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_SPOFFSET) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_stoff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldhoff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_sthoff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldboff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_stboff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldshoff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsboff12_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfee0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OFFSET12) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_stind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldhind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_sthind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldbind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_stbind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldshind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsbind_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_8) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_stoffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldhoffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_sthoffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldboffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_stboffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldshoffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsboffzero ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_9) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP8) }, { F (F_OP26_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_stoff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldhoff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_sthoff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldboff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_stboff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldshoff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsboff16_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xfce0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bcc_relaxable ATTRIBUTE_UNUSED = {
  16, 16, 0xf800, { { F (F_OPLEN) }, { F (F_OP11) }, { F (F_OP10_7) }, { F (F_PCRELCC) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmn16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_add16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bic16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_mul16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_eor16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_sub16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_and16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_not16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_ror16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmp16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_rsub16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_btst16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_or16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bmask16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_max16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bset16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_min16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bclr16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds216_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bchg16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds416_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds816_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds1616_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_signext16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_neg16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_lsr16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_msb16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_shl16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bitrev16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_asr16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_abs16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xff00, { { F (F_OP15_13) }, { F (F_ALU16OP) }, { F (F_OP7_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_muli16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_subi16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_noti16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmpi16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_btsti16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bmaski16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bseti16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bclri16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bchgi16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8i16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4_SHL3) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_signexti16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_lsri16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_shli16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_asri16_nosuf ATTRIBUTE_UNUSED = {
  16, 16, 0xfe00, { { F (F_OP15_13) }, { F (F_ALU16OPI) }, { F (F_OP8_4) }, { F (F_OP3_0) }, { 0 } }
};

static const CGEN_IFMT ifmt_bcc32_relaxed ATTRIBUTE_UNUSED = {
  16, 32, 0xf080, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7) }, { F (F_OFFSET23BITS) }, { 0 } }
};

static const CGEN_IFMT ifmt_mov32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmn32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_add32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bic32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_mul32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_eor32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_sub32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_and32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_not32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ror32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmp32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_rsub32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_btst32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_or32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bmask32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_max32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bset32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_min32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bclr32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds232_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bchg32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds432_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds832_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds1632_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_signext32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_neg32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_lsr32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_msb32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_shl32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bitrev32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_asr32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_abs32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22_21) }, { F (F_OP20_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmni32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bici32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_muli32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_eori32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_subi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_andi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_noti32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_rori32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmpi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_rsubi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_btsti32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffff, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_ori32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bmaski32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_maxi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bseti32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_mini32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bclri32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds2i32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S_SHL1) }, { 0 } }
};

static const CGEN_IFMT ifmt_bchgi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds4i32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S_SHL2) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8i32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S_SHL3) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds16i32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S_SHL4) }, { 0 } }
};

static const CGEN_IFMT ifmt_signexti32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_negi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_lsri32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_msbi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_shli32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bitrevi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_asri32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_absi32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_27) }, { F (F_OP26_23) }, { F (F_OP22) }, { F (F_OP21_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_lea32pc_relaxable ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_PCREL16) }, { 0 } }
};

static const CGEN_IFMT ifmt_moviu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmniu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_addiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_biciu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_muliu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_eoriu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_subiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_andiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_notiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_roriu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmpiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_rsubiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_btstiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_oriu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bmaskiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_maxiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bsetiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_miniu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bclriu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds2iu32_shl1_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S_SHL1) }, { 0 } }
};

static const CGEN_IFMT ifmt_bchgiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds4iu32_shl2_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S_SHL2) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds8iu32_shl3_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S_SHL3) }, { 0 } }
};

static const CGEN_IFMT ifmt_adds16iu32_shl4_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S_SHL4) }, { 0 } }
};

static const CGEN_IFMT ifmt_signextiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_negiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_lsriu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_msbiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_shliu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_bitreviu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_asriu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_absiu32_nosuf ATTRIBUTE_UNUSED = {
  16, 32, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP31_16S) }, { 0 } }
};

static const CGEN_IFMT ifmt_lea48_relaxed ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_PCREL32_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldoff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_stoff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldhoff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_sthoff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldboff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_stboff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldshoff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_ldsboff27_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_8) }, { F (F_OP7_5) }, { F (F_OP4_0) }, { F (F_OP47_43) }, { F (F_OFFSET27_48) }, { 0 } }
};

static const CGEN_IFMT ifmt_add48i_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xfc00, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_movi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmni48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_addi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_bici48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_muli48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_eori48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_subi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_andi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_cmpi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_rsubi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_ori48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_maxi48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

static const CGEN_IFMT ifmt_mini48_nosuf ATTRIBUTE_UNUSED = {
  16, 48, 0xffe0, { { F (F_OPLEN) }, { F (F_OP11_10) }, { F (F_OP9_5) }, { F (F_OP4_0) }, { F (F_OP47_16) }, { 0 } }
};

#undef F

/* Each non-simple macro entry points to an array of expansion possibilities.  */

#define A(a) (1 << CGEN_INSN_##a)
#define OPERAND(op) VC4_OPERAND_##op
#define MNEM CGEN_SYNTAX_MNEMONIC /* syntax value for mnemonic */
#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))

/* The macro instruction table.  */

static const CGEN_IBASE vc4_cgen_macro_insn_table[] =
{
/* b $alu32dreg */
  {
    -1, "breg_nosuf", "b", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov $alu32dreg,cpuid */
  {
    -1, "movcpuid_nosuf", "mov", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* push lr */
  {
    -1, "pushlr", "push", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* push $ppstartreg */
  {
    -1, "pushrn_nosuf", "push", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* push $alu32dreg */
  {
    -1, "pushst", "push", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* pop pc */
  {
    -1, "poppc", "pop", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* pop $ppstartreg */
  {
    -1, "popld_nosuf", "pop", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* pop $alu32dreg */
  {
    -1, "popld", "pop", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu16dreg,($alu16sreg+$ldstoff) */
  {
    -1, "ldoff_nosuf", "ld", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu16dreg,($alu16sreg+$ldstoff) */
  {
    -1, "stoff_nosuf", "st", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu16dreg,(sp+$spoffset) */
  {
    -1, "ldsp_nosuf", "ld", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu16dreg,(sp+$spoffset) */
  {
    -1, "stsp_nosuf", "st", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "ldoff12_nosuf", "ld", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "stoff12_nosuf", "st", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "ldhoff12_nosuf", "ldh", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "sthoff12_nosuf", "sth", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "ldboff12_nosuf", "ldb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "stboff12_nosuf", "stb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "ldshoff12_nosuf", "ldsh", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb $alu32dreg,($alu32areg+$offset12) */
  {
    -1, "ldsboff12_nosuf", "ldsb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu16dreg,($alu16sreg) */
  {
    -1, "ldind_nosuf", "ld", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu16dreg,($alu16sreg) */
  {
    -1, "stind_nosuf", "st", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh $alu16dreg,($alu16sreg) */
  {
    -1, "ldhind_nosuf", "ldh", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth $alu16dreg,($alu16sreg) */
  {
    -1, "sthind_nosuf", "sth", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb $alu16dreg,($alu16sreg) */
  {
    -1, "ldbind_nosuf", "ldb", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb $alu16dreg,($alu16sreg) */
  {
    -1, "stbind_nosuf", "stb", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh $alu16dreg,($alu16sreg) */
  {
    -1, "ldshind_nosuf", "ldsh", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb $alu16dreg,($alu16sreg) */
  {
    -1, "ldsbind_nosuf", "ldsb", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu32dreg,($alu32areg) */
  {
    -1, "ldoffzero", "ld", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu32dreg,($alu32areg) */
  {
    -1, "stoffzero", "st", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh $alu32dreg,($alu32areg) */
  {
    -1, "ldhoffzero", "ldh", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth $alu32dreg,($alu32areg) */
  {
    -1, "sthoffzero", "sth", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb $alu32dreg,($alu32areg) */
  {
    -1, "ldboffzero", "ldb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb $alu32dreg,($alu32areg) */
  {
    -1, "stboffzero", "stb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh $alu32dreg,($alu32areg) */
  {
    -1, "ldshoffzero", "ldsh", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb $alu32dreg,($alu32areg) */
  {
    -1, "ldsboffzero", "ldsb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "ldoff16_nosuf", "ld", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "stoff16_nosuf", "st", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "ldhoff16_nosuf", "ldh", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "sthoff16_nosuf", "sth", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "ldboff16_nosuf", "ldb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "stboff16_nosuf", "stb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "ldshoff16_nosuf", "ldsh", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb $alu32dreg,($off16basereg+$offset16) */
  {
    -1, "ldsboff16_nosuf", "ldsb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* b$condcode $pcrelcc */
  {
    -1, "bcc_relaxable", "b", 16,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov $alu16dreg,$alu16sreg */
  {
    -1, "mov16_nosuf", "mov", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn $alu16dreg,$alu16sreg */
  {
    -1, "cmn16_nosuf", "cmn", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu16dreg,$alu16sreg */
  {
    -1, "add16_nosuf", "add", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic $alu16dreg,$alu16sreg */
  {
    -1, "bic16_nosuf", "bic", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul $alu16dreg,$alu16sreg */
  {
    -1, "mul16_nosuf", "mul", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor $alu16dreg,$alu16sreg */
  {
    -1, "eor16_nosuf", "eor", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $alu16dreg,$alu16sreg */
  {
    -1, "sub16_nosuf", "sub", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* and $alu16dreg,$alu16sreg */
  {
    -1, "and16_nosuf", "and", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* not $alu16dreg,$alu16sreg */
  {
    -1, "not16_nosuf", "not", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror $alu16dreg,$alu16sreg */
  {
    -1, "ror16_nosuf", "ror", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp $alu16dreg,$alu16sreg */
  {
    -1, "cmp16_nosuf", "cmp", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub $alu16dreg,$alu16sreg */
  {
    -1, "rsub16_nosuf", "rsub", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst $alu16dreg,$alu16sreg */
  {
    -1, "btst16_nosuf", "btst", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* or $alu16dreg,$alu16sreg */
  {
    -1, "or16_nosuf", "or", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask $alu16dreg,$alu16sreg */
  {
    -1, "bmask16_nosuf", "bmask", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* max $alu16dreg,$alu16sreg */
  {
    -1, "max16_nosuf", "max", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset $alu16dreg,$alu16sreg */
  {
    -1, "bset16_nosuf", "bitset", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* min $alu16dreg,$alu16sreg */
  {
    -1, "min16_nosuf", "min", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear $alu16dreg,$alu16sreg */
  {
    -1, "bclr16_nosuf", "bitclear", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale $alu16dreg,$alu16sreg$shl1 */
  {
    -1, "adds216_nosuf", "addscale", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip $alu16dreg,$alu16sreg */
  {
    -1, "bchg16_nosuf", "bitflip", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale $alu16dreg,$alu16sreg$shl2 */
  {
    -1, "adds416_nosuf", "addscale", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale $alu16dreg,$alu16sreg$shl3 */
  {
    -1, "adds816_nosuf", "addscale", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale $alu16dreg,$alu16sreg$shl4 */
  {
    -1, "adds1616_nosuf", "addscale", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext $alu16dreg,$alu16sreg */
  {
    -1, "signext16_nosuf", "signext", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg $alu16dreg,$alu16sreg */
  {
    -1, "neg16_nosuf", "neg", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr $alu16dreg,$alu16sreg */
  {
    -1, "lsr16_nosuf", "lsr", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb $alu16dreg,$alu16sreg */
  {
    -1, "msb16_nosuf", "msb", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl $alu16dreg,$alu16sreg */
  {
    -1, "shl16_nosuf", "shl", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitrev $alu16dreg,$alu16sreg */
  {
    -1, "bitrev16_nosuf", "bitrev", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr $alu16dreg,$alu16sreg */
  {
    -1, "asr16_nosuf", "asr", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs $alu16dreg,$alu16sreg */
  {
    -1, "abs16_nosuf", "abs", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov $alu16dreg,$alu16imm */
  {
    -1, "movi16_nosuf", "mov", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu16dreg,$alu16imm */
  {
    -1, "addi16_nosuf", "add", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul $alu16dreg,$alu16imm */
  {
    -1, "muli16_nosuf", "mul", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $alu16dreg,$alu16imm */
  {
    -1, "subi16_nosuf", "sub", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* not $alu16dreg,$alu16imm */
  {
    -1, "noti16_nosuf", "not", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp $alu16dreg,$alu16imm */
  {
    -1, "cmpi16_nosuf", "cmp", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst $alu16dreg,$alu16imm */
  {
    -1, "btsti16_nosuf", "btst", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask $alu16dreg,$alu16imm */
  {
    -1, "bmaski16_nosuf", "bmask", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset $alu16dreg,$alu16imm */
  {
    -1, "bseti16_nosuf", "bitset", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear $alu16dreg,$alu16imm */
  {
    -1, "bclri16_nosuf", "bitclear", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip $alu16dreg,$alu16imm */
  {
    -1, "bchgi16_nosuf", "bitflip", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale $alu16dreg,$alu16imm_shl3 */
  {
    -1, "adds8i16_nosuf", "addscale", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext $alu16dreg,$alu16imm */
  {
    -1, "signexti16_nosuf", "signext", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr $alu16dreg,$alu16imm */
  {
    -1, "lsri16_nosuf", "lsr", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl $alu16dreg,$alu16imm */
  {
    -1, "shli16_nosuf", "shl", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr $alu16dreg,$alu16imm */
  {
    -1, "asri16_nosuf", "asr", 16,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* b$condcodebcc32 $offset23bits */
  {
    -1, "bcc32_relaxed", "b", 32,
    { 0|A(RELAXED)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov${alu32cond} $alu32dreg,$alu32breg */
  {
    -1, "mov32_nosuf", "mov", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn${alu32cond} $alu32areg,$alu32breg */
  {
    -1, "cmn32_nosuf", "cmn", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "add32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "bic32_nosuf", "bic", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "mul32_nosuf", "mul", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "eor32_nosuf", "eor", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "sub32_nosuf", "sub", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* and${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "and32_nosuf", "and", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* not${alu32cond} $alu32dreg,$alu32breg */
  {
    -1, "not32_nosuf", "not", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "ror32_nosuf", "ror", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp${alu32cond} $alu32areg,$alu32breg */
  {
    -1, "cmp32_nosuf", "cmp", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "rsub32_nosuf", "rsub", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst${alu32cond} $alu32areg,$alu32breg */
  {
    -1, "btst32_nosuf", "btst", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* or${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "or32_nosuf", "or", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "bmask32_nosuf", "bmask", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* max${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "max32_nosuf", "max", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "bset32_nosuf", "bitset", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* min${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "min32_nosuf", "min", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "bclr32_nosuf", "bitclear", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl1 */
  {
    -1, "adds232_nosuf", "addscale", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "bchg32_nosuf", "bitflip", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl2 */
  {
    -1, "adds432_nosuf", "addscale", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl3 */
  {
    -1, "adds832_nosuf", "addscale", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl4 */
  {
    -1, "adds1632_nosuf", "addscale", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "signext32_nosuf", "signext", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg${alu32cond} $alu32dreg,$alu32breg */
  {
    -1, "neg32_nosuf", "neg", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "lsr32_nosuf", "lsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb${alu32cond} $alu32dreg,$alu32breg */
  {
    -1, "msb32_nosuf", "msb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "shl32_nosuf", "shl", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitrev${alu32cond} $alu32dreg,$alu32breg */
  {
    -1, "bitrev32_nosuf", "bitrev", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    -1, "asr32_nosuf", "asr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs${alu32cond} $alu32dreg,$alu32breg */
  {
    -1, "abs32_nosuf", "abs", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov${alu32cond} $alu32dreg,$imm6 */
  {
    -1, "movi32_nosuf", "mov", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn${alu32cond} $alu32areg,$imm6 */
  {
    -1, "cmni32_nosuf", "cmn", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "addi32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "bici32_nosuf", "bic", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "muli32_nosuf", "mul", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "eori32_nosuf", "eor", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "subi32_nosuf", "sub", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* and${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "andi32_nosuf", "and", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* not${alu32cond} $alu32dreg,$imm6 */
  {
    -1, "noti32_nosuf", "not", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "rori32_nosuf", "ror", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp${alu32cond} $alu32areg,$imm6 */
  {
    -1, "cmpi32_nosuf", "cmp", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "rsubi32_nosuf", "rsub", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst${alu32cond} $alu32areg,$imm6 */
  {
    -1, "btsti32_nosuf", "btst", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* or${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "ori32_nosuf", "or", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "bmaski32_nosuf", "bmask", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* max${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "maxi32_nosuf", "max", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "bseti32_nosuf", "bitset", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* min${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "mini32_nosuf", "min", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "bclri32_nosuf", "bitclear", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl1 */
  {
    -1, "adds2i32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "bchgi32_nosuf", "bitflip", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl2 */
  {
    -1, "adds4i32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl3 */
  {
    -1, "adds8i32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl4 */
  {
    -1, "adds16i32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "signexti32_nosuf", "signext", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg${alu32cond} $alu32dreg,$imm6 */
  {
    -1, "negi32_nosuf", "neg", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "lsri32_nosuf", "lsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb${alu32cond} $alu32dreg,$imm6 */
  {
    -1, "msbi32_nosuf", "msb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "shli32_nosuf", "shl", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitrev${alu32cond} $alu32dreg,$imm6 */
  {
    -1, "bitrevi32_nosuf", "bitrev", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    -1, "asri32_nosuf", "asr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs${alu32cond} $alu32dreg,$imm6 */
  {
    -1, "absi32_nosuf", "abs", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lea $alu48idreg,$pcrel16 */
  {
    -1, "lea32pc_relaxable", "lea", 32,
    { 0|A(RELAXABLE)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov $alu48idreg,$offset16 */
  {
    -1, "moviu32_nosuf", "mov", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn $alu48idreg,$offset16 */
  {
    -1, "cmniu32_nosuf", "cmn", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$offset16 */
  {
    -1, "addiu32_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic $alu48idreg,$offset16 */
  {
    -1, "biciu32_nosuf", "bic", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul $alu48idreg,$offset16 */
  {
    -1, "muliu32_nosuf", "mul", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor $alu48idreg,$offset16 */
  {
    -1, "eoriu32_nosuf", "eor", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $alu48idreg,$offset16 */
  {
    -1, "subiu32_nosuf", "sub", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* and $alu48idreg,$offset16 */
  {
    -1, "andiu32_nosuf", "and", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* not $alu48idreg,$offset16 */
  {
    -1, "notiu32_nosuf", "not", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror $alu48idreg,$offset16 */
  {
    -1, "roriu32_nosuf", "ror", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp $alu48idreg,$offset16 */
  {
    -1, "cmpiu32_nosuf", "cmp", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub $alu48idreg,$offset16 */
  {
    -1, "rsubiu32_nosuf", "rsub", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst $alu48idreg,$offset16 */
  {
    -1, "btstiu32_nosuf", "btst", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* or $alu48idreg,$offset16 */
  {
    -1, "oriu32_nosuf", "or", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask $alu48idreg,$offset16 */
  {
    -1, "bmaskiu32_nosuf", "bmask", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* max $alu48idreg,$offset16 */
  {
    -1, "maxiu32_nosuf", "max", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset $alu48idreg,$offset16 */
  {
    -1, "bsetiu32_nosuf", "bitset", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* min $alu48idreg,$offset16 */
  {
    -1, "miniu32_nosuf", "min", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear $alu48idreg,$offset16 */
  {
    -1, "bclriu32_nosuf", "bitclear", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$offset16 */
  {
    -1, "adds2iu32_shl1_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip $alu48idreg,$offset16 */
  {
    -1, "bchgiu32_nosuf", "bitflip", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$offset16 */
  {
    -1, "adds4iu32_shl2_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$offset16 */
  {
    -1, "adds8iu32_shl3_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$offset16 */
  {
    -1, "adds16iu32_shl4_nosuf", "add", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext $alu48idreg,$offset16 */
  {
    -1, "signextiu32_nosuf", "signext", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg $alu48idreg,$offset16 */
  {
    -1, "negiu32_nosuf", "neg", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr $alu48idreg,$offset16 */
  {
    -1, "lsriu32_nosuf", "lsr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb $alu48idreg,$offset16 */
  {
    -1, "msbiu32_nosuf", "msb", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl $alu48idreg,$offset16 */
  {
    -1, "shliu32_nosuf", "shl", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitrev $alu48idreg,$offset16 */
  {
    -1, "bitreviu32_nosuf", "bitrev", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr $alu48idreg,$offset16 */
  {
    -1, "asriu32_nosuf", "asr", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs $alu48idreg,$offset16 */
  {
    -1, "absiu32_nosuf", "abs", 32,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* lea $alu48idreg,$alu48pcrel */
  {
    -1, "lea48_relaxed", "lea", 48,
    { 0|A(RELAXED)|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "ldoff27_nosuf", "ld", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "stoff27_nosuf", "st", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "ldhoff27_nosuf", "ldh", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "sthoff27_nosuf", "sth", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "ldboff27_nosuf", "ldb", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "stboff27_nosuf", "stb", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "ldshoff27_nosuf", "ldsh", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    -1, "ldsboff27_nosuf", "ldsb", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$alu48isreg,$alu48immu */
  {
    -1, "add48i_nosuf", "add", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov $alu48idreg,$alu48immu */
  {
    -1, "movi48_nosuf", "mov", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn $alu48idreg,$alu48immu */
  {
    -1, "cmni48_nosuf", "cmn", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* add $alu48idreg,$alu48immu */
  {
    -1, "addi48_nosuf", "add", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic $alu48idreg,$alu48immu */
  {
    -1, "bici48_nosuf", "bic", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul $alu48idreg,$alu48immu */
  {
    -1, "muli48_nosuf", "mul", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor $alu48idreg,$alu48immu */
  {
    -1, "eori48_nosuf", "eor", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub $alu48idreg,$alu48immu */
  {
    -1, "subi48_nosuf", "sub", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* and $alu48idreg,$alu48immu */
  {
    -1, "andi48_nosuf", "and", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp $alu48idreg,$alu48immu */
  {
    -1, "cmpi48_nosuf", "cmp", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub $alu48idreg,$alu48immu */
  {
    -1, "rsubi48_nosuf", "rsub", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* or $alu48idreg,$alu48immu */
  {
    -1, "ori48_nosuf", "or", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* max $alu48idreg,$alu48immu */
  {
    -1, "maxi48_nosuf", "max", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
/* min $alu48idreg,$alu48immu */
  {
    -1, "mini48_nosuf", "min", 48,
    { 0|A(ALIAS), { { { (1<<MACH_BASE), 0 } } } }
  },
};

/* The macro instruction opcode table.  */

static const CGEN_OPCODE vc4_cgen_macro_insn_opcode_table[] =
{
/* b $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_breg_nosuf, { 0x40 }
  },
/* mov $alu32dreg,cpuid */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', 'c', 'p', 'u', 'i', 'd', 0 } },
    & ifmt_movcpuid_nosuf, { 0xe0 }
  },
/* push lr */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'l', 'r', 0 } },
    & ifmt_pushlr, { 0x3ef }
  },
/* push $ppstartreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (PPSTARTREG), 0 } },
    & ifmt_pushrn_nosuf, { 0x280 }
  },
/* push $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_pushst, { 0xa420, { 0xcf00 }, { 0xffff } }
  },
/* pop pc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', 'p', 'c', 0 } },
    & ifmt_poppc, { 0x36f }
  },
/* pop $ppstartreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (PPSTARTREG), 0 } },
    & ifmt_popld_nosuf, { 0x200 }
  },
/* pop $alu32dreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), 0 } },
    & ifmt_popld, { 0xa500, { 0xcf00 }, { 0xffff } }
  },
/* ld $alu16dreg,($alu16sreg+$ldstoff) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), '+', OP (LDSTOFF), ')', 0 } },
    & ifmt_ldoff_nosuf, { 0x2000 }
  },
/* st $alu16dreg,($alu16sreg+$ldstoff) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), '+', OP (LDSTOFF), ')', 0 } },
    & ifmt_stoff_nosuf, { 0x3000 }
  },
/* ld $alu16dreg,(sp+$spoffset) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', 's', 'p', '+', OP (SPOFFSET), ')', 0 } },
    & ifmt_ldsp_nosuf, { 0x400 }
  },
/* st $alu16dreg,(sp+$spoffset) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', 's', 'p', '+', OP (SPOFFSET), ')', 0 } },
    & ifmt_stsp_nosuf, { 0x600 }
  },
/* ld $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldoff12_nosuf, { 0xa200 }
  },
/* st $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_stoff12_nosuf, { 0xa220 }
  },
/* ldh $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldhoff12_nosuf, { 0xa240 }
  },
/* sth $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_sthoff12_nosuf, { 0xa260 }
  },
/* ldb $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldboff12_nosuf, { 0xa280 }
  },
/* stb $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_stboff12_nosuf, { 0xa2a0 }
  },
/* ldsh $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldshoff12_nosuf, { 0xa2c0 }
  },
/* ldsb $alu32dreg,($alu32areg+$offset12) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), '+', OP (OFFSET12), ')', 0 } },
    & ifmt_ldsboff12_nosuf, { 0xa2e0 }
  },
/* ld $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldind_nosuf, { 0x800 }
  },
/* st $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_stind_nosuf, { 0x900 }
  },
/* ldh $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldhind_nosuf, { 0xa00 }
  },
/* sth $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_sthind_nosuf, { 0xb00 }
  },
/* ldb $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldbind_nosuf, { 0xc00 }
  },
/* stb $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_stbind_nosuf, { 0xd00 }
  },
/* ldsh $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldshind_nosuf, { 0xe00 }
  },
/* ldsb $alu16dreg,($alu16sreg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', '(', OP (ALU16SREG), ')', 0 } },
    & ifmt_ldsbind_nosuf, { 0xf00 }
  },
/* ld $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldoffzero, { 0xa200, { 0x0 }, { 0x7ff } }
  },
/* st $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_stoffzero, { 0xa220, { 0x0 }, { 0x7ff } }
  },
/* ldh $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldhoffzero, { 0xa240, { 0x0 }, { 0x7ff } }
  },
/* sth $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_sthoffzero, { 0xa260, { 0x0 }, { 0x7ff } }
  },
/* ldb $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldboffzero, { 0xa280, { 0x0 }, { 0x7ff } }
  },
/* stb $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_stboffzero, { 0xa2a0, { 0x0 }, { 0x7ff } }
  },
/* ldsh $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldshoffzero, { 0xa2c0, { 0x0 }, { 0x7ff } }
  },
/* ldsb $alu32dreg,($alu32areg) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (ALU32AREG), ')', 0 } },
    & ifmt_ldsboffzero, { 0xa2e0, { 0x0 }, { 0x7ff } }
  },
/* ld $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldoff16_nosuf, { 0xa800 }
  },
/* st $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_stoff16_nosuf, { 0xa820 }
  },
/* ldh $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldhoff16_nosuf, { 0xa840 }
  },
/* sth $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_sthoff16_nosuf, { 0xa860 }
  },
/* ldb $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldboff16_nosuf, { 0xa880 }
  },
/* stb $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_stboff16_nosuf, { 0xa8a0 }
  },
/* ldsh $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldshoff16_nosuf, { 0xa8c0 }
  },
/* ldsb $alu32dreg,($off16basereg+$offset16) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU32DREG), ',', '(', OP (OFF16BASEREG), '+', OP (OFFSET16), ')', 0 } },
    & ifmt_ldsboff16_nosuf, { 0xa8e0 }
  },
/* b$condcode $pcrelcc */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODE), ' ', OP (PCRELCC), 0 } },
    & ifmt_bcc_relaxable, { 0x1800 }
  },
/* mov $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mov16_nosuf, { 0x4000 }
  },
/* cmn $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_cmn16_nosuf, { 0x4100 }
  },
/* add $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_add16_nosuf, { 0x4200 }
  },
/* bic $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_bic16_nosuf, { 0x4300 }
  },
/* mul $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_mul16_nosuf, { 0x4400 }
  },
/* eor $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_eor16_nosuf, { 0x4500 }
  },
/* sub $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_sub16_nosuf, { 0x4600 }
  },
/* and $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_and16_nosuf, { 0x4700 }
  },
/* not $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_not16_nosuf, { 0x4800 }
  },
/* ror $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_ror16_nosuf, { 0x4900 }
  },
/* cmp $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_cmp16_nosuf, { 0x4a00 }
  },
/* rsub $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_rsub16_nosuf, { 0x4b00 }
  },
/* btst $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_btst16_nosuf, { 0x4c00 }
  },
/* or $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_or16_nosuf, { 0x4d00 }
  },
/* bmask $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_bmask16_nosuf, { 0x4e00 }
  },
/* max $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_max16_nosuf, { 0x4f00 }
  },
/* bitset $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_bset16_nosuf, { 0x5000 }
  },
/* min $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_min16_nosuf, { 0x5100 }
  },
/* bitclear $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_bclr16_nosuf, { 0x5200 }
  },
/* addscale $alu16dreg,$alu16sreg$shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL1), 0 } },
    & ifmt_adds216_nosuf, { 0x5300 }
  },
/* bitflip $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_bchg16_nosuf, { 0x5400 }
  },
/* addscale $alu16dreg,$alu16sreg$shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL2), 0 } },
    & ifmt_adds416_nosuf, { 0x5500 }
  },
/* addscale $alu16dreg,$alu16sreg$shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL3), 0 } },
    & ifmt_adds816_nosuf, { 0x5600 }
  },
/* addscale $alu16dreg,$alu16sreg$shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), OP (SHL4), 0 } },
    & ifmt_adds1616_nosuf, { 0x5700 }
  },
/* signext $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_signext16_nosuf, { 0x5800 }
  },
/* neg $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_neg16_nosuf, { 0x5900 }
  },
/* lsr $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_lsr16_nosuf, { 0x5a00 }
  },
/* msb $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_msb16_nosuf, { 0x5b00 }
  },
/* shl $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_shl16_nosuf, { 0x5c00 }
  },
/* bitrev $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_bitrev16_nosuf, { 0x5d00 }
  },
/* asr $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_asr16_nosuf, { 0x5e00 }
  },
/* abs $alu16dreg,$alu16sreg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16SREG), 0 } },
    & ifmt_abs16_nosuf, { 0x5f00 }
  },
/* mov $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_movi16_nosuf, { 0x6000 }
  },
/* add $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_addi16_nosuf, { 0x6200 }
  },
/* mul $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_muli16_nosuf, { 0x6400 }
  },
/* sub $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_subi16_nosuf, { 0x6600 }
  },
/* not $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_noti16_nosuf, { 0x6800 }
  },
/* cmp $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_cmpi16_nosuf, { 0x6a00 }
  },
/* btst $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_btsti16_nosuf, { 0x6c00 }
  },
/* bmask $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_bmaski16_nosuf, { 0x6e00 }
  },
/* bitset $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_bseti16_nosuf, { 0x7000 }
  },
/* bitclear $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_bclri16_nosuf, { 0x7200 }
  },
/* bitflip $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_bchgi16_nosuf, { 0x7400 }
  },
/* addscale $alu16dreg,$alu16imm_shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM_SHL3), 0 } },
    & ifmt_adds8i16_nosuf, { 0x7600 }
  },
/* signext $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_signexti16_nosuf, { 0x7800 }
  },
/* lsr $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_lsri16_nosuf, { 0x7a00 }
  },
/* shl $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_shli16_nosuf, { 0x7c00 }
  },
/* asr $alu16dreg,$alu16imm */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU16DREG), ',', OP (ALU16IMM), 0 } },
    & ifmt_asri16_nosuf, { 0x7e00 }
  },
/* b$condcodebcc32 $offset23bits */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (CONDCODEBCC32), ' ', OP (OFFSET23BITS), 0 } },
    & ifmt_bcc32_relaxed, { 0x9000 }
  },
/* mov${alu32cond} $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mov32_nosuf, { 0xc000, { 0x0 }, { 0xf860 } }
  },
/* cmn${alu32cond} $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_cmn32_nosuf, { 0xc020, { 0x0 }, { 0x60 } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_add32_nosuf, { 0xc040, { 0x0 }, { 0x60 } }
  },
/* bic${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_bic32_nosuf, { 0xc060, { 0x0 }, { 0x60 } }
  },
/* mul${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_mul32_nosuf, { 0xc080, { 0x0 }, { 0x60 } }
  },
/* eor${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_eor32_nosuf, { 0xc0a0, { 0x0 }, { 0x60 } }
  },
/* sub${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_sub32_nosuf, { 0xc0c0, { 0x0 }, { 0x60 } }
  },
/* and${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_and32_nosuf, { 0xc0e0, { 0x0 }, { 0x60 } }
  },
/* not${alu32cond} $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_not32_nosuf, { 0xc100, { 0x0 }, { 0xf860 } }
  },
/* ror${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_ror32_nosuf, { 0xc120, { 0x0 }, { 0x60 } }
  },
/* cmp${alu32cond} $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_cmp32_nosuf, { 0xc140, { 0x0 }, { 0x60 } }
  },
/* rsub${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_rsub32_nosuf, { 0xc160, { 0x0 }, { 0x60 } }
  },
/* btst${alu32cond} $alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_btst32_nosuf, { 0xc180, { 0x0 }, { 0x60 } }
  },
/* or${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_or32_nosuf, { 0xc1a0, { 0x0 }, { 0x60 } }
  },
/* bmask${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_bmask32_nosuf, { 0xc1c0, { 0x0 }, { 0x60 } }
  },
/* max${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_max32_nosuf, { 0xc1e0, { 0x0 }, { 0x60 } }
  },
/* bitset${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_bset32_nosuf, { 0xc200, { 0x0 }, { 0x60 } }
  },
/* min${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_min32_nosuf, { 0xc220, { 0x0 }, { 0x60 } }
  },
/* bitclear${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_bclr32_nosuf, { 0xc240, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL1), 0 } },
    & ifmt_adds232_nosuf, { 0xc260, { 0x0 }, { 0x60 } }
  },
/* bitflip${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_bchg32_nosuf, { 0xc280, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL2), 0 } },
    & ifmt_adds432_nosuf, { 0xc2a0, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL3), 0 } },
    & ifmt_adds832_nosuf, { 0xc2c0, { 0x0 }, { 0x60 } }
  },
/* addscale${alu32cond} $alu32dreg,$alu32areg,$alu32breg$shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), OP (SHL4), 0 } },
    & ifmt_adds1632_nosuf, { 0xc2e0, { 0x0 }, { 0x60 } }
  },
/* signext${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_signext32_nosuf, { 0xc300, { 0x0 }, { 0x60 } }
  },
/* neg${alu32cond} $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_neg32_nosuf, { 0xc320, { 0x0 }, { 0xf860 } }
  },
/* lsr${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_lsr32_nosuf, { 0xc340, { 0x0 }, { 0x60 } }
  },
/* msb${alu32cond} $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_msb32_nosuf, { 0xc360, { 0x0 }, { 0xf860 } }
  },
/* shl${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_shl32_nosuf, { 0xc380, { 0x0 }, { 0x60 } }
  },
/* bitrev${alu32cond} $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_bitrev32_nosuf, { 0xc3a0, { 0x0 }, { 0xf860 } }
  },
/* asr${alu32cond} $alu32dreg,$alu32areg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_asr32_nosuf, { 0xc3c0, { 0x0 }, { 0x60 } }
  },
/* abs${alu32cond} $alu32dreg,$alu32breg */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32BREG), 0 } },
    & ifmt_abs32_nosuf, { 0xc3e0, { 0x0 }, { 0xf860 } }
  },
/* mov${alu32cond} $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_movi32_nosuf, { 0xc000, { 0x40 }, { 0xf840 } }
  },
/* cmn${alu32cond} $alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_cmni32_nosuf, { 0xc020, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_addi32_nosuf, { 0xc040, { 0x40 }, { 0x40 } }
  },
/* bic${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_bici32_nosuf, { 0xc060, { 0x40 }, { 0x40 } }
  },
/* mul${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_muli32_nosuf, { 0xc080, { 0x40 }, { 0x40 } }
  },
/* eor${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_eori32_nosuf, { 0xc0a0, { 0x40 }, { 0x40 } }
  },
/* sub${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_subi32_nosuf, { 0xc0c0, { 0x40 }, { 0x40 } }
  },
/* and${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_andi32_nosuf, { 0xc0e0, { 0x40 }, { 0x40 } }
  },
/* not${alu32cond} $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_noti32_nosuf, { 0xc100, { 0x40 }, { 0xf840 } }
  },
/* ror${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_rori32_nosuf, { 0xc120, { 0x40 }, { 0x40 } }
  },
/* cmp${alu32cond} $alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_cmpi32_nosuf, { 0xc140, { 0x40 }, { 0x40 } }
  },
/* rsub${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_rsubi32_nosuf, { 0xc160, { 0x40 }, { 0x40 } }
  },
/* btst${alu32cond} $alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_btsti32_nosuf, { 0xc180, { 0x40 }, { 0x40 } }
  },
/* or${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_ori32_nosuf, { 0xc1a0, { 0x40 }, { 0x40 } }
  },
/* bmask${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_bmaski32_nosuf, { 0xc1c0, { 0x40 }, { 0x40 } }
  },
/* max${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_maxi32_nosuf, { 0xc1e0, { 0x40 }, { 0x40 } }
  },
/* bitset${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_bseti32_nosuf, { 0xc200, { 0x40 }, { 0x40 } }
  },
/* min${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_mini32_nosuf, { 0xc220, { 0x40 }, { 0x40 } }
  },
/* bitclear${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_bclri32_nosuf, { 0xc240, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl1 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL1), 0 } },
    & ifmt_adds2i32_nosuf, { 0xc260, { 0x40 }, { 0x40 } }
  },
/* bitflip${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_bchgi32_nosuf, { 0xc280, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl2 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL2), 0 } },
    & ifmt_adds4i32_nosuf, { 0xc2a0, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl3 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL3), 0 } },
    & ifmt_adds8i32_nosuf, { 0xc2c0, { 0x40 }, { 0x40 } }
  },
/* add${alu32cond} $alu32dreg,$alu32areg,$imm6_shl4 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6_SHL4), 0 } },
    & ifmt_adds16i32_nosuf, { 0xc2e0, { 0x40 }, { 0x40 } }
  },
/* signext${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_signexti32_nosuf, { 0xc300, { 0x40 }, { 0x40 } }
  },
/* neg${alu32cond} $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_negi32_nosuf, { 0xc320, { 0x40 }, { 0xf840 } }
  },
/* lsr${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_lsri32_nosuf, { 0xc340, { 0x40 }, { 0x40 } }
  },
/* msb${alu32cond} $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_msbi32_nosuf, { 0xc360, { 0x40 }, { 0xf840 } }
  },
/* shl${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_shli32_nosuf, { 0xc380, { 0x40 }, { 0x40 } }
  },
/* bitrev${alu32cond} $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_bitrevi32_nosuf, { 0xc3a0, { 0x40 }, { 0xf840 } }
  },
/* asr${alu32cond} $alu32dreg,$alu32areg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (ALU32AREG), ',', OP (IMM6), 0 } },
    & ifmt_asri32_nosuf, { 0xc3c0, { 0x40 }, { 0x40 } }
  },
/* abs${alu32cond} $alu32dreg,$imm6 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, OP (ALU32COND), ' ', OP (ALU32DREG), ',', OP (IMM6), 0 } },
    & ifmt_absi32_nosuf, { 0xc3e0, { 0x40 }, { 0xf840 } }
  },
/* lea $alu48idreg,$pcrel16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (PCREL16), 0 } },
    & ifmt_lea32pc_relaxable, { 0xbfe0 }
  },
/* mov $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_moviu32_nosuf, { 0xb000 }
  },
/* cmn $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_cmniu32_nosuf, { 0xb020 }
  },
/* add $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_addiu32_nosuf, { 0xb040 }
  },
/* bic $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_biciu32_nosuf, { 0xb060 }
  },
/* mul $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_muliu32_nosuf, { 0xb080 }
  },
/* eor $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_eoriu32_nosuf, { 0xb0a0 }
  },
/* sub $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_subiu32_nosuf, { 0xb0c0 }
  },
/* and $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_andiu32_nosuf, { 0xb0e0 }
  },
/* not $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_notiu32_nosuf, { 0xb100 }
  },
/* ror $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_roriu32_nosuf, { 0xb120 }
  },
/* cmp $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_cmpiu32_nosuf, { 0xb140 }
  },
/* rsub $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_rsubiu32_nosuf, { 0xb160 }
  },
/* btst $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_btstiu32_nosuf, { 0xb180 }
  },
/* or $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_oriu32_nosuf, { 0xb1a0 }
  },
/* bmask $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_bmaskiu32_nosuf, { 0xb1c0 }
  },
/* max $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_maxiu32_nosuf, { 0xb1e0 }
  },
/* bitset $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_bsetiu32_nosuf, { 0xb200 }
  },
/* min $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_miniu32_nosuf, { 0xb220 }
  },
/* bitclear $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_bclriu32_nosuf, { 0xb240 }
  },
/* add $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds2iu32_shl1_nosuf, { 0xb260 }
  },
/* bitflip $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_bchgiu32_nosuf, { 0xb280 }
  },
/* add $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds4iu32_shl2_nosuf, { 0xb2a0 }
  },
/* add $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds8iu32_shl3_nosuf, { 0xb2c0 }
  },
/* add $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_adds16iu32_shl4_nosuf, { 0xb2e0 }
  },
/* signext $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_signextiu32_nosuf, { 0xb300 }
  },
/* neg $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_negiu32_nosuf, { 0xb320 }
  },
/* lsr $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_lsriu32_nosuf, { 0xb340 }
  },
/* msb $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_msbiu32_nosuf, { 0xb360 }
  },
/* shl $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_shliu32_nosuf, { 0xb380 }
  },
/* bitrev $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_bitreviu32_nosuf, { 0xb3a0 }
  },
/* asr $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_asriu32_nosuf, { 0xb3c0 }
  },
/* abs $alu48idreg,$offset16 */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (OFFSET16), 0 } },
    & ifmt_absiu32_nosuf, { 0xb3e0 }
  },
/* lea $alu48idreg,$alu48pcrel */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48PCREL), 0 } },
    & ifmt_lea48_relaxed, { 0xe500 }
  },
/* ld $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldoff27_nosuf, { 0xe600 }
  },
/* st $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_stoff27_nosuf, { 0xe620 }
  },
/* ldh $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldhoff27_nosuf, { 0xe640 }
  },
/* sth $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_sthoff27_nosuf, { 0xe660 }
  },
/* ldb $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldboff27_nosuf, { 0xe680 }
  },
/* stb $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_stboff27_nosuf, { 0xe6a0 }
  },
/* ldsh $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldshoff27_nosuf, { 0xe6c0 }
  },
/* ldsb $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', '(', OP (MEM48SREG), '+', OP (MEM48OFFSET27), ')', 0 } },
    & ifmt_ldsboff27_nosuf, { 0xe6e0 }
  },
/* add $alu48idreg,$alu48isreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48ISREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_add48i_nosuf, { 0xec00 }
  },
/* mov $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_movi48_nosuf, { 0xe800 }
  },
/* cmn $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_cmni48_nosuf, { 0xe820 }
  },
/* add $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_addi48_nosuf, { 0xe840 }
  },
/* bic $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_bici48_nosuf, { 0xe860 }
  },
/* mul $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_muli48_nosuf, { 0xe880 }
  },
/* eor $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_eori48_nosuf, { 0xe8a0 }
  },
/* sub $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_subi48_nosuf, { 0xe8c0 }
  },
/* and $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_andi48_nosuf, { 0xe8e0 }
  },
/* cmp $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_cmpi48_nosuf, { 0xe940 }
  },
/* rsub $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_rsubi48_nosuf, { 0xe960 }
  },
/* or $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_ori48_nosuf, { 0xe9a0 }
  },
/* max $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_maxi48_nosuf, { 0xe9e0 }
  },
/* min $alu48idreg,$alu48immu */
  {
    { 0, 0, 0, 0 },
    { { MNEM, ' ', OP (ALU48IDREG), ',', OP (ALU48IMMU), 0 } },
    & ifmt_mini48_nosuf, { 0xea20 }
  },
};

#undef A
#undef OPERAND
#undef MNEM
#undef OP

#ifndef CGEN_ASM_HASH_P
#define CGEN_ASM_HASH_P(insn) 1
#endif

#ifndef CGEN_DIS_HASH_P
#define CGEN_DIS_HASH_P(insn) 1
#endif

/* Return non-zero if INSN is to be added to the hash table.
   Targets are free to override CGEN_{ASM,DIS}_HASH_P in the .opc file.  */

static int
asm_hash_insn_p (insn)
     const CGEN_INSN *insn ATTRIBUTE_UNUSED;
{
  return CGEN_ASM_HASH_P (insn);
}

static int
dis_hash_insn_p (insn)
     const CGEN_INSN *insn;
{
  /* If building the hash table and the NO-DIS attribute is present,
     ignore.  */
  if (CGEN_INSN_ATTR_VALUE (insn, CGEN_INSN_NO_DIS))
    return 0;
  return CGEN_DIS_HASH_P (insn);
}

#ifndef CGEN_ASM_HASH
#define CGEN_ASM_HASH_SIZE 127
#ifdef CGEN_MNEMONIC_OPERANDS
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE)
#else
#define CGEN_ASM_HASH(mnem) (*(unsigned char *) (mnem) % CGEN_ASM_HASH_SIZE) /*FIXME*/
#endif
#endif

/* It doesn't make much sense to provide a default here,
   but while this is under development we do.
   BUFFER is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

#ifndef CGEN_DIS_HASH
#define CGEN_DIS_HASH_SIZE 256
#define CGEN_DIS_HASH(buf, value) (*(unsigned char *) (buf))
#endif

/* The result is the hash value of the insn.
   Targets are free to override CGEN_{ASM,DIS}_HASH in the .opc file.  */

static unsigned int
asm_hash_insn (mnem)
     const char * mnem;
{
  return CGEN_ASM_HASH (mnem);
}

/* BUF is a pointer to the bytes of the insn, target order.
   VALUE is the first base_insn_bitsize bits as an int in host order.  */

static unsigned int
dis_hash_insn (buf, value)
     const char * buf ATTRIBUTE_UNUSED;
     CGEN_INSN_INT value ATTRIBUTE_UNUSED;
{
  return CGEN_DIS_HASH (buf, value);
}

/* Set the recorded length of the insn in the CGEN_FIELDS struct.  */

static void
set_fields_bitsize (CGEN_FIELDS *fields, int size)
{
  CGEN_FIELDS_BITSIZE (fields) = size;
}

/* Function to call before using the operand instance table.
   This plugs the opcode entries and macro instructions into the cpu table.  */

void
vc4_cgen_init_opcode_table (CGEN_CPU_DESC cd)
{
  int i;
  int num_macros = (sizeof (vc4_cgen_macro_insn_table) /
		    sizeof (vc4_cgen_macro_insn_table[0]));
  const CGEN_IBASE *ib = & vc4_cgen_macro_insn_table[0];
  const CGEN_OPCODE *oc = & vc4_cgen_macro_insn_opcode_table[0];
  CGEN_INSN *insns = xmalloc (num_macros * sizeof (CGEN_INSN));

  /* This test has been added to avoid a warning generated
     if memset is called with a third argument of value zero.  */
  if (num_macros >= 1)
    memset (insns, 0, num_macros * sizeof (CGEN_INSN));
  for (i = 0; i < num_macros; ++i)
    {
      insns[i].base = &ib[i];
      insns[i].opcode = &oc[i];
      vc4_cgen_build_insn_regex (& insns[i]);
    }
  cd->macro_insn_table.init_entries = insns;
  cd->macro_insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->macro_insn_table.num_init_entries = num_macros;

  oc = & vc4_cgen_insn_opcode_table[0];
  insns = (CGEN_INSN *) cd->insn_table.init_entries;
  for (i = 0; i < MAX_INSNS; ++i)
    {
      insns[i].opcode = &oc[i];
      vc4_cgen_build_insn_regex (& insns[i]);
    }

  cd->sizeof_fields = sizeof (CGEN_FIELDS);
  cd->set_fields_bitsize = set_fields_bitsize;

  cd->asm_hash_p = asm_hash_insn_p;
  cd->asm_hash = asm_hash_insn;
  cd->asm_hash_size = CGEN_ASM_HASH_SIZE;

  cd->dis_hash_p = dis_hash_insn_p;
  cd->dis_hash = dis_hash_insn;
  cd->dis_hash_size = CGEN_DIS_HASH_SIZE;
}
