/* CPU data for vc4.

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
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "vc4-desc.h"
#include "vc4-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "vc4", MACH_VC4 },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "vc4", ISA_VC4 },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE vc4_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE vc4_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE vc4_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE vc4_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { "SWITCH", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA vc4_cgen_isa_table[] = {
  { "vc4", 16, 16, 16, 80 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH vc4_cgen_mach_table[] = {
  { "vc4", "vc4", MACH_VC4, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_reg_entries[] =
{
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "r15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "r16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "r17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "r18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "r19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "r20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "r21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "r22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "r23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "gp", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "lr", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "r27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "r28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "r29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "sr", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "pc", 31, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_reg =
{
  & vc4_cgen_opval_h_reg_entries[0],
  32,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_fastreg_entries[] =
{
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "r15", 15, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_fastreg =
{
  & vc4_cgen_opval_h_fastreg_entries[0],
  16,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_ppreg_entries[] =
{
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r16", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "gp", 3, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_ppreg =
{
  & vc4_cgen_opval_h_ppreg_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_basereg_entries[] =
{
  { "gp", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "pc", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r0", 3, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_basereg =
{
  & vc4_cgen_opval_h_basereg_entries[0],
  4,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_cond_entries[] =
{
  { "eq", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "ne", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "cs", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "lo", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "cc", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "hs", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "mi", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "pl", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "vs", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "vc", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "hi", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "ls", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "ge", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "lt", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "gt", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "le", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "f", 15, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_cond =
{
  & vc4_cgen_opval_h_cond_entries[0],
  18,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_dotcond_entries[] =
{
  { ".eq", 0, {0, {{{0, 0}}}}, 0, 0 },
  { ".ne", 1, {0, {{{0, 0}}}}, 0, 0 },
  { ".cs", 2, {0, {{{0, 0}}}}, 0, 0 },
  { ".lo", 2, {0, {{{0, 0}}}}, 0, 0 },
  { ".cc", 3, {0, {{{0, 0}}}}, 0, 0 },
  { ".hs", 3, {0, {{{0, 0}}}}, 0, 0 },
  { ".mi", 4, {0, {{{0, 0}}}}, 0, 0 },
  { ".pl", 5, {0, {{{0, 0}}}}, 0, 0 },
  { ".vs", 6, {0, {{{0, 0}}}}, 0, 0 },
  { ".vc", 7, {0, {{{0, 0}}}}, 0, 0 },
  { ".hi", 8, {0, {{{0, 0}}}}, 0, 0 },
  { ".ls", 9, {0, {{{0, 0}}}}, 0, 0 },
  { ".ge", 10, {0, {{{0, 0}}}}, 0, 0 },
  { ".lt", 11, {0, {{{0, 0}}}}, 0, 0 },
  { ".gt", 12, {0, {{{0, 0}}}}, 0, 0 },
  { ".le", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "", 14, {0, {{{0, 0}}}}, 0, 0 },
  { ".f", 15, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_dotcond =
{
  & vc4_cgen_opval_h_dotcond_entries[0],
  18,
  0, 0, 0, 0, ""
};

static CGEN_KEYWORD_ENTRY vc4_cgen_opval_h_eltsize_entries[] =
{
  { "8", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "16", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "32", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "unk", 3, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD vc4_cgen_opval_h_eltsize =
{
  & vc4_cgen_opval_h_eltsize_entries[0],
  4,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY vc4_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-reg", HW_H_REG, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_reg, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-fastreg", HW_H_FASTREG, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_fastreg, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-ppreg", HW_H_PPREG, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_ppreg, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-basereg", HW_H_BASEREG, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_basereg, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-cond", HW_H_COND, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_cond, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-dotcond", HW_H_DOTCOND, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_dotcond, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PC), { { { (1<<MACH_BASE), 0 } } } } },
  { "h-eltsize", HW_H_ELTSIZE, CGEN_ASM_KEYWORD, (PTR) & vc4_cgen_opval_h_eltsize, { 0, { { { (1<<MACH_BASE), 0 } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD vc4_cgen_ifld_table[] =
{
  { VC4_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OPLEN, "f-oplen", 0, 16, 15, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP15_13, "f-op15-13", 0, 16, 15, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP15_11, "f-op15-11", 0, 16, 15, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP11_8, "f-op11-8", 0, 16, 11, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_LDSTOFF, "f-ldstoff", 0, 16, 11, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP11_9, "f-op11-9", 0, 16, 11, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP11_10, "f-op11-10", 0, 16, 11, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP11, "f-op11", 0, 16, 11, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP10_8, "f-op10-8", 0, 16, 10, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP10_7, "f-op10-7", 0, 16, 10, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_ADDSPOFFSET, "f-addspoffset", 0, 16, 10, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP10_0, "f-op10-0", 0, 16, 10, 11, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_ALU16OP, "f-alu16op", 0, 16, 12, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_ALU16OPI, "f-alu16opi", 0, 16, 12, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP9_8, "f-op9-8", 0, 16, 9, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP9_5, "f-op9-5", 0, 16, 9, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_SPOFFSET, "f-spoffset", 0, 16, 8, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP8_5, "f-op8-5", 0, 16, 8, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP8_4, "f-op8-4", 0, 16, 8, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP8_4_SHL3, "f-op8-4-shl3", 0, 16, 8, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP8, "f-op8", 0, 16, 8, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP7_4, "f-op7-4", 0, 16, 7, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP7_4S, "f-op7-4s", 0, 16, 7, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP7_5, "f-op7-5", 0, 16, 7, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP7_6, "f-op7-6", 0, 16, 7, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP7, "f-op7", 0, 16, 7, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP6_5, "f-op6-5", 0, 16, 6, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP6_0, "f-op6-0", 0, 16, 6, 7, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_PCRELCC, "f-pcrelcc", 0, 16, 6, 7, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP5, "f-op5", 0, 16, 5, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP5_0, "f-op5-0", 0, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4, "f-op4", 0, 16, 4, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4_0, "f-op4-0", 0, 16, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP3_0, "f-op3-0", 0, 16, 3, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4_0_BASE_0, "f-op4-0-base-0", 0, 16, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4_0_BASE_6, "f-op4-0-base-6", 0, 16, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4_0_BASE_16, "f-op4-0-base-16", 0, 16, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4_0_BASE_24, "f-op4-0-base-24", 0, 16, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_30, "f-op31-30", 16, 16, 15, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_27, "f-op31-27", 16, 16, 15, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_16, "f-op31-16", 16, 16, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_16S, "f-op31-16s", 16, 16, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_16S_SHL1, "f-op31-16s-shl1", 16, 16, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_16S_SHL2, "f-op31-16s-shl2", 16, 16, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_16S_SHL3, "f-op31-16s-shl3", 16, 16, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_16S_SHL4, "f-op31-16s-shl4", 16, 16, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_PCREL16, "f-pcrel16", 16, 16, 15, 16, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP29_26, "f-op29-26", 16, 16, 13, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP29_24, "f-op29-24", 16, 16, 13, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP26_23, "f-op26-23", 16, 16, 10, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP26_16, "f-op26-16", 16, 16, 10, 11, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_PCREL10, "f-pcrel10", 16, 16, 9, 10, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_PCREL8, "f-pcrel8", 16, 16, 7, 8, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP22_21, "f-op22-21", 16, 16, 6, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP22, "f-op22", 16, 16, 6, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16, "f-op21-16", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S, "f-op21-16s", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL1, "f-op21-16s-shl1", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL2, "f-op21-16s-shl2", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL3, "f-op21-16s-shl3", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL4, "f-op21-16s-shl4", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL5, "f-op21-16s-shl5", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL6, "f-op21-16s-shl6", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL7, "f-op21-16s-shl7", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_16S_SHL8, "f-op21-16s-shl8", 16, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP20_16, "f-op20-16", 16, 16, 4, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP47_16, "f-op47-16", 16, 32, 31, 32, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_PCREL32_48, "f-pcrel32-48", 16, 32, 31, 32, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP47_43, "f-op47-43", 16, 32, 31, 5, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OFFSET27_48, "f-offset27-48", 16, 32, 26, 27, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_PCREL27_48, "f-pcrel27-48", 16, 32, 26, 27, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP79_48, "f-op79-48", 48, 32, 31, 32, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OFFSET23BITS, "f-offset23bits", 0, 0, 0, 0,{ 0|A(PCREL_ADDR)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OFFSET27BITS, "f-offset27bits", 0, 0, 0, 0,{ 0|A(PCREL_ADDR)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OFFSET12, "f-offset12", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP15_10, "f-op15-10", 0, 16, 15, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP9, "f-op9", 0, 16, 9, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP8_3, "f-op8-3", 0, 16, 8, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP2_0, "f-op2-0", 0, 16, 2, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP4_3, "f-op4-3", 0, 16, 4, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_22, "f-op31-22", 16, 16, 15, 10, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP31_28, "f-op31-28", 16, 16, 15, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP27_22, "f-op27-22", 16, 16, 11, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP21_18, "f-op21-18", 16, 16, 5, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP17_16, "f-op17-16", 16, 16, 1, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP41_32, "f-op41-32", 32, 16, 9, 10, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP42, "f-op42", 32, 16, 10, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP43, "f-op43", 32, 16, 11, 1, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP47_44, "f-op47-44", 32, 16, 15, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP38_32, "f-op38-32", 32, 16, 6, 7, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP41_39, "f-op41-39", 32, 16, 9, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP51_48, "f-op51-48", 48, 16, 3, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP57_52, "f-op57-52", 48, 16, 9, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP63_58, "f-op63-58", 48, 16, 15, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP69_64, "f-op69-64", 64, 16, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP76_70, "f-op76-70", 64, 16, 12, 7, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP79_77, "f-op79-77", 64, 16, 15, 3, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP65_64, "f-op65-64", 64, 16, 1, 2, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_OP69_66, "f-op69-66", 64, 16, 5, 4, { 0, { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80DREG, "f-vec80dreg", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80AREG, "f-vec80areg", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80BREG, "f-vec80breg", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80MODS, "f-vec80mods", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80MODS_MEM, "f-vec80mods-mem", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80IMM, "f-vec80imm", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80LDADDR, "f-vec80ldaddr", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { VC4_F_VEC80STADDR, "f-vec80staddr", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A



/* multi ifield declarations */

const CGEN_MAYBE_MULTI_IFLD VC4_F_OFFSET23BITS_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_OFFSET27BITS_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_OFFSET12_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80DREG_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80AREG_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80BREG_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80MODS_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80MODS_MEM_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80IMM_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80LDADDR_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80STADDR_MULTI_IFIELD [];


/* multi ifield definitions */

const CGEN_MAYBE_MULTI_IFLD VC4_F_OFFSET23BITS_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP6_0] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_OFFSET27BITS_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP11_8] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP6_0] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_OFFSET12_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP8] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP26_16] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80DREG_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_22] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP63_58] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80AREG_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP47_44] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP57_52] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP51_48] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80BREG_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP41_32] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP69_64] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80MODS_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP2_0] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP43] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP79_77] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP76_70] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80MODS_MEM_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP2_0] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP43] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP79_77] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80IMM_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP69_64] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP41_32] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80LDADDR_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP38_32] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP65_64] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP76_70] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP17_16] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP47_44] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP69_66] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD VC4_F_VEC80STADDR_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP38_32] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP65_64] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP76_70] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP27_22] } },
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP69_66] } },
    { 0, { (const PTR) 0 } }
};

/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) VC4_OPERAND_##op

const CGEN_OPERAND vc4_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", VC4_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_NIL] } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } } } }  },
/* condcode:  */
  { "condcode", VC4_OPERAND_CONDCODE, HW_H_COND, 10, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP10_7] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* pcrelcc:  */
  { "pcrelcc", VC4_OPERAND_PCRELCC, HW_H_IADDR, 6, 7,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_PCRELCC] } }, 
    { 0|A(RELAX)|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* ldstoff: 4-bit unsigned immediate lsl 2 */
  { "ldstoff", VC4_OPERAND_LDSTOFF, HW_H_UINT, 11, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_LDSTOFF] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu16sreg:  */
  { "alu16sreg", VC4_OPERAND_ALU16SREG, HW_H_FASTREG, 7, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP7_4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu16imm: 5-bit unsigned immediate */
  { "alu16imm", VC4_OPERAND_ALU16IMM, HW_H_UINT, 8, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP8_4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu16imm_shl3: 5-bit immediate left-shifted by 3 */
  { "alu16imm_shl3", VC4_OPERAND_ALU16IMM_SHL3, HW_H_UINT, 8, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP8_4_SHL3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu16dreg:  */
  { "alu16dreg", VC4_OPERAND_ALU16DREG, HW_H_FASTREG, 3, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP3_0] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu32dreg:  */
  { "alu32dreg", VC4_OPERAND_ALU32DREG, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_0] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* disp5: 5-bit unsigned displacement */
  { "disp5", VC4_OPERAND_DISP5, HW_H_UINT, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP20_16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6: 6-bit signed immediate */
  { "imm6", VC4_OPERAND_IMM6, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* floatimm6: 6-bit floating-point immediate */
  { "floatimm6", VC4_OPERAND_FLOATIMM6, HW_H_UINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl1: 6-bit immediate left-shifted by 1 */
  { "imm6_shl1", VC4_OPERAND_IMM6_SHL1, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl2: 6-bit immediate left-shifted by 2 */
  { "imm6_shl2", VC4_OPERAND_IMM6_SHL2, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl3: 6-bit immediate left-shifted by 3 */
  { "imm6_shl3", VC4_OPERAND_IMM6_SHL3, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl4: 6-bit immediate left-shifted by 4 */
  { "imm6_shl4", VC4_OPERAND_IMM6_SHL4, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl5: 6-bit immediate left-shifted by 5 */
  { "imm6_shl5", VC4_OPERAND_IMM6_SHL5, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL5] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl6: 6-bit immediate left-shifted by 6 */
  { "imm6_shl6", VC4_OPERAND_IMM6_SHL6, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl7: 6-bit immediate left-shifted by 7 */
  { "imm6_shl7", VC4_OPERAND_IMM6_SHL7, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL7] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* imm6_shl8: 6-bit immediate left-shifted by 8 */
  { "imm6_shl8", VC4_OPERAND_IMM6_SHL8, HW_H_SINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP21_16S_SHL8] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu32breg:  */
  { "alu32breg", VC4_OPERAND_ALU32BREG, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP20_16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ppstartreg:  */
  { "ppstartreg", VC4_OPERAND_PPSTARTREG, HW_H_PPREG, 6, 2,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP6_5] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ppendreg0:  */
  { "ppendreg0", VC4_OPERAND_PPENDREG0, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_0_BASE_0] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ppendreg6:  */
  { "ppendreg6", VC4_OPERAND_PPENDREG6, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_0_BASE_6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ppendreg16:  */
  { "ppendreg16", VC4_OPERAND_PPENDREG16, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_0_BASE_16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* ppendreg24:  */
  { "ppendreg24", VC4_OPERAND_PPENDREG24, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_0_BASE_24] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* swi_imm:  */
  { "swi_imm", VC4_OPERAND_SWI_IMM, HW_H_UINT, 5, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP5_0] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* spoffset: 5-bit unsigned immediate lsl 2 */
  { "spoffset", VC4_OPERAND_SPOFFSET, HW_H_UINT, 8, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_SPOFFSET] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* addspoffset:  */
  { "addspoffset", VC4_OPERAND_ADDSPOFFSET, HW_H_UINT, 10, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_ADDSPOFFSET] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu32areg:  */
  { "alu32areg", VC4_OPERAND_ALU32AREG, HW_H_REG, 15, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_27] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu32cond:  */
  { "alu32cond", VC4_OPERAND_ALU32COND, HW_H_DOTCOND, 10, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP26_23] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu48isreg:  */
  { "alu48isreg", VC4_OPERAND_ALU48ISREG, HW_H_REG, 9, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP9_5] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu48idreg:  */
  { "alu48idreg", VC4_OPERAND_ALU48IDREG, HW_H_REG, 4, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_0] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* mem48sreg:  */
  { "mem48sreg", VC4_OPERAND_MEM48SREG, HW_H_REG, 31, 5,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP47_43] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu48immu: 32-bit immediate */
  { "alu48immu", VC4_OPERAND_ALU48IMMU, HW_H_UINT, 31, 32,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP47_16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* alu48pcrel:  */
  { "alu48pcrel", VC4_OPERAND_ALU48PCREL, HW_H_ADDR, 31, 32,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_PCREL32_48] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* mem48offset27: 27-bit offset in 48-bit load/store insn */
  { "mem48offset27", VC4_OPERAND_MEM48OFFSET27, HW_H_SINT, 26, 27,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OFFSET27_48] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* mem48pcrel27: 27-bit pc-relative offset */
  { "mem48pcrel27", VC4_OPERAND_MEM48PCREL27, HW_H_ADDR, 26, 27,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_PCREL27_48] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* condcodebcc32:  */
  { "condcodebcc32", VC4_OPERAND_CONDCODEBCC32, HW_H_COND, 11, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP11_8] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* bcc32sreg:  */
  { "bcc32sreg", VC4_OPERAND_BCC32SREG, HW_H_FASTREG, 13, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP29_26] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* pcrel10bits:  */
  { "pcrel10bits", VC4_OPERAND_PCREL10BITS, HW_H_IADDR, 9, 10,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_PCREL10] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* pcrel8bits:  */
  { "pcrel8bits", VC4_OPERAND_PCREL8BITS, HW_H_IADDR, 7, 8,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_PCREL8] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* bcc32imm: 5-bit unsigned immediate in compare-branch insn */
  { "bcc32imm", VC4_OPERAND_BCC32IMM, HW_H_UINT, 13, 6,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP29_24] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* addcmpbareg:  */
  { "addcmpbareg", VC4_OPERAND_ADDCMPBAREG, HW_H_FASTREG, 7, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP7_4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* addcmpbimm: 4-bit signed immediate in addcmpb insn */
  { "addcmpbimm", VC4_OPERAND_ADDCMPBIMM, HW_H_SINT, 7, 4,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP7_4S] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* offset23bits:  */
  { "offset23bits", VC4_OPERAND_OFFSET23BITS, HW_H_IADDR, 6, 23,
    { 2, { (const PTR) &VC4_F_OFFSET23BITS_MULTI_IFIELD[0] } }, 
    { 0|A(RELAX)|A(PCREL_ADDR)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* offset27bits:  */
  { "offset27bits", VC4_OPERAND_OFFSET27BITS, HW_H_IADDR, 6, 27,
    { 3, { (const PTR) &VC4_F_OFFSET27BITS_MULTI_IFIELD[0] } }, 
    { 0|A(PCREL_ADDR)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* offset12: 12-bit immediate offset */
  { "offset12", VC4_OPERAND_OFFSET12, HW_H_SINT, 8, 12,
    { 2, { (const PTR) &VC4_F_OFFSET12_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* offset16: 16-bit immediate */
  { "offset16", VC4_OPERAND_OFFSET16, HW_H_SINT, 15, 16,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16S] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* offset16_shl1: 16-bit immediate left-shifted by 1 */
  { "offset16_shl1", VC4_OPERAND_OFFSET16_SHL1, HW_H_SINT, 15, 16,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16S_SHL1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* offset16_shl2: 16-bit immediate left-shifted by 2 */
  { "offset16_shl2", VC4_OPERAND_OFFSET16_SHL2, HW_H_SINT, 15, 16,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16S_SHL2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* offset16_shl3: 16-bit immediate left-shifted by 3 */
  { "offset16_shl3", VC4_OPERAND_OFFSET16_SHL3, HW_H_SINT, 15, 16,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16S_SHL3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* offset16_shl4: 16-bit immediate left-shifted by 4 */
  { "offset16_shl4", VC4_OPERAND_OFFSET16_SHL4, HW_H_SINT, 15, 16,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP31_16S_SHL4] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* pcrel16:  */
  { "pcrel16", VC4_OPERAND_PCREL16, HW_H_ADDR, 15, 16,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_PCREL16] } }, 
    { 0|A(RELAX)|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } } } }  },
/* off16basereg:  */
  { "off16basereg", VC4_OPERAND_OFF16BASEREG, HW_H_BASEREG, 9, 2,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP9_8] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* operand10_0:  */
  { "operand10_0", VC4_OPERAND_OPERAND10_0, HW_H_UINT, 10, 11,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP10_0] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* operand47_16:  */
  { "operand47_16", VC4_OPERAND_OPERAND47_16, HW_H_UINT, 31, 32,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP47_16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* operand79_48:  */
  { "operand79_48", VC4_OPERAND_OPERAND79_48, HW_H_UINT, 31, 32,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP79_48] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl1: syntax for left shift by 1 */
  { "shl1", VC4_OPERAND_SHL1, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl2: syntax for left shift by 2 */
  { "shl2", VC4_OPERAND_SHL2, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl3: syntax for left shift by 3 */
  { "shl3", VC4_OPERAND_SHL3, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl4: syntax for left shift by 4 */
  { "shl4", VC4_OPERAND_SHL4, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl5: syntax for left shift by 5 */
  { "shl5", VC4_OPERAND_SHL5, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl6: syntax for left shift by 6 */
  { "shl6", VC4_OPERAND_SHL6, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl7: syntax for left shift by 7 */
  { "shl7", VC4_OPERAND_SHL7, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* shl8: syntax for left shift by 8 */
  { "shl8", VC4_OPERAND_SHL8, HW_H_UINT, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* v80d32reg: vector dest register, 80-bit ALU insn */
  { "v80d32reg", VC4_OPERAND_V80D32REG, HW_H_UINT, 15, 16,
    { 2, { (const PTR) &VC4_F_VEC80DREG_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* v80a32reg: vector A register, 80-bit ALU insn */
  { "v80a32reg", VC4_OPERAND_V80A32REG, HW_H_UINT, 3, 20,
    { 4, { (const PTR) &VC4_F_VEC80AREG_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* v80b32reg: vector B register, 80-bit ALU insn */
  { "v80b32reg", VC4_OPERAND_V80B32REG, HW_H_UINT, 5, 16,
    { 2, { (const PTR) &VC4_F_VEC80BREG_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* v80imm: vector immediate, 80-bit ALU insn */
  { "v80imm", VC4_OPERAND_V80IMM, HW_H_SINT, 5, 16,
    { 2, { (const PTR) &VC4_F_VEC80IMM_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* v80mods: modifier bits for 80-bit vector ALU insn */
  { "v80mods", VC4_OPERAND_V80MODS, HW_H_UINT, 2, 14,
    { 4, { (const PTR) &VC4_F_VEC80MODS_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* v80mods_mem: modifier bits for 80-bit vector memory insns */
  { "v80mods_mem", VC4_OPERAND_V80MODS_MEM, HW_H_UINT, 2, 7,
    { 3, { (const PTR) &VC4_F_VEC80MODS_MEM_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* vmemwidth: element width for memory operation */
  { "vmemwidth", VC4_OPERAND_VMEMWIDTH, HW_H_ELTSIZE, 4, 2,
    { 0, { (const PTR) &vc4_cgen_ifld_table[VC4_F_OP4_3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } } } }  },
/* vec_ldaddr: address for 80-bit vld instruction */
  { "vec_ldaddr", VC4_OPERAND_VEC_LDADDR, HW_H_UINT, 1, 26,
    { 6, { (const PTR) &VC4_F_VEC80LDADDR_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* vec_staddr: address for 80-bit vst instruction */
  { "vec_staddr", VC4_OPERAND_VEC_STADDR, HW_H_UINT, 1, 26,
    { 5, { (const PTR) &VC4_F_VEC80STADDR_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE vc4_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } } } } },
/* bkpt */
  {
    VC4_INSN_BKPT, "bkpt", "bkpt", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* nop */
  {
    VC4_INSN_NOP, "nop", "nop", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sleep */
  {
    VC4_INSN_SLEEP, "sleep", "sleep", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* user */
  {
    VC4_INSN_USER, "user", "user", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ei */
  {
    VC4_INSN_EI, "ei", "ei", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* di */
  {
    VC4_INSN_DI, "di", "di", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cbclr */
  {
    VC4_INSN_CBCLR, "cbclr", "cbclr", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cbadd1 */
  {
    VC4_INSN_CBADD1, "cbadd1", "cbadd1", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cbadd2 */
  {
    VC4_INSN_CBADD2, "cbadd2", "cbadd2", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cbadd3 */
  {
    VC4_INSN_CBADD3, "cbadd3", "cbadd3", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rti */
  {
    VC4_INSN_RTI, "rti", "rti", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* swi $alu32dreg */
  {
    VC4_INSN_SWIREG, "swireg", "swi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rts */
  {
    VC4_INSN_RTS, "rts", "rts", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* b.s $alu32dreg */
  {
    VC4_INSN_BREG, "breg", "b.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bl $alu32dreg */
  {
    VC4_INSN_BLREG, "blreg", "bl", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* tbb $alu32dreg */
  {
    VC4_INSN_TBB, "tbb", "tbb", 16,
    { 0|A(SWITCH), { { { (1<<MACH_BASE), 0 } } } }
  },
/* tbh $alu32dreg */
  {
    VC4_INSN_TBH, "tbh", "tbh", 16,
    { 0|A(SWITCH), { { { (1<<MACH_BASE), 0 } } } }
  },
/* version $alu32dreg */
  {
    VC4_INSN_MOVCPUID, "movcpuid", "version", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* swi $swi_imm */
  {
    VC4_INSN_SWIIMM, "swiimm", "swi", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm.s $ppstartreg,(--sp) */
  {
    VC4_INSN_PUSHRN, "pushrn", "stm.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm $ppstartreg,lr,(--sp) */
  {
    VC4_INSN_PUSHRNLR, "pushrnlr", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm r0-$ppendreg0,(--sp) */
  {
    VC4_INSN_PUSHRNRM0, "pushrnrm0", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm r6-$ppendreg6,(--sp) */
  {
    VC4_INSN_PUSHRNRM6, "pushrnrm6", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm r16-$ppendreg16,(--sp) */
  {
    VC4_INSN_PUSHRNRM16, "pushrnrm16", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm gp-$ppendreg24,(--sp) */
  {
    VC4_INSN_PUSHRNRM24, "pushrnrm24", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm r0-$ppendreg0,lr,(--sp) */
  {
    VC4_INSN_PUSHRNRM0_LR, "pushrnrm0,lr", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm r6-$ppendreg6,lr,(--sp) */
  {
    VC4_INSN_PUSHRNRM6_LR, "pushrnrm6,lr", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm r16-$ppendreg16,lr,(--sp) */
  {
    VC4_INSN_PUSHRNRM16_LR, "pushrnrm16,lr", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stm gp-$ppendreg24,lr,(--sp) */
  {
    VC4_INSN_PUSHRNRM24_LR, "pushrnrm24,lr", "stm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm.s $ppstartreg,(sp++) */
  {
    VC4_INSN_POPRN, "poprn", "ldm.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm $ppstartreg,pc,(sp++) */
  {
    VC4_INSN_POPRNPC, "poprnpc", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm r0-$ppendreg0,(sp++) */
  {
    VC4_INSN_POPRNRM0, "poprnrm0", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm r6-$ppendreg6,(sp++) */
  {
    VC4_INSN_POPRNRM6, "poprnrm6", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm r16-$ppendreg16,(sp++) */
  {
    VC4_INSN_POPRNRM16, "poprnrm16", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm gp-$ppendreg24,(sp++) */
  {
    VC4_INSN_POPRNRM24, "poprnrm24", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm r0-$ppendreg0,pc,(sp++) */
  {
    VC4_INSN_POPRNRM0_PC, "poprnrm0,pc", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm r6-$ppendreg6,pc,(sp++) */
  {
    VC4_INSN_POPRNRM6_PC, "poprnrm6,pc", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm r16-$ppendreg16,pc,(sp++) */
  {
    VC4_INSN_POPRNRM16_PC, "poprnrm16,pc", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldm gp-$ppendreg24,pc,(sp++) */
  {
    VC4_INSN_POPRNRM24_PC, "poprnrm24,pc", "ldm", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_LDIND, "ldind", "ld.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_STIND, "stind", "st.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_LDHIND, "ldhind", "ldh.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_STHIND, "sthind", "sth.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_LDBIND, "ldbind", "ldb.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_STBIND, "stbind", "stb.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_LDSHIND, "ldshind", "ldsh.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb.s $alu16dreg,($alu16sreg) */
  {
    VC4_INSN_LDSBIND, "ldsbind", "ldsb.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld.s $alu16dreg,($alu16sreg+$ldstoff) */
  {
    VC4_INSN_LDOFF, "ldoff", "ld.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st.s $alu16dreg,($alu16sreg+$ldstoff) */
  {
    VC4_INSN_STOFF, "stoff", "st.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld.s $alu16dreg,(sp+$spoffset) */
  {
    VC4_INSN_LDSP, "ldsp", "ld.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st.s $alu16dreg,(sp+$spoffset) */
  {
    VC4_INSN_STSP, "stsp", "st.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_LDOFF12, "ldoff12", "ld.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_STOFF12, "stoff12", "st.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_LDHOFF12, "ldhoff12", "ldh.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_STHOFF12, "sthoff12", "sth.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_LDBOFF12, "ldboff12", "ldb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_STBOFF12, "stboff12", "stb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_LDSHOFF12, "ldshoff12", "ldsh.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb.m $alu32dreg,($alu32areg+$offset12) */
  {
    VC4_INSN_LDSBOFF12, "ldsboff12", "ldsb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_LDOFF16, "ldoff16", "ld.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_STOFF16, "stoff16", "st.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_LDHOFF16, "ldhoff16", "ldh.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_STHOFF16, "sthoff16", "sth.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_LDBOFF16, "ldboff16", "ldb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_STBOFF16, "stboff16", "stb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_LDSHOFF16, "ldshoff16", "ldsh.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb.m $alu32dreg,($off16basereg+$offset16) */
  {
    VC4_INSN_LDSBOFF16, "ldsboff16", "ldsb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl2) */
  {
    VC4_INSN_LDCNDIDX, "ldcndidx", "ld", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl1) */
  {
    VC4_INSN_LDHCNDIDX, "ldhcndidx", "ldh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb${alu32cond} $alu32dreg,($alu32areg+$alu32breg) */
  {
    VC4_INSN_LDBCNDIDX, "ldbcndidx", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl1) */
  {
    VC4_INSN_LDSHCNDIDX, "ldshcndidx", "ldsh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl2) */
  {
    VC4_INSN_STCNDIDX, "stcndidx", "st", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth${alu32cond} $alu32dreg,($alu32areg+$alu32breg$shl1) */
  {
    VC4_INSN_STHCNDIDX, "sthcndidx", "sth", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb${alu32cond} $alu32dreg,($alu32areg+$alu32breg) */
  {
    VC4_INSN_STBCNDIDX, "stbcndidx", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb${alu32cond} $alu32dreg,($alu32areg+$alu32breg) */
  {
    VC4_INSN_LDSBCNDIDX, "ldsbcndidx", "ldsb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_LDCNDDISP, "ldcnddisp", "ld", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_STCNDDISP, "stcnddisp", "st", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_LDHCNDDISP, "ldhcnddisp", "ldh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_STHCNDDISP, "sthcnddisp", "sth", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_LDBCNDDISP, "ldbcnddisp", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_STBCNDDISP, "stbcnddisp", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_LDSHCNDDISP, "ldshcnddisp", "ldsh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb${alu32cond} $alu32dreg,($alu32areg+$disp5) */
  {
    VC4_INSN_LDSBCNDDISP, "ldsbcnddisp", "ldsb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_LDPREDEC, "ldpredec", "ld", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_LDHPREDEC, "ldhpredec", "ldh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_LDBPREDEC, "ldbpredec", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_LDSHPREDEC, "ldshpredec", "ldsh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_STPREDEC, "stpredec", "st", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_STHPREDEC, "sthpredec", "sth", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_STBPREDEC, "stbpredec", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb${alu32cond} $alu32dreg,(--${alu32areg}) */
  {
    VC4_INSN_LDSBPREDEC, "ldsbpredec", "ldsb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_LDPOSTINC, "ldpostinc", "ld", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_LDHPOSTINC, "ldhpostinc", "ldh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_LDBPOSTINC, "ldbpostinc", "ldb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_LDSHPOSTINC, "ldshpostinc", "ldsh", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_STPOSTINC, "stpostinc", "st", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_STHPOSTINC, "sthpostinc", "sth", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_STBPOSTINC, "stbpostinc", "stb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb${alu32cond} $alu32dreg,(${alu32areg}++) */
  {
    VC4_INSN_LDSBPOSTINC, "ldsbpostinc", "ldsb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add sp,$addspoffset */
  {
    VC4_INSN_ADDSP, "addsp", "add", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lea $alu32dreg,(sp+$addspoffset) */
  {
    VC4_INSN_LEA, "lea", "lea", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* b$condcode.s $pcrelcc */
  {
    VC4_INSN_BCC, "bcc", "b", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_MOV16, "mov16", "mov.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_CMN16, "cmn16", "cmn.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_ADD16, "add16", "add.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BIC16, "bic16", "bic.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_MUL16, "mul16", "mul.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_EOR16, "eor16", "eor.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_SUB16, "sub16", "sub.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_AND16, "and16", "and.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* not.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_NOT16, "not16", "not.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_ROR16, "ror16", "ror.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_CMP16, "cmp16", "cmp.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_RSUB16, "rsub16", "rsub.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BTST16, "btst16", "btst.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_OR16, "or16", "or.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BMASK16, "bmask16", "bmask.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* max.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_MAX16, "max16", "max.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BSET16, "bset16", "bitset.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* min.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_MIN16, "min16", "min.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BCLR16, "bclr16", "bitclear.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl1 */
  {
    VC4_INSN_ADDS216, "adds216", "addscale.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BCHG16, "bchg16", "bitflip.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl2 */
  {
    VC4_INSN_ADDS416, "adds416", "addscale.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl3 */
  {
    VC4_INSN_ADDS816, "adds816", "addscale.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale.s $alu16dreg,$alu16sreg$shl4 */
  {
    VC4_INSN_ADDS1616, "adds1616", "addscale.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_SIGNEXT16, "signext16", "signext.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_NEG16, "neg16", "neg.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_LSR16, "lsr16", "lsr.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_MSB16, "msb16", "msb.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_SHL16, "shl16", "shl.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* brev.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_BITREV16, "bitrev16", "brev.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_ASR16, "asr16", "asr.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs.s $alu16dreg,$alu16sreg */
  {
    VC4_INSN_ABS16, "abs16", "abs.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_MOVI16, "movi16", "mov.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_ADDI16, "addi16", "add.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_MULI16, "muli16", "mul.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_SUBI16, "subi16", "sub.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* not.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_NOTI16, "noti16", "not.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_CMPI16, "cmpi16", "cmp.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_BTSTI16, "btsti16", "btst.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_BMASKI16, "bmaski16", "bmask.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_BSETI16, "bseti16", "bitset.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_BCLRI16, "bclri16", "bitclear.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_BCHGI16, "bchgi16", "bitflip.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale.s $alu16dreg,$alu16imm_shl3 */
  {
    VC4_INSN_ADDS8I16, "adds8i16", "addscale.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_SIGNEXTI16, "signexti16", "signext.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_LSRI16, "lsri16", "lsr.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_SHLI16, "shli16", "shl.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr.s $alu16dreg,$alu16imm */
  {
    VC4_INSN_ASRI16, "asri16", "asr.s", 16,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* b$condcodebcc32 $alu16dreg,$bcc32sreg,$pcrel10bits */
  {
    VC4_INSN_BCC32R, "bcc32r", "b", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* b$condcodebcc32 $alu16dreg,$bcc32imm,$pcrel8bits */
  {
    VC4_INSN_BCC32I, "bcc32i", "b", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbareg,$bcc32sreg,$pcrel10bits */
  {
    VC4_INSN_ADDCMPBRR, "addcmpbrr", "addcmpb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbimm,$bcc32sreg,$pcrel10bits */
  {
    VC4_INSN_ADDCMPBRI, "addcmpbri", "addcmpb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbareg,$bcc32imm,$pcrel8bits */
  {
    VC4_INSN_ADDCMPBIR, "addcmpbir", "addcmpb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addcmpb$condcodebcc32 $alu16dreg,$addcmpbimm,$bcc32imm,$pcrel8bits */
  {
    VC4_INSN_ADDCMPBII, "addcmpbii", "addcmpb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* b$condcodebcc32.m $offset23bits */
  {
    VC4_INSN_BCC32, "bcc32", "b", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bl $offset27bits */
  {
    VC4_INSN_BL32, "bl32", "bl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov${alu32cond}.m $alu32dreg,$alu32breg */
  {
    VC4_INSN_MOV32, "mov32", "mov", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn${alu32cond}.m $alu32areg,$alu32breg */
  {
    VC4_INSN_CMN32, "cmn32", "cmn", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_ADD32, "add32", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_BIC32, "bic32", "bic", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MUL32, "mul32", "mul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_EOR32, "eor32", "eor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_SUB32, "sub32", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_AND32, "and32", "and", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* not${alu32cond}.m $alu32dreg,$alu32breg */
  {
    VC4_INSN_NOT32, "not32", "not", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_ROR32, "ror32", "ror", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp${alu32cond}.m $alu32areg,$alu32breg */
  {
    VC4_INSN_CMP32, "cmp32", "cmp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_RSUB32, "rsub32", "rsub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst${alu32cond}.m $alu32areg,$alu32breg */
  {
    VC4_INSN_BTST32, "btst32", "btst", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_OR32, "or32", "or", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_BMASK32, "bmask32", "bmask", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* max${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MAX32, "max32", "max", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_BSET32, "bset32", "bitset", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* min${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MIN32, "min32", "min", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_BCLR32, "bclr32", "bitclear", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl1 */
  {
    VC4_INSN_ADDS232, "adds232", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_BCHG32, "bchg32", "bitflip", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl2 */
  {
    VC4_INSN_ADDS432, "adds432", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl3 */
  {
    VC4_INSN_ADDS832, "adds832", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg$shl4 */
  {
    VC4_INSN_ADDS1632, "adds1632", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_SIGNEXT32, "signext32", "signext", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg${alu32cond}.m $alu32dreg,$alu32breg */
  {
    VC4_INSN_NEG32, "neg32", "neg", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_LSR32, "lsr32", "lsr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb${alu32cond}.m $alu32dreg,$alu32breg */
  {
    VC4_INSN_MSB32, "msb32", "msb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_SHL32, "shl32", "shl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* brev${alu32cond}.m $alu32dreg,$alu32breg */
  {
    VC4_INSN_BITREV32, "bitrev32", "brev", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr${alu32cond}.m $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_ASR32, "asr32", "asr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs${alu32cond}.m $alu32dreg,$alu32breg */
  {
    VC4_INSN_ABS32, "abs32", "abs", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov${alu32cond}.m $alu32dreg,$imm6 */
  {
    VC4_INSN_MOVI32, "movi32", "mov", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn${alu32cond}.m $alu32areg,$imm6 */
  {
    VC4_INSN_CMNI32, "cmni32", "cmn", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_ADDI32, "addi32", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_BICI32, "bici32", "bic", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MULI32, "muli32", "mul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_EORI32, "eori32", "eor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_SUBI32, "subi32", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_ANDI32, "andi32", "and", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* not${alu32cond}.m $alu32dreg,$imm6 */
  {
    VC4_INSN_NOTI32, "noti32", "not", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_RORI32, "rori32", "ror", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp${alu32cond}.m $alu32areg,$imm6 */
  {
    VC4_INSN_CMPI32, "cmpi32", "cmp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_RSUBI32, "rsubi32", "rsub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst${alu32cond}.m $alu32areg,$imm6 */
  {
    VC4_INSN_BTSTI32, "btsti32", "btst", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_ORI32, "ori32", "or", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_BMASKI32, "bmaski32", "bmask", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* max${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MAXI32, "maxi32", "max", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_BSETI32, "bseti32", "bitset", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* min${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MINI32, "mini32", "min", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_BCLRI32, "bclri32", "bitclear", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl1 */
  {
    VC4_INSN_ADDS2I32, "adds2i32", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_BCHGI32, "bchgi32", "bitflip", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl2 */
  {
    VC4_INSN_ADDS4I32, "adds4i32", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl3 */
  {
    VC4_INSN_ADDS8I32, "adds8i32", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add${alu32cond}.m $alu32dreg,$alu32areg,$imm6_shl4 */
  {
    VC4_INSN_ADDS16I32, "adds16i32", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_SIGNEXTI32, "signexti32", "signext", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg${alu32cond}.m $alu32dreg,$imm6 */
  {
    VC4_INSN_NEGI32, "negi32", "neg", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_LSRI32, "lsri32", "lsr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb${alu32cond}.m $alu32dreg,$imm6 */
  {
    VC4_INSN_MSBI32, "msbi32", "msb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_SHLI32, "shli32", "shl", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* brev${alu32cond}.m $alu32dreg,$imm6 */
  {
    VC4_INSN_BITREVI32, "bitrevi32", "brev", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr${alu32cond}.m $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_ASRI32, "asri32", "asr", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs${alu32cond}.m $alu32dreg,$imm6 */
  {
    VC4_INSN_ABSI32, "absi32", "abs", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.ss $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MULHDRSS, "mulhdrss", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.su $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MULHDRSU, "mulhdrsu", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.us $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MULHDRUS, "mulhdrus", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.uu $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_MULHDRUU, "mulhdruu", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.ss $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_DIVRSS, "divrss", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.su $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_DIVRSU, "divrsu", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.us $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_DIVRUS, "divrus", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.uu $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_DIVRUU, "divruu", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.ss $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MULHDISS, "mulhdiss", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.su $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MULHDISU, "mulhdisu", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.us $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MULHDIUS, "mulhdius", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mulhd$alu32cond.uu $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_MULHDIUU, "mulhdiuu", "mulhd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.ss $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_DIVISS, "diviss", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.su $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_DIVISU, "divisu", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.us $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_DIVIUS, "divius", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* div$alu32cond.uu $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_DIVIUU, "diviuu", "div", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* adds$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_ADDSATR, "addsatr", "adds", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subs$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_SUBSATR, "subsatr", "subs", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shls$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_SHLSATR, "shlsatr", "shls", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl5 */
  {
    VC4_INSN_ADDS5R, "adds5r", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl6 */
  {
    VC4_INSN_ADDS6R, "adds6r", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl7 */
  {
    VC4_INSN_ADDS7R, "adds7r", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* addscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl8 */
  {
    VC4_INSN_ADDS8R, "adds8r", "addscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl1 */
  {
    VC4_INSN_SUBS1R, "subs1r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl2 */
  {
    VC4_INSN_SUBS2R, "subs2r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl3 */
  {
    VC4_INSN_SUBS3R, "subs3r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl4 */
  {
    VC4_INSN_SUBS4R, "subs4r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl5 */
  {
    VC4_INSN_SUBS5R, "subs5r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl6 */
  {
    VC4_INSN_SUBS6R, "subs6r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl7 */
  {
    VC4_INSN_SUBS7R, "subs7r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subscale$alu32cond $alu32dreg,$alu32areg,$alu32breg$shl8 */
  {
    VC4_INSN_SUBS8R, "subs8r", "subscale", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* clamp16$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_CLAMP16R, "clamp16r", "clamp16", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* count$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_COUNTR, "countr", "count", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* adds$alu32cond $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_ADDSATI, "addsati", "adds", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* subs$alu32cond $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_SUBSATI, "subsati", "subs", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shls$alu32cond $alu32dreg,$alu32areg,$imm6 */
  {
    VC4_INSN_SHLSATI, "shlsati", "shls", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl5 */
  {
    VC4_INSN_ADDS5I, "adds5i", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl6 */
  {
    VC4_INSN_ADDS6I, "adds6i", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl7 */
  {
    VC4_INSN_ADDS7I, "adds7i", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add$alu32cond $alu32dreg,$alu32areg,$imm6_shl8 */
  {
    VC4_INSN_ADDS8I, "adds8i", "add", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl1 */
  {
    VC4_INSN_SUBS1I, "subs1i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl2 */
  {
    VC4_INSN_SUBS2I, "subs2i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl3 */
  {
    VC4_INSN_SUBS3I, "subs3i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl4 */
  {
    VC4_INSN_SUBS4I, "subs4i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl5 */
  {
    VC4_INSN_SUBS5I, "subs5i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl6 */
  {
    VC4_INSN_SUBS6I, "subs6i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl7 */
  {
    VC4_INSN_SUBS7I, "subs7i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub$alu32cond $alu32dreg,$alu32areg,$imm6_shl8 */
  {
    VC4_INSN_SUBS8I, "subs8i", "sub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* clamp16$alu32cond $alu32dreg,$imm6 */
  {
    VC4_INSN_CLAMP16I, "clamp16i", "clamp16", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* count$alu32cond $alu32dreg,$imm6 */
  {
    VC4_INSN_COUNTI, "counti", "count", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lea $alu48idreg,($alu48isreg+$offset16) */
  {
    VC4_INSN_LEA32R, "lea32r", "lea", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lea.m $alu48idreg,$pcrel16 */
  {
    VC4_INSN_LEA32PC, "lea32pc", "lea.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov.m $alu48idreg,$offset16 */
  {
    VC4_INSN_MOVIU32, "moviu32", "mov.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn.m $alu48idreg,$offset16 */
  {
    VC4_INSN_CMNIU32, "cmniu32", "cmn.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ADDIU32, "addiu32", "add.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BICIU32, "biciu32", "bic.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul.m $alu48idreg,$offset16 */
  {
    VC4_INSN_MULIU32, "muliu32", "mul.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor.m $alu48idreg,$offset16 */
  {
    VC4_INSN_EORIU32, "eoriu32", "eor.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub.m $alu48idreg,$offset16 */
  {
    VC4_INSN_SUBIU32, "subiu32", "sub.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ANDIU32, "andiu32", "and.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* not.m $alu48idreg,$offset16 */
  {
    VC4_INSN_NOTIU32, "notiu32", "not.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ror.m $alu48idreg,$offset16 */
  {
    VC4_INSN_RORIU32, "roriu32", "ror.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp.m $alu48idreg,$offset16 */
  {
    VC4_INSN_CMPIU32, "cmpiu32", "cmp.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub.m $alu48idreg,$offset16 */
  {
    VC4_INSN_RSUBIU32, "rsubiu32", "rsub.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* btst.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BTSTIU32, "btstiu32", "btst.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ORIU32, "oriu32", "or.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bmask.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BMASKIU32, "bmaskiu32", "bmask.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* max.m $alu48idreg,$offset16 */
  {
    VC4_INSN_MAXIU32, "maxiu32", "max.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitset.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BSETIU32, "bsetiu32", "bitset.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* min.m $alu48idreg,$offset16 */
  {
    VC4_INSN_MINIU32, "miniu32", "min.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitclear.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BCLRIU32, "bclriu32", "bitclear.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ADDS2IU32_SHL1, "adds2iu32_shl1", "add.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bitflip.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BCHGIU32, "bchgiu32", "bitflip.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ADDS4IU32_SHL2, "adds4iu32_shl2", "add.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ADDS8IU32_SHL3, "adds8iu32_shl3", "add.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ADDS16IU32_SHL4, "adds16iu32_shl4", "add.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* signext.m $alu48idreg,$offset16 */
  {
    VC4_INSN_SIGNEXTIU32, "signextiu32", "signext.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* neg.m $alu48idreg,$offset16 */
  {
    VC4_INSN_NEGIU32, "negiu32", "neg.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lsr.m $alu48idreg,$offset16 */
  {
    VC4_INSN_LSRIU32, "lsriu32", "lsr.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* msb.m $alu48idreg,$offset16 */
  {
    VC4_INSN_MSBIU32, "msbiu32", "msb.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* shl.m $alu48idreg,$offset16 */
  {
    VC4_INSN_SHLIU32, "shliu32", "shl.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* brev.m $alu48idreg,$offset16 */
  {
    VC4_INSN_BITREVIU32, "bitreviu32", "brev.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* asr.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ASRIU32, "asriu32", "asr.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* abs.m $alu48idreg,$offset16 */
  {
    VC4_INSN_ABSIU32, "absiu32", "abs.m", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fadd$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FADDR, "faddr", "fadd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fsub$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FSUBR, "fsubr", "fsub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fmul$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FMULR, "fmulr", "fmul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fdiv$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FDIVR, "fdivr", "fdiv", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fcmp$alu32cond $alu32areg,$alu32breg */
  {
    VC4_INSN_FCMPR, "fcmpr", "fcmp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fabs$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FABSR, "fabsr", "fabs", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* frsb$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FRSBR, "frsbr", "frsb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fmax$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FMAXR, "fmaxr", "fmax", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* frcp$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FRCPR, "frcpr", "frcp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* frsqrt$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FRSQRTR, "frsqrtr", "frsqrt", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fnmul$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FNMULR, "fnmulr", "fnmul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fmin$alu32cond $alu32dreg,$alu32areg,$alu32breg */
  {
    VC4_INSN_FMINR, "fminr", "fmin", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fceil$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FCEILR, "fceilr", "fceil", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ffloor$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FFLOORR, "ffloorr", "ffloor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* flog2$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FLOG2R, "flog2r", "flog2", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fexp2$alu32cond $alu32dreg,$alu32breg */
  {
    VC4_INSN_FEXP2R, "fexp2r", "fexp2", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fadd$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FADDI, "faddi", "fadd", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fsub$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FSUBI, "fsubi", "fsub", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fmul$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FMULI, "fmuli", "fmul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fdiv$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FDIVI, "fdivi", "fdiv", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fcmp$alu32cond $alu32areg,$floatimm6 */
  {
    VC4_INSN_FCMPI, "fcmpi", "fcmp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fabs$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FABSI, "fabsi", "fabs", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* frsb$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FRSBI, "frsbi", "frsb", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fmax$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FMAXI, "fmaxi", "fmax", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* frcp$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FRCPI, "frcpi", "frcp", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* frsqrt$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FRSQRTI, "frsqrti", "frsqrt", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fnmul$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FNMULI, "fnmuli", "fnmul", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fmin$alu32cond $alu32dreg,$alu32areg,$floatimm6 */
  {
    VC4_INSN_FMINI, "fmini", "fmin", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fceil$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FCEILI, "fceili", "fceil", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ffloor$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FFLOORI, "ffloori", "ffloor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* flog2$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FLOG2I, "flog2i", "flog2", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fexp2$alu32cond $alu32dreg,$floatimm6 */
  {
    VC4_INSN_FEXP2I, "fexp2i", "fexp2", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ftrunc$alu32cond $alu32dreg,$alu32areg,sasl $alu32breg */
  {
    VC4_INSN_FTRUNCR, "ftruncr", "ftrunc", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* floor$alu32cond $alu32dreg,$alu32areg,sasl $alu32breg */
  {
    VC4_INSN_FLOORR, "floorr", "floor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* flts$alu32cond $alu32dreg,$alu32areg,sasr $alu32breg */
  {
    VC4_INSN_FLTSR, "fltsr", "flts", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fltu$alu32cond $alu32dreg,$alu32areg,sasr $alu32breg */
  {
    VC4_INSN_FLTUR, "fltur", "fltu", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ftrunc$alu32cond $alu32dreg,$alu32areg,sasl$imm6 */
  {
    VC4_INSN_FTRUNCI, "ftrunci", "ftrunc", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* floor$alu32cond $alu32dreg,$alu32areg,sasl$imm6 */
  {
    VC4_INSN_FLOORI, "floori", "floor", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* flts$alu32cond $alu32dreg,$alu32areg,sasr$imm6 */
  {
    VC4_INSN_FLTSI, "fltsi", "flts", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* fltu$alu32cond $alu32dreg,$alu32areg,sasr$imm6 */
  {
    VC4_INSN_FLTUI, "fltui", "fltu", 32,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* lea.l $alu48idreg,$alu48pcrel */
  {
    VC4_INSN_LEA48, "lea48", "lea.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_LDPCREL27, "ldpcrel27", "ld", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_STPCREL27, "stpcrel27", "st", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_LDHPCREL27, "ldhpcrel27", "ldh", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_STHPCREL27, "sthpcrel27", "sth", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_LDBPCREL27, "ldbpcrel27", "ldb", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_STBPCREL27, "stbpcrel27", "stb", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_LDSHPCREL27, "ldshpcrel27", "ldsh", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb $alu48idreg,$mem48pcrel27 */
  {
    VC4_INSN_LDSBPCREL27, "ldsbpcrel27", "ldsb", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ld.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_LDOFF27, "ldoff27", "ld.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* st.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_STOFF27, "stoff27", "st.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldh.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_LDHOFF27, "ldhoff27", "ldh.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sth.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_STHOFF27, "sthoff27", "sth.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldb.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_LDBOFF27, "ldboff27", "ldb.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* stb.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_STBOFF27, "stboff27", "stb.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsh.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_LDSHOFF27, "ldshoff27", "ldsh.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* ldsb.l $alu48idreg,($mem48sreg+$mem48offset27) */
  {
    VC4_INSN_LDSBOFF27, "ldsboff27", "ldsb.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.l $alu48idreg,$alu48isreg,$alu48immu */
  {
    VC4_INSN_ADD48I, "add48i", "add.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mov.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_MOVI48, "movi48", "mov.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmn.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_CMNI48, "cmni48", "cmn.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* add.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_ADDI48, "addi48", "add.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* bic.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_BICI48, "bici48", "bic.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* mul.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_MULI48, "muli48", "mul.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* eor.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_EORI48, "eori48", "eor.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* sub.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_SUBI48, "subi48", "sub.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* and.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_ANDI48, "andi48", "and.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* cmp.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_CMPI48, "cmpi48", "cmp.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* rsub.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_RSUBI48, "rsubi48", "rsub.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* or.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_ORI48, "ori48", "or.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* max.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_MAXI48, "maxi48", "max.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* min.l $alu48idreg,$alu48immu */
  {
    VC4_INSN_MINI48, "mini48", "min.l", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mov $v80d32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MOVD80V32, "movd80v32", "v32mov", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32bitplanes $v80d32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_BITPLANESD80V32, "bitplanesd80v32", "v32bitplanes", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32even $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_EVEND80V32, "evend80v32", "v32even", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32odd $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ODDD80V32, "oddd80v32", "v32odd", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32interl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_INTERLD80V32, "interld80v32", "v32interl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32interh $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_INTERHD80V32, "interhd80v32", "v32interh", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32bitrev $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_BITREVD80V32, "bitrevd80v32", "v32bitrev", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32ror $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RORD80V32, "rord80v32", "v32ror", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32shl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SHLD80V32, "shld80v32", "v32shl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32shls $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SHLSD80V32, "shlsd80v32", "v32shls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lsr $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_LSRD80V32, "lsrd80v32", "v32lsr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32asr $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ASRD80V32, "asrd80v32", "v32asr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32signshl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGNSHLD80V32, "signshld80v32", "v32signshl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op13 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP13D80V32, "op13d80v32", "v32op13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32signasl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGNASLD80V32, "signasld80v32", "v32signasl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32signasls $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGNASLSD80V32, "signaslsd80v32", "v32signasls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32and $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ANDD80V32, "andd80v32", "v32and", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32or $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ORD80V32, "ord80v32", "v32or", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32eor $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_EORD80V32, "eord80v32", "v32eor", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32bic $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_BICD80V32, "bicd80v32", "v32bic", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32count $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_COUNTD80V32, "countd80v32", "v32count", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32msb $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MSBD80V32, "msbd80v32", "v32msb", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op22 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP22D80V32, "op22d80v32", "v32op22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op23 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP23D80V32, "op23d80v32", "v32op23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32min $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MIND80V32, "mind80v32", "v32min", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32max $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MAXD80V32, "maxd80v32", "v32max", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32dist $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_DISTD80V32, "distd80v32", "v32dist", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32dists $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_DISTSD80V32, "distsd80v32", "v32dists", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32clip $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_CLIPD80V32, "clipd80v32", "v32clip", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32sign $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGND80V32, "signd80v32", "v32sign", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32clips $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_CLIPSD80V32, "clipsd80v32", "v32clips", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32testmag $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_TESTMAGD80V32, "testmagd80v32", "v32testmag", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32add $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDD80V32, "addd80v32", "v32add", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32adds $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDSD80V32, "addsd80v32", "v32adds", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32addc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDCD80V32, "addcd80v32", "v32addc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32addsc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDSCD80V32, "addscd80v32", "v32addsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32sub $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBD80V32, "subd80v32", "v32sub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32subs $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBSD80V32, "subsd80v32", "v32subs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32subc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBCD80V32, "subcd80v32", "v32subc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32subsc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBSCD80V32, "subscd80v32", "v32subsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsub $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBD80V32, "rsubd80v32", "v32rsub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsubs $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBSD80V32, "rsubsd80v32", "v32rsubs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsubc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBCD80V32, "rsubcd80v32", "v32rsubc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsubsc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBSCD80V32, "rsubscd80v32", "v32rsubsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op44 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP44D80V32, "op44d80v32", "v32op44", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op45 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP45D80V32, "op45d80v32", "v32op45", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op46 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP46D80V32, "op46d80v32", "v32op46", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op47 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP47D80V32, "op47d80v32", "v32op47", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mov $v80d32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MOVD80V16, "movd80v16", "v16mov", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16bitplanes $v80d32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_BITPLANESD80V16, "bitplanesd80v16", "v16bitplanes", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16even $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_EVEND80V16, "evend80v16", "v16even", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16odd $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ODDD80V16, "oddd80v16", "v16odd", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16interl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_INTERLD80V16, "interld80v16", "v16interl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16interh $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_INTERHD80V16, "interhd80v16", "v16interh", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16bitrev $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_BITREVD80V16, "bitrevd80v16", "v16bitrev", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16ror $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RORD80V16, "rord80v16", "v16ror", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16shl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SHLD80V16, "shld80v16", "v16shl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16shls $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SHLSD80V16, "shlsd80v16", "v16shls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lsr $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_LSRD80V16, "lsrd80v16", "v16lsr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16asr $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ASRD80V16, "asrd80v16", "v16asr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16signshl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGNSHLD80V16, "signshld80v16", "v16signshl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op13 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP13D80V16, "op13d80v16", "v16op13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16signasl $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGNASLD80V16, "signasld80v16", "v16signasl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16signasls $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGNASLSD80V16, "signaslsd80v16", "v16signasls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16and $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ANDD80V16, "andd80v16", "v16and", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16or $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ORD80V16, "ord80v16", "v16or", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16eor $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_EORD80V16, "eord80v16", "v16eor", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16bic $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_BICD80V16, "bicd80v16", "v16bic", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16count $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_COUNTD80V16, "countd80v16", "v16count", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16msb $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MSBD80V16, "msbd80v16", "v16msb", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op22 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP22D80V16, "op22d80v16", "v16op22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op23 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP23D80V16, "op23d80v16", "v16op23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16min $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MIND80V16, "mind80v16", "v16min", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16max $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MAXD80V16, "maxd80v16", "v16max", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16dist $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_DISTD80V16, "distd80v16", "v16dist", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16dists $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_DISTSD80V16, "distsd80v16", "v16dists", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16clip $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_CLIPD80V16, "clipd80v16", "v16clip", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16sign $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SIGND80V16, "signd80v16", "v16sign", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16clips $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_CLIPSD80V16, "clipsd80v16", "v16clips", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16testmag $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_TESTMAGD80V16, "testmagd80v16", "v16testmag", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16add $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDD80V16, "addd80v16", "v16add", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16adds $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDSD80V16, "addsd80v16", "v16adds", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16addc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDCD80V16, "addcd80v16", "v16addc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16addsc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_ADDSCD80V16, "addscd80v16", "v16addsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16sub $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBD80V16, "subd80v16", "v16sub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16subs $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBSD80V16, "subsd80v16", "v16subs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16subc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBCD80V16, "subcd80v16", "v16subc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16subsc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_SUBSCD80V16, "subscd80v16", "v16subsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsub $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBD80V16, "rsubd80v16", "v16rsub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsubs $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBSD80V16, "rsubsd80v16", "v16rsubs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsubc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBCD80V16, "rsubcd80v16", "v16rsubc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsubsc $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_RSUBSCD80V16, "rsubscd80v16", "v16rsubsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op44 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP44D80V16, "op44d80v16", "v16op44", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op45 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP45D80V16, "op45d80v16", "v16op45", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op46 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP46D80V16, "op46d80v16", "v16op46", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op47 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP47D80V16, "op47d80v16", "v16op47", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mull.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSD80V8, "mullssd80v8", "v8mull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulls.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSSD80V8, "mullsssd80v8", "v8mulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulm.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSD80V8, "mulmssd80v8", "v8mulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulms.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSSD80V8, "mulmsssd80v8", "v8mulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSSD80V8, "mulhdssd80v8", "v8mulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSUD80V8, "mulhdsud80v8", "v8mulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUSD80V8, "mulhdusd80v8", "v8mulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUUD80V8, "mulhduud80v8", "v8mulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSSD80V8, "mulhnssd80v8", "v8mulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSUD80V8, "mulhnsud80v8", "v8mulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUSD80V8, "mulhnusd80v8", "v8mulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUUD80V8, "mulhnuud80v8", "v8mulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhdt.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSSD80V8, "mulhdtssd80v8", "v8mulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhdt.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSUD80V8, "mulhdtsud80v8", "v8mulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op62.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP620D80V8, "op620d80v8", "v8op62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op63.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP630D80V8, "op630d80v8", "v8op63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mull.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSD80V16, "mullssd80v16", "v16mull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulls.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSSD80V16, "mullsssd80v16", "v16mulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulm.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSD80V16, "mulmssd80v16", "v16mulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulms.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSSD80V16, "mulmsssd80v16", "v16mulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSSD80V16, "mulhdssd80v16", "v16mulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSUD80V16, "mulhdsud80v16", "v16mulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUSD80V16, "mulhdusd80v16", "v16mulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUUD80V16, "mulhduud80v16", "v16mulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSSD80V16, "mulhnssd80v16", "v16mulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSUD80V16, "mulhnsud80v16", "v16mulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUSD80V16, "mulhnusd80v16", "v16mulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUUD80V16, "mulhnuud80v16", "v16mulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhdt.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSSD80V16, "mulhdtssd80v16", "v16mulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhdt.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSUD80V16, "mulhdtsud80v16", "v16mulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op62.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP620D80V16, "op620d80v16", "v16op62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op63.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP630D80V16, "op630d80v16", "v16op63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mull.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSD80V32, "mullssd80v32", "v32mull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulls.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSSD80V32, "mullsssd80v32", "v32mulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulm.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSD80V32, "mulmssd80v32", "v32mulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulms.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSSD80V32, "mulmsssd80v32", "v32mulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSSD80V32, "mulhdssd80v32", "v32mulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSUD80V32, "mulhdsud80v32", "v32mulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUSD80V32, "mulhdusd80v32", "v32mulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUUD80V32, "mulhduud80v32", "v32mulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSSD80V32, "mulhnssd80v32", "v32mulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSUD80V32, "mulhnsud80v32", "v32mulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUSD80V32, "mulhnusd80v32", "v32mulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUUD80V32, "mulhnuud80v32", "v32mulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhdt.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSSD80V32, "mulhdtssd80v32", "v32mulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhdt.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSUD80V32, "mulhdtsud80v32", "v32mulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op62.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP620D80V32, "op620d80v32", "v32op62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op63.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP630D80V32, "op630d80v32", "v32op63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmull.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSD80VUNK, "mullssd80vunk", "vunkmull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulls.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULLSSSD80VUNK, "mullsssd80vunk", "vunkmulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulm.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSD80VUNK, "mulmssd80vunk", "vunkmulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulms.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULMSSSD80VUNK, "mulmsssd80vunk", "vunkmulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSSD80VUNK, "mulhdssd80vunk", "vunkmulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDSUD80VUNK, "mulhdsud80vunk", "vunkmulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUSD80VUNK, "mulhdusd80vunk", "vunkmulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDUUD80VUNK, "mulhduud80vunk", "vunkmulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSSD80VUNK, "mulhnssd80vunk", "vunkmulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNSUD80VUNK, "mulhnsud80vunk", "vunkmulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUSD80VUNK, "mulhnusd80vunk", "vunkmulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHNUUD80VUNK, "mulhnuud80vunk", "vunkmulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhdt.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSSD80VUNK, "mulhdtssd80vunk", "vunkmulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhdt.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MULHDTSUD80VUNK, "mulhdtsud80vunk", "vunkmulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop62.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP620D80VUNK, "op620d80vunk", "vunkop62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop63.0 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP630D80VUNK, "op630d80vunk", "vunkop63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op48.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP481D80V8, "op481d80v8", "v8op48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op49.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP491D80V8, "op491d80v8", "v8op49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op50.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP501D80V8, "op501d80v8", "v8op50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op51.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP511D80V8, "op511d80v8", "v8op51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SSD80V8, "mul32ssd80v8", "v8mul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SUD80V8, "mul32sud80v8", "v8mul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32USD80V8, "mul32usd80v8", "v8mul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32UUD80V8, "mul32uud80v8", "v8mul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op56.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP561D80V8, "op561d80v8", "v8op56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op57.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP571D80V8, "op571d80v8", "v8op57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op58.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP581D80V8, "op581d80v8", "v8op58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op59.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP591D80V8, "op591d80v8", "v8op59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op60.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP601D80V8, "op601d80v8", "v8op60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op61.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP611D80V8, "op611d80v8", "v8op61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op62.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP621D80V8, "op621d80v8", "v8op62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op63.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP631D80V8, "op631d80v8", "v8op63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op48.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP481D80V16, "op481d80v16", "v16op48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op49.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP491D80V16, "op491d80v16", "v16op49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op50.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP501D80V16, "op501d80v16", "v16op50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op51.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP511D80V16, "op511d80v16", "v16op51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SSD80V16, "mul32ssd80v16", "v16mul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SUD80V16, "mul32sud80v16", "v16mul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32USD80V16, "mul32usd80v16", "v16mul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32UUD80V16, "mul32uud80v16", "v16mul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op56.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP561D80V16, "op561d80v16", "v16op56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op57.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP571D80V16, "op571d80v16", "v16op57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op58.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP581D80V16, "op581d80v16", "v16op58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op59.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP591D80V16, "op591d80v16", "v16op59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op60.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP601D80V16, "op601d80v16", "v16op60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op61.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP611D80V16, "op611d80v16", "v16op61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op62.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP621D80V16, "op621d80v16", "v16op62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op63.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP631D80V16, "op631d80v16", "v16op63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op48.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP481D80V32, "op481d80v32", "v32op48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op49.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP491D80V32, "op491d80v32", "v32op49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op50.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP501D80V32, "op501d80v32", "v32op50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op51.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP511D80V32, "op511d80v32", "v32op51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SSD80V32, "mul32ssd80v32", "v32mul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SUD80V32, "mul32sud80v32", "v32mul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32USD80V32, "mul32usd80v32", "v32mul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32UUD80V32, "mul32uud80v32", "v32mul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op56.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP561D80V32, "op561d80v32", "v32op56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op57.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP571D80V32, "op571d80v32", "v32op57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op58.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP581D80V32, "op581d80v32", "v32op58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op59.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP591D80V32, "op591d80v32", "v32op59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op60.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP601D80V32, "op601d80v32", "v32op60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op61.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP611D80V32, "op611d80v32", "v32op61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op62.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP621D80V32, "op621d80v32", "v32op62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op63.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP631D80V32, "op631d80v32", "v32op63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop48.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP481D80VUNK, "op481d80vunk", "vunkop48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop49.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP491D80VUNK, "op491d80vunk", "vunkop49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop50.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP501D80VUNK, "op501d80vunk", "vunkop50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop51.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP511D80VUNK, "op511d80vunk", "vunkop51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.ss $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SSD80VUNK, "mul32ssd80vunk", "vunkmul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.su $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32SUD80VUNK, "mul32sud80vunk", "vunkmul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.us $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32USD80VUNK, "mul32usd80vunk", "vunkmul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.uu $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_MUL32UUD80VUNK, "mul32uud80vunk", "vunkmul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop56.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP561D80VUNK, "op561d80vunk", "vunkop56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop57.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP571D80VUNK, "op571d80vunk", "vunkop57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop58.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP581D80VUNK, "op581d80vunk", "vunkop58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop59.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP591D80VUNK, "op591d80vunk", "vunkop59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop60.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP601D80VUNK, "op601d80vunk", "vunkop60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop61.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP611D80VUNK, "op611d80vunk", "vunkop61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop62.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP621D80VUNK, "op621d80vunk", "vunkop62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop63.1 $v80d32reg,$v80a32reg,$v80b32reg$v80mods */
  {
    VC4_INSN_OP631D80VUNK, "op631d80vunk", "vunkop63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mov $v80d32reg,$v80imm$v80mods */
  {
    VC4_INSN_MOVD80I32, "movd80i32", "v32mov", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32bitplanes $v80d32reg,$v80imm$v80mods */
  {
    VC4_INSN_BITPLANESD80I32, "bitplanesd80i32", "v32bitplanes", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32even $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_EVEND80I32, "evend80i32", "v32even", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32odd $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ODDD80I32, "oddd80i32", "v32odd", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32interl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_INTERLD80I32, "interld80i32", "v32interl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32interh $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_INTERHD80I32, "interhd80i32", "v32interh", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32bitrev $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_BITREVD80I32, "bitrevd80i32", "v32bitrev", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32ror $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RORD80I32, "rord80i32", "v32ror", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32shl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SHLD80I32, "shld80i32", "v32shl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32shls $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SHLSD80I32, "shlsd80i32", "v32shls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lsr $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_LSRD80I32, "lsrd80i32", "v32lsr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32asr $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ASRD80I32, "asrd80i32", "v32asr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32signshl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGNSHLD80I32, "signshld80i32", "v32signshl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op13 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP13D80I32, "op13d80i32", "v32op13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32signasl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGNASLD80I32, "signasld80i32", "v32signasl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32signasls $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGNASLSD80I32, "signaslsd80i32", "v32signasls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32and $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ANDD80I32, "andd80i32", "v32and", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32or $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ORD80I32, "ord80i32", "v32or", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32eor $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_EORD80I32, "eord80i32", "v32eor", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32bic $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_BICD80I32, "bicd80i32", "v32bic", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32count $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_COUNTD80I32, "countd80i32", "v32count", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32msb $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MSBD80I32, "msbd80i32", "v32msb", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op22 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP22D80I32, "op22d80i32", "v32op22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op23 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP23D80I32, "op23d80i32", "v32op23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32min $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MIND80I32, "mind80i32", "v32min", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32max $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MAXD80I32, "maxd80i32", "v32max", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32dist $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_DISTD80I32, "distd80i32", "v32dist", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32dists $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_DISTSD80I32, "distsd80i32", "v32dists", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32clip $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_CLIPD80I32, "clipd80i32", "v32clip", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32sign $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGND80I32, "signd80i32", "v32sign", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32clips $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_CLIPSD80I32, "clipsd80i32", "v32clips", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32testmag $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_TESTMAGD80I32, "testmagd80i32", "v32testmag", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32add $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDD80I32, "addd80i32", "v32add", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32adds $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDSD80I32, "addsd80i32", "v32adds", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32addc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDCD80I32, "addcd80i32", "v32addc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32addsc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDSCD80I32, "addscd80i32", "v32addsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32sub $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBD80I32, "subd80i32", "v32sub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32subs $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBSD80I32, "subsd80i32", "v32subs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32subc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBCD80I32, "subcd80i32", "v32subc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32subsc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBSCD80I32, "subscd80i32", "v32subsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsub $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBD80I32, "rsubd80i32", "v32rsub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsubs $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBSD80I32, "rsubsd80i32", "v32rsubs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsubc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBCD80I32, "rsubcd80i32", "v32rsubc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32rsubsc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBSCD80I32, "rsubscd80i32", "v32rsubsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op44 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP44D80I32, "op44d80i32", "v32op44", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op45 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP45D80I32, "op45d80i32", "v32op45", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op46 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP46D80I32, "op46d80i32", "v32op46", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op47 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP47D80I32, "op47d80i32", "v32op47", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mov $v80d32reg,$v80imm$v80mods */
  {
    VC4_INSN_MOVD80I16, "movd80i16", "v16mov", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16bitplanes $v80d32reg,$v80imm$v80mods */
  {
    VC4_INSN_BITPLANESD80I16, "bitplanesd80i16", "v16bitplanes", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16even $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_EVEND80I16, "evend80i16", "v16even", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16odd $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ODDD80I16, "oddd80i16", "v16odd", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16interl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_INTERLD80I16, "interld80i16", "v16interl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16interh $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_INTERHD80I16, "interhd80i16", "v16interh", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16bitrev $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_BITREVD80I16, "bitrevd80i16", "v16bitrev", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16ror $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RORD80I16, "rord80i16", "v16ror", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16shl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SHLD80I16, "shld80i16", "v16shl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16shls $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SHLSD80I16, "shlsd80i16", "v16shls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lsr $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_LSRD80I16, "lsrd80i16", "v16lsr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16asr $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ASRD80I16, "asrd80i16", "v16asr", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16signshl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGNSHLD80I16, "signshld80i16", "v16signshl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op13 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP13D80I16, "op13d80i16", "v16op13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16signasl $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGNASLD80I16, "signasld80i16", "v16signasl", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16signasls $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGNASLSD80I16, "signaslsd80i16", "v16signasls", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16and $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ANDD80I16, "andd80i16", "v16and", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16or $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ORD80I16, "ord80i16", "v16or", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16eor $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_EORD80I16, "eord80i16", "v16eor", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16bic $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_BICD80I16, "bicd80i16", "v16bic", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16count $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_COUNTD80I16, "countd80i16", "v16count", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16msb $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MSBD80I16, "msbd80i16", "v16msb", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op22 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP22D80I16, "op22d80i16", "v16op22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op23 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP23D80I16, "op23d80i16", "v16op23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16min $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MIND80I16, "mind80i16", "v16min", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16max $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MAXD80I16, "maxd80i16", "v16max", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16dist $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_DISTD80I16, "distd80i16", "v16dist", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16dists $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_DISTSD80I16, "distsd80i16", "v16dists", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16clip $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_CLIPD80I16, "clipd80i16", "v16clip", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16sign $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SIGND80I16, "signd80i16", "v16sign", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16clips $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_CLIPSD80I16, "clipsd80i16", "v16clips", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16testmag $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_TESTMAGD80I16, "testmagd80i16", "v16testmag", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16add $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDD80I16, "addd80i16", "v16add", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16adds $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDSD80I16, "addsd80i16", "v16adds", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16addc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDCD80I16, "addcd80i16", "v16addc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16addsc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_ADDSCD80I16, "addscd80i16", "v16addsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16sub $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBD80I16, "subd80i16", "v16sub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16subs $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBSD80I16, "subsd80i16", "v16subs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16subc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBCD80I16, "subcd80i16", "v16subc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16subsc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_SUBSCD80I16, "subscd80i16", "v16subsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsub $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBD80I16, "rsubd80i16", "v16rsub", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsubs $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBSD80I16, "rsubsd80i16", "v16rsubs", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsubc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBCD80I16, "rsubcd80i16", "v16rsubc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16rsubsc $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_RSUBSCD80I16, "rsubscd80i16", "v16rsubsc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op44 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP44D80I16, "op44d80i16", "v16op44", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op45 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP45D80I16, "op45d80i16", "v16op45", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op46 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP46D80I16, "op46d80i16", "v16op46", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op47 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP47D80I16, "op47d80i16", "v16op47", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mull.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSD80I8, "mullssd80i8", "v8mull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulls.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSSD80I8, "mullsssd80i8", "v8mulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulm.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSD80I8, "mulmssd80i8", "v8mulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulms.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSSD80I8, "mulmsssd80i8", "v8mulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSSD80I8, "mulhdssd80i8", "v8mulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSUD80I8, "mulhdsud80i8", "v8mulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUSD80I8, "mulhdusd80i8", "v8mulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhd.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUUD80I8, "mulhduud80i8", "v8mulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSSD80I8, "mulhnssd80i8", "v8mulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSUD80I8, "mulhnsud80i8", "v8mulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUSD80I8, "mulhnusd80i8", "v8mulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhn.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUUD80I8, "mulhnuud80i8", "v8mulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhdt.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSSD80I8, "mulhdtssd80i8", "v8mulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mulhdt.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSUD80I8, "mulhdtsud80i8", "v8mulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op62.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP620D80I8, "op620d80i8", "v8op62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op63.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP630D80I8, "op630d80i8", "v8op63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mull.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSD80I16, "mullssd80i16", "v16mull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulls.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSSD80I16, "mullsssd80i16", "v16mulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulm.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSD80I16, "mulmssd80i16", "v16mulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulms.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSSD80I16, "mulmsssd80i16", "v16mulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSSD80I16, "mulhdssd80i16", "v16mulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSUD80I16, "mulhdsud80i16", "v16mulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUSD80I16, "mulhdusd80i16", "v16mulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhd.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUUD80I16, "mulhduud80i16", "v16mulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSSD80I16, "mulhnssd80i16", "v16mulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSUD80I16, "mulhnsud80i16", "v16mulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUSD80I16, "mulhnusd80i16", "v16mulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhn.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUUD80I16, "mulhnuud80i16", "v16mulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhdt.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSSD80I16, "mulhdtssd80i16", "v16mulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mulhdt.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSUD80I16, "mulhdtsud80i16", "v16mulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op62.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP620D80I16, "op620d80i16", "v16op62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op63.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP630D80I16, "op630d80i16", "v16op63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mull.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSD80I32, "mullssd80i32", "v32mull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulls.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSSD80I32, "mullsssd80i32", "v32mulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulm.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSD80I32, "mulmssd80i32", "v32mulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulms.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSSD80I32, "mulmsssd80i32", "v32mulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSSD80I32, "mulhdssd80i32", "v32mulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSUD80I32, "mulhdsud80i32", "v32mulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUSD80I32, "mulhdusd80i32", "v32mulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhd.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUUD80I32, "mulhduud80i32", "v32mulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSSD80I32, "mulhnssd80i32", "v32mulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSUD80I32, "mulhnsud80i32", "v32mulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUSD80I32, "mulhnusd80i32", "v32mulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhn.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUUD80I32, "mulhnuud80i32", "v32mulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhdt.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSSD80I32, "mulhdtssd80i32", "v32mulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mulhdt.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSUD80I32, "mulhdtsud80i32", "v32mulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op62.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP620D80I32, "op620d80i32", "v32op62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op63.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP630D80I32, "op630d80i32", "v32op63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmull.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSD80IUNK, "mullssd80iunk", "vunkmull.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulls.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULLSSSD80IUNK, "mullsssd80iunk", "vunkmulls.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulm.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSD80IUNK, "mulmssd80iunk", "vunkmulm.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulms.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULMSSSD80IUNK, "mulmsssd80iunk", "vunkmulms.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSSD80IUNK, "mulhdssd80iunk", "vunkmulhd.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDSUD80IUNK, "mulhdsud80iunk", "vunkmulhd.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUSD80IUNK, "mulhdusd80iunk", "vunkmulhd.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhd.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDUUD80IUNK, "mulhduud80iunk", "vunkmulhd.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSSD80IUNK, "mulhnssd80iunk", "vunkmulhn.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNSUD80IUNK, "mulhnsud80iunk", "vunkmulhn.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUSD80IUNK, "mulhnusd80iunk", "vunkmulhn.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhn.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHNUUD80IUNK, "mulhnuud80iunk", "vunkmulhn.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhdt.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSSD80IUNK, "mulhdtssd80iunk", "vunkmulhdt.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmulhdt.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MULHDTSUD80IUNK, "mulhdtsud80iunk", "vunkmulhdt.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop62.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP620D80IUNK, "op620d80iunk", "vunkop62.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop63.0 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP630D80IUNK, "op630d80iunk", "vunkop63.0", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op48.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP481D80I8, "op481d80i8", "v8op48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op49.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP491D80I8, "op491d80i8", "v8op49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op50.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP501D80I8, "op501d80i8", "v8op50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op51.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP511D80I8, "op511d80i8", "v8op51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SSD80I8, "mul32ssd80i8", "v8mul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SUD80I8, "mul32sud80i8", "v8mul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32USD80I8, "mul32usd80i8", "v8mul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mul32.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32UUD80I8, "mul32uud80i8", "v8mul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op56.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP561D80I8, "op561d80i8", "v8op56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op57.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP571D80I8, "op571d80i8", "v8op57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op58.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP581D80I8, "op581d80i8", "v8op58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op59.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP591D80I8, "op591d80i8", "v8op59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op60.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP601D80I8, "op601d80i8", "v8op60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op61.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP611D80I8, "op611d80i8", "v8op61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op62.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP621D80I8, "op621d80i8", "v8op62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8op63.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP631D80I8, "op631d80i8", "v8op63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op48.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP481D80I16, "op481d80i16", "v16op48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op49.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP491D80I16, "op491d80i16", "v16op49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op50.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP501D80I16, "op501d80i16", "v16op50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op51.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP511D80I16, "op511d80i16", "v16op51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SSD80I16, "mul32ssd80i16", "v16mul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SUD80I16, "mul32sud80i16", "v16mul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32USD80I16, "mul32usd80i16", "v16mul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mul32.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32UUD80I16, "mul32uud80i16", "v16mul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op56.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP561D80I16, "op561d80i16", "v16op56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op57.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP571D80I16, "op571d80i16", "v16op57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op58.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP581D80I16, "op581d80i16", "v16op58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op59.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP591D80I16, "op591d80i16", "v16op59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op60.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP601D80I16, "op601d80i16", "v16op60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op61.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP611D80I16, "op611d80i16", "v16op61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op62.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP621D80I16, "op621d80i16", "v16op62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16op63.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP631D80I16, "op631d80i16", "v16op63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op48.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP481D80I32, "op481d80i32", "v32op48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op49.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP491D80I32, "op491d80i32", "v32op49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op50.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP501D80I32, "op501d80i32", "v32op50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op51.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP511D80I32, "op511d80i32", "v32op51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SSD80I32, "mul32ssd80i32", "v32mul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SUD80I32, "mul32sud80i32", "v32mul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32USD80I32, "mul32usd80i32", "v32mul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mul32.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32UUD80I32, "mul32uud80i32", "v32mul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op56.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP561D80I32, "op561d80i32", "v32op56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op57.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP571D80I32, "op571d80i32", "v32op57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op58.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP581D80I32, "op581d80i32", "v32op58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op59.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP591D80I32, "op591d80i32", "v32op59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op60.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP601D80I32, "op601d80i32", "v32op60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op61.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP611D80I32, "op611d80i32", "v32op61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op62.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP621D80I32, "op621d80i32", "v32op62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32op63.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP631D80I32, "op631d80i32", "v32op63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop48.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP481D80IUNK, "op481d80iunk", "vunkop48.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop49.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP491D80IUNK, "op491d80iunk", "vunkop49.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop50.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP501D80IUNK, "op501d80iunk", "vunkop50.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop51.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP511D80IUNK, "op511d80iunk", "vunkop51.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.ss $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SSD80IUNK, "mul32ssd80iunk", "vunkmul32.ss", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.su $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32SUD80IUNK, "mul32sud80iunk", "vunkmul32.su", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.us $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32USD80IUNK, "mul32usd80iunk", "vunkmul32.us", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmul32.uu $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_MUL32UUD80IUNK, "mul32uud80iunk", "vunkmul32.uu", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop56.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP561D80IUNK, "op561d80iunk", "vunkop56.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop57.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP571D80IUNK, "op571d80iunk", "vunkop57.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop58.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP581D80IUNK, "op581d80iunk", "vunkop58.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop59.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP591D80IUNK, "op591d80iunk", "vunkop59.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop60.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP601D80IUNK, "op601d80iunk", "vunkop60.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop61.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP611D80IUNK, "op611d80iunk", "vunkop61.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop62.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP621D80IUNK, "op621d80iunk", "vunkop62.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkop63.1 $v80d32reg,$v80a32reg,$v80imm$v80mods */
  {
    VC4_INSN_OP631D80IUNK, "op631d80iunk", "vunkop63.1", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8ld $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V8LD, "v8ld", "v8ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16ld $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V16LD, "v16ld", "v16ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32ld $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V32LD, "v32ld", "v32ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkld $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_VUNKLD, "vunkld", "vunkld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8lookupm $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V8LOOKUPM, "v8lookupm", "v8lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lookupm $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V16LOOKUPM, "v16lookupm", "v16lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lookupm $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V32LOOKUPM, "v32lookupm", "v32lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunklookupm $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_VUNKLOOKUPM, "vunklookupm", "vunklookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8lookupml $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V8LOOKUPML, "v8lookupml", "v8lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lookupml $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V16LOOKUPML, "v16lookupml", "v16lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lookupml $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_V32LOOKUPML, "v32lookupml", "v32lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunklookupml $v80d32reg,($vec_ldaddr)$v80mods_mem */
  {
    VC4_INSN_VUNKLOOKUPML, "vunklookupml", "vunklookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8st $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V8ST, "v8st", "v8st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16st $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V16ST, "v16st", "v16st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32st $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V32ST, "v32st", "v32st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkst $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_VUNKST, "vunkst", "vunkst", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8indexwritem $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V8INDEXWRITEM, "v8indexwritem", "v8indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16indexwritem $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V16INDEXWRITEM, "v16indexwritem", "v16indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32indexwritem $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V32INDEXWRITEM, "v32indexwritem", "v32indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkindexwritem $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_VUNKINDEXWRITEM, "vunkindexwritem", "vunkindexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8indexwriteml $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V8INDEXWRITEML, "v8indexwriteml", "v8indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16indexwriteml $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V16INDEXWRITEML, "v16indexwriteml", "v16indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32indexwriteml $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_V32INDEXWRITEML, "v32indexwriteml", "v32indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkindexwriteml $v80a32reg,($vec_staddr)$v80mods_mem */
  {
    VC4_INSN_VUNKINDEXWRITEML, "vunkindexwriteml", "vunkindexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8ld $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8LDGEN, "v8ldgen", "v8ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8lookupm $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8LOOKUPMGEN, "v8lookupmgen", "v8lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8lookupml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8LOOKUPMLGEN, "v8lookupmlgen", "v8lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem03 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM03GEN, "v8mem03gen", "v8mem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8st $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8STGEN, "v8stgen", "v8st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8indexwritem $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8INDEXWRITEMGEN, "v8indexwritemgen", "v8indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8indexwriteml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8INDEXWRITEMLGEN, "v8indexwritemlgen", "v8indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem07 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM07GEN, "v8mem07gen", "v8mem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8memread $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEMREADGEN, "v8memreadgen", "v8memread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8memwrite $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEMWRITEGEN, "v8memwritegen", "v8memwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem10 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM10GEN, "v8mem10gen", "v8mem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem11 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM11GEN, "v8mem11gen", "v8mem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem12 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM12GEN, "v8mem12gen", "v8mem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem13 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM13GEN, "v8mem13gen", "v8mem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem14 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM14GEN, "v8mem14gen", "v8mem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem15 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM15GEN, "v8mem15gen", "v8mem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem16 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM16GEN, "v8mem16gen", "v8mem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem17 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM17GEN, "v8mem17gen", "v8mem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem18 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM18GEN, "v8mem18gen", "v8mem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem19 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM19GEN, "v8mem19gen", "v8mem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem20 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM20GEN, "v8mem20gen", "v8mem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem21 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM21GEN, "v8mem21gen", "v8mem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem22 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM22GEN, "v8mem22gen", "v8mem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem23 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM23GEN, "v8mem23gen", "v8mem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8getacc $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8GETACCGEN, "v8getaccgen", "v8getacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem25 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM25GEN, "v8mem25gen", "v8mem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem26 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM26GEN, "v8mem26gen", "v8mem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem27 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM27GEN, "v8mem27gen", "v8mem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem28 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM28GEN, "v8mem28gen", "v8mem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem29 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM29GEN, "v8mem29gen", "v8mem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem30 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM30GEN, "v8mem30gen", "v8mem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem31 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V8MEM31GEN, "v8mem31gen", "v8mem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16ld $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16LDGEN, "v16ldgen", "v16ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lookupm $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16LOOKUPMGEN, "v16lookupmgen", "v16lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lookupml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16LOOKUPMLGEN, "v16lookupmlgen", "v16lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem03 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM03GEN, "v16mem03gen", "v16mem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16st $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16STGEN, "v16stgen", "v16st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16indexwritem $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16INDEXWRITEMGEN, "v16indexwritemgen", "v16indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16indexwriteml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16INDEXWRITEMLGEN, "v16indexwritemlgen", "v16indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem07 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM07GEN, "v16mem07gen", "v16mem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16memread $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEMREADGEN, "v16memreadgen", "v16memread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16memwrite $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEMWRITEGEN, "v16memwritegen", "v16memwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem10 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM10GEN, "v16mem10gen", "v16mem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem11 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM11GEN, "v16mem11gen", "v16mem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem12 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM12GEN, "v16mem12gen", "v16mem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem13 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM13GEN, "v16mem13gen", "v16mem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem14 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM14GEN, "v16mem14gen", "v16mem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem15 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM15GEN, "v16mem15gen", "v16mem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem16 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM16GEN, "v16mem16gen", "v16mem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem17 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM17GEN, "v16mem17gen", "v16mem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem18 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM18GEN, "v16mem18gen", "v16mem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem19 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM19GEN, "v16mem19gen", "v16mem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem20 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM20GEN, "v16mem20gen", "v16mem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem21 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM21GEN, "v16mem21gen", "v16mem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem22 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM22GEN, "v16mem22gen", "v16mem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem23 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM23GEN, "v16mem23gen", "v16mem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16getacc $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16GETACCGEN, "v16getaccgen", "v16getacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem25 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM25GEN, "v16mem25gen", "v16mem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem26 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM26GEN, "v16mem26gen", "v16mem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem27 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM27GEN, "v16mem27gen", "v16mem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem28 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM28GEN, "v16mem28gen", "v16mem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem29 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM29GEN, "v16mem29gen", "v16mem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem30 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM30GEN, "v16mem30gen", "v16mem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem31 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V16MEM31GEN, "v16mem31gen", "v16mem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32ld $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32LDGEN, "v32ldgen", "v32ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lookupm $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32LOOKUPMGEN, "v32lookupmgen", "v32lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lookupml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32LOOKUPMLGEN, "v32lookupmlgen", "v32lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem03 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM03GEN, "v32mem03gen", "v32mem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32st $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32STGEN, "v32stgen", "v32st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32indexwritem $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32INDEXWRITEMGEN, "v32indexwritemgen", "v32indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32indexwriteml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32INDEXWRITEMLGEN, "v32indexwritemlgen", "v32indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem07 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM07GEN, "v32mem07gen", "v32mem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32memread $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEMREADGEN, "v32memreadgen", "v32memread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32memwrite $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEMWRITEGEN, "v32memwritegen", "v32memwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem10 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM10GEN, "v32mem10gen", "v32mem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem11 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM11GEN, "v32mem11gen", "v32mem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem12 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM12GEN, "v32mem12gen", "v32mem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem13 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM13GEN, "v32mem13gen", "v32mem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem14 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM14GEN, "v32mem14gen", "v32mem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem15 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM15GEN, "v32mem15gen", "v32mem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem16 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM16GEN, "v32mem16gen", "v32mem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem17 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM17GEN, "v32mem17gen", "v32mem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem18 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM18GEN, "v32mem18gen", "v32mem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem19 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM19GEN, "v32mem19gen", "v32mem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem20 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM20GEN, "v32mem20gen", "v32mem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem21 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM21GEN, "v32mem21gen", "v32mem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem22 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM22GEN, "v32mem22gen", "v32mem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem23 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM23GEN, "v32mem23gen", "v32mem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32getacc $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32GETACCGEN, "v32getaccgen", "v32getacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem25 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM25GEN, "v32mem25gen", "v32mem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem26 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM26GEN, "v32mem26gen", "v32mem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem27 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM27GEN, "v32mem27gen", "v32mem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem28 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM28GEN, "v32mem28gen", "v32mem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem29 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM29GEN, "v32mem29gen", "v32mem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem30 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM30GEN, "v32mem30gen", "v32mem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem31 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_V32MEM31GEN, "v32mem31gen", "v32mem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkld $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKLDGEN, "vunkldgen", "vunkld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunklookupm $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKLOOKUPMGEN, "vunklookupmgen", "vunklookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunklookupml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKLOOKUPMLGEN, "vunklookupmlgen", "vunklookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem03 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM03GEN, "vunkmem03gen", "vunkmem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkst $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKSTGEN, "vunkstgen", "vunkst", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkindexwritem $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKINDEXWRITEMGEN, "vunkindexwritemgen", "vunkindexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkindexwriteml $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKINDEXWRITEMLGEN, "vunkindexwritemlgen", "vunkindexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem07 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM07GEN, "vunkmem07gen", "vunkmem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmemread $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEMREADGEN, "vunkmemreadgen", "vunkmemread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmemwrite $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEMWRITEGEN, "vunkmemwritegen", "vunkmemwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem10 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM10GEN, "vunkmem10gen", "vunkmem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem11 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM11GEN, "vunkmem11gen", "vunkmem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem12 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM12GEN, "vunkmem12gen", "vunkmem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem13 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM13GEN, "vunkmem13gen", "vunkmem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem14 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM14GEN, "vunkmem14gen", "vunkmem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem15 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM15GEN, "vunkmem15gen", "vunkmem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem16 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM16GEN, "vunkmem16gen", "vunkmem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem17 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM17GEN, "vunkmem17gen", "vunkmem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem18 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM18GEN, "vunkmem18gen", "vunkmem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem19 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM19GEN, "vunkmem19gen", "vunkmem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem20 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM20GEN, "vunkmem20gen", "vunkmem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem21 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM21GEN, "vunkmem21gen", "vunkmem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem22 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM22GEN, "vunkmem22gen", "vunkmem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem23 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM23GEN, "vunkmem23gen", "vunkmem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkgetacc $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKGETACCGEN, "vunkgetaccgen", "vunkgetacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem25 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM25GEN, "vunkmem25gen", "vunkmem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem26 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM26GEN, "vunkmem26gen", "vunkmem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem27 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM27GEN, "vunkmem27gen", "vunkmem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem28 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM28GEN, "vunkmem28gen", "vunkmem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem29 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM29GEN, "vunkmem29gen", "vunkmem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem30 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM30GEN, "vunkmem30gen", "vunkmem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem31 $v80d32reg,$v80a32reg,$v80b32reg$v80mods_mem */
  {
    VC4_INSN_VUNKMEM31GEN, "vunkmem31gen", "vunkmem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8ld $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8LDIGEN, "v8ldigen", "v8ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8lookupm $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8LOOKUPMIGEN, "v8lookupmigen", "v8lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8lookupml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8LOOKUPMLIGEN, "v8lookupmligen", "v8lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem03 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM03IGEN, "v8mem03igen", "v8mem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8st $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8STIGEN, "v8stigen", "v8st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8indexwritem $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8INDEXWRITEMIGEN, "v8indexwritemigen", "v8indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8indexwriteml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8INDEXWRITEMLIGEN, "v8indexwritemligen", "v8indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem07 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM07IGEN, "v8mem07igen", "v8mem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8memread $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEMREADIGEN, "v8memreadigen", "v8memread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8memwrite $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEMWRITEIGEN, "v8memwriteigen", "v8memwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem10 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM10IGEN, "v8mem10igen", "v8mem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem11 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM11IGEN, "v8mem11igen", "v8mem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem12 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM12IGEN, "v8mem12igen", "v8mem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem13 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM13IGEN, "v8mem13igen", "v8mem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem14 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM14IGEN, "v8mem14igen", "v8mem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem15 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM15IGEN, "v8mem15igen", "v8mem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem16 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM16IGEN, "v8mem16igen", "v8mem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem17 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM17IGEN, "v8mem17igen", "v8mem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem18 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM18IGEN, "v8mem18igen", "v8mem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem19 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM19IGEN, "v8mem19igen", "v8mem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem20 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM20IGEN, "v8mem20igen", "v8mem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem21 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM21IGEN, "v8mem21igen", "v8mem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem22 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM22IGEN, "v8mem22igen", "v8mem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem23 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM23IGEN, "v8mem23igen", "v8mem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8getacc $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8GETACCIGEN, "v8getaccigen", "v8getacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem25 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM25IGEN, "v8mem25igen", "v8mem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem26 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM26IGEN, "v8mem26igen", "v8mem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem27 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM27IGEN, "v8mem27igen", "v8mem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem28 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM28IGEN, "v8mem28igen", "v8mem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem29 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM29IGEN, "v8mem29igen", "v8mem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem30 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM30IGEN, "v8mem30igen", "v8mem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v8mem31 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V8MEM31IGEN, "v8mem31igen", "v8mem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16ld $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16LDIGEN, "v16ldigen", "v16ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lookupm $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16LOOKUPMIGEN, "v16lookupmigen", "v16lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16lookupml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16LOOKUPMLIGEN, "v16lookupmligen", "v16lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem03 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM03IGEN, "v16mem03igen", "v16mem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16st $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16STIGEN, "v16stigen", "v16st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16indexwritem $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16INDEXWRITEMIGEN, "v16indexwritemigen", "v16indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16indexwriteml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16INDEXWRITEMLIGEN, "v16indexwritemligen", "v16indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem07 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM07IGEN, "v16mem07igen", "v16mem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16memread $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEMREADIGEN, "v16memreadigen", "v16memread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16memwrite $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEMWRITEIGEN, "v16memwriteigen", "v16memwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem10 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM10IGEN, "v16mem10igen", "v16mem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem11 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM11IGEN, "v16mem11igen", "v16mem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem12 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM12IGEN, "v16mem12igen", "v16mem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem13 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM13IGEN, "v16mem13igen", "v16mem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem14 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM14IGEN, "v16mem14igen", "v16mem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem15 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM15IGEN, "v16mem15igen", "v16mem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem16 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM16IGEN, "v16mem16igen", "v16mem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem17 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM17IGEN, "v16mem17igen", "v16mem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem18 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM18IGEN, "v16mem18igen", "v16mem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem19 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM19IGEN, "v16mem19igen", "v16mem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem20 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM20IGEN, "v16mem20igen", "v16mem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem21 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM21IGEN, "v16mem21igen", "v16mem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem22 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM22IGEN, "v16mem22igen", "v16mem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem23 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM23IGEN, "v16mem23igen", "v16mem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16getacc $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16GETACCIGEN, "v16getaccigen", "v16getacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem25 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM25IGEN, "v16mem25igen", "v16mem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem26 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM26IGEN, "v16mem26igen", "v16mem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem27 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM27IGEN, "v16mem27igen", "v16mem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem28 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM28IGEN, "v16mem28igen", "v16mem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem29 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM29IGEN, "v16mem29igen", "v16mem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem30 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM30IGEN, "v16mem30igen", "v16mem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v16mem31 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V16MEM31IGEN, "v16mem31igen", "v16mem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32ld $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32LDIGEN, "v32ldigen", "v32ld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lookupm $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32LOOKUPMIGEN, "v32lookupmigen", "v32lookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32lookupml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32LOOKUPMLIGEN, "v32lookupmligen", "v32lookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem03 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM03IGEN, "v32mem03igen", "v32mem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32st $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32STIGEN, "v32stigen", "v32st", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32indexwritem $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32INDEXWRITEMIGEN, "v32indexwritemigen", "v32indexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32indexwriteml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32INDEXWRITEMLIGEN, "v32indexwritemligen", "v32indexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem07 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM07IGEN, "v32mem07igen", "v32mem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32memread $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEMREADIGEN, "v32memreadigen", "v32memread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32memwrite $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEMWRITEIGEN, "v32memwriteigen", "v32memwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem10 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM10IGEN, "v32mem10igen", "v32mem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem11 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM11IGEN, "v32mem11igen", "v32mem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem12 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM12IGEN, "v32mem12igen", "v32mem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem13 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM13IGEN, "v32mem13igen", "v32mem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem14 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM14IGEN, "v32mem14igen", "v32mem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem15 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM15IGEN, "v32mem15igen", "v32mem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem16 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM16IGEN, "v32mem16igen", "v32mem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem17 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM17IGEN, "v32mem17igen", "v32mem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem18 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM18IGEN, "v32mem18igen", "v32mem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem19 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM19IGEN, "v32mem19igen", "v32mem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem20 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM20IGEN, "v32mem20igen", "v32mem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem21 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM21IGEN, "v32mem21igen", "v32mem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem22 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM22IGEN, "v32mem22igen", "v32mem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem23 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM23IGEN, "v32mem23igen", "v32mem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32getacc $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32GETACCIGEN, "v32getaccigen", "v32getacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem25 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM25IGEN, "v32mem25igen", "v32mem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem26 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM26IGEN, "v32mem26igen", "v32mem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem27 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM27IGEN, "v32mem27igen", "v32mem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem28 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM28IGEN, "v32mem28igen", "v32mem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem29 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM29IGEN, "v32mem29igen", "v32mem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem30 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM30IGEN, "v32mem30igen", "v32mem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* v32mem31 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_V32MEM31IGEN, "v32mem31igen", "v32mem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkld $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKLDIGEN, "vunkldigen", "vunkld", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunklookupm $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKLOOKUPMIGEN, "vunklookupmigen", "vunklookupm", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunklookupml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKLOOKUPMLIGEN, "vunklookupmligen", "vunklookupml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem03 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM03IGEN, "vunkmem03igen", "vunkmem03", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkst $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKSTIGEN, "vunkstigen", "vunkst", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkindexwritem $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKINDEXWRITEMIGEN, "vunkindexwritemigen", "vunkindexwritem", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkindexwriteml $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKINDEXWRITEMLIGEN, "vunkindexwritemligen", "vunkindexwriteml", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem07 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM07IGEN, "vunkmem07igen", "vunkmem07", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmemread $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEMREADIGEN, "vunkmemreadigen", "vunkmemread", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmemwrite $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEMWRITEIGEN, "vunkmemwriteigen", "vunkmemwrite", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem10 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM10IGEN, "vunkmem10igen", "vunkmem10", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem11 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM11IGEN, "vunkmem11igen", "vunkmem11", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem12 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM12IGEN, "vunkmem12igen", "vunkmem12", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem13 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM13IGEN, "vunkmem13igen", "vunkmem13", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem14 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM14IGEN, "vunkmem14igen", "vunkmem14", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem15 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM15IGEN, "vunkmem15igen", "vunkmem15", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem16 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM16IGEN, "vunkmem16igen", "vunkmem16", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem17 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM17IGEN, "vunkmem17igen", "vunkmem17", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem18 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM18IGEN, "vunkmem18igen", "vunkmem18", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem19 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM19IGEN, "vunkmem19igen", "vunkmem19", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem20 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM20IGEN, "vunkmem20igen", "vunkmem20", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem21 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM21IGEN, "vunkmem21igen", "vunkmem21", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem22 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM22IGEN, "vunkmem22igen", "vunkmem22", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem23 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM23IGEN, "vunkmem23igen", "vunkmem23", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkgetacc $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKGETACCIGEN, "vunkgetaccigen", "vunkgetacc", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem25 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM25IGEN, "vunkmem25igen", "vunkmem25", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem26 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM26IGEN, "vunkmem26igen", "vunkmem26", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem27 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM27IGEN, "vunkmem27igen", "vunkmem27", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem28 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM28IGEN, "vunkmem28igen", "vunkmem28", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem29 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM29IGEN, "vunkmem29igen", "vunkmem29", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem30 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM30IGEN, "vunkmem30igen", "vunkmem30", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vunkmem31 $v80d32reg,$v80a32reg,$v80imm$v80mods_mem */
  {
    VC4_INSN_VUNKMEM31IGEN, "vunkmem31igen", "vunkmem31", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vec48 $operand10_0,$operand47_16 */
  {
    VC4_INSN_VEC48, "vec48", "vec48", 48,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
/* vec80 $operand10_0,$operand47_16,$operand79_48 */
  {
    VC4_INSN_VEC80, "vec80", "vec80", 80,
    { 0, { { { (1<<MACH_BASE), 0 } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void vc4_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of vc4_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  abort ();
}

/* Subroutine of vc4_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & vc4_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of vc4_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & vc4_cgen_ifld_table[0];
}

/* Subroutine of vc4_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & vc4_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of vc4_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & vc4_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of vc4_cgen_cpu_open to rebuild the tables.  */

static void
vc4_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & vc4_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & vc4_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      fprintf (stderr, "vc4_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%d' vs. `%d'\n",
		       cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
vc4_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (vc4_cgen_mach_table, name);

	    machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  fprintf (stderr, "vc4_cgen_cpu_open: unsupported argument `%d'\n",
		   arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      fprintf (stderr, "vc4_cgen_cpu_open: no endianness specified\n");
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = vc4_cgen_rebuild_tables;
  vc4_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;
  
  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to vc4_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
vc4_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return vc4_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
vc4_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }  

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}

