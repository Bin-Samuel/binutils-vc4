/* CPU data header for vc4.

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

#ifndef VC4_CPU_H
#define VC4_CPU_H

#define CGEN_ARCH vc4

/* Given symbol S, return vc4_cgen_<S>.  */
#define CGEN_SYM(s) vc4##_cgen_##s


/* Selected cpu families.  */
#define HAVE_CPU_VIDEOCORE4

#define CGEN_INSN_LSB0_P 1

/* Minimum size of any insn (in bytes).  */
#define CGEN_MIN_INSN_SIZE 2

/* Maximum size of any insn (in bytes).  */
#define CGEN_MAX_INSN_SIZE 4

#define CGEN_INT_INSN_P 1

/* Maximum number of syntax elements in an instruction.  */
#define CGEN_ACTUAL_MAX_SYNTAX_ELEMENTS 12

/* CGEN_MNEMONIC_OPERANDS is defined if mnemonics have operands.
   e.g. In "b,a foo" the ",a" is an operand.  If mnemonics have operands
   we can't hash on everything up to the space.  */
#define CGEN_MNEMONIC_OPERANDS

/* Maximum number of fields in an instruction.  */
#define CGEN_ACTUAL_MAX_IFMT_OPERANDS 8

/* Enums.  */

/* Enum declaration for length field.  */
typedef enum insn_oplen {
  OPLEN_0, OPLEN_1, OPLEN_2, OPLEN_3
 , OPLEN_4, OPLEN_5, OPLEN_6, OPLEN_7
 , OPLEN_8, OPLEN_9, OPLEN_10, OPLEN_11
 , OPLEN_12, OPLEN_13, OPLEN_14, OPLEN_15
} INSN_OPLEN;

/* Enum declaration for insn bits 15-13.  */
typedef enum insn_op15_13 {
  OP15_13_0, OP15_13_1, OP15_13_2, OP15_13_3
 , OP15_13_4, OP15_13_5, OP15_13_6, OP15_13_7
} INSN_OP15_13;

/* Enum declaration for insn alu16 ops.  */
typedef enum insn_alu16op {
  ALU16OP_MOV, ALU16OP_CMN, ALU16OP_ADD, ALU16OP_BIC
 , ALU16OP_MUL, ALU16OP_EOR, ALU16OP_SUB, ALU16OP_AND
 , ALU16OP_NOT, ALU16OP_ROR, ALU16OP_CMP, ALU16OP_RSUB
 , ALU16OP_BTST, ALU16OP_OR, ALU16OP_BMASK, ALU16OP_MAX
 , ALU16OP_BSET, ALU16OP_MIN, ALU16OP_BCLR, ALU16OP_ADDS2
 , ALU16OP_BCHG, ALU16OP_ADDS4, ALU16OP_ADDS8, ALU16OP_ADDS16
 , ALU16OP_SIGNEXT, ALU16OP_NEG, ALU16OP_LSR, ALU16OP_COUNT
 , ALU16OP_LSL, ALU16OP_BREV, ALU16OP_ASR, ALU16OP_ABS
} INSN_ALU16OP;

/* Enum declaration for insn alu32 ops.  */
typedef enum insn_alu32op {
  ALU32OP_MOV, ALU32OP_CMN, ALU32OP_ADD, ALU32OP_BIC
 , ALU32OP_MUL, ALU32OP_EOR, ALU32OP_SUB, ALU32OP_AND
 , ALU32OP_NOT, ALU32OP_ROR, ALU32OP_CMP, ALU32OP_RSUB
 , ALU32OP_BTST, ALU32OP_OR, ALU32OP_BMASK, ALU32OP_MAX
 , ALU32OP_BSET, ALU32OP_MIN, ALU32OP_BCLR, ALU32OP_ADDS2
 , ALU32OP_BCHG, ALU32OP_ADDS4, ALU32OP_ADDS8, ALU32OP_ADDS16
 , ALU32OP_SIGNEXT, ALU32OP_NEG, ALU32OP_LSR, ALU32OP_COUNT
 , ALU32OP_LSL, ALU32OP_BREV, ALU32OP_ASR, ALU32OP_ABS
} INSN_ALU32OP;

/* Enum declaration for insn bits 11-8.  */
typedef enum insn_op11_8 {
  OP11_8_0, OP11_8_1, OP11_8_2, OP11_8_3
 , OP11_8_4, OP11_8_5, OP11_8_6, OP11_8_7
 , OP11_8_8, OP11_8_9, OP11_8_10, OP11_8_11
 , OP11_8_12, OP11_8_13, OP11_8_14, OP11_8_15
} INSN_OP11_8;

/* Enum declaration for insn bits 11-10.  */
typedef enum insn_op11_10 {
  OP11_10_0, OP11_10_1, OP11_10_2, OP11_10_3
} INSN_OP11_10;

/* Enum declaration for insn bits 7-4.  */
typedef enum insn_op7_4 {
  OP4_7_0, OP4_7_1, OP4_7_2, OP4_7_3
 , OP4_7_4, OP4_7_5, OP4_7_6, OP4_7_7
 , OP4_7_8, OP4_7_9, OP4_7_10, OP4_7_11
 , OP4_7_12, OP4_7_13, OP4_7_14, OP4_7_15
} INSN_OP7_4;

/* Enum declaration for insn bits 7-5.  */
typedef enum insn_op7_5 {
  OP7_5_0, OP7_5_1, OP7_5_2, OP7_5_3
 , OP7_5_4, OP7_5_5, OP7_5_6, OP7_5_7
} INSN_OP7_5;

/* Enum declaration for insn bit 4.  */
typedef enum insn_op4 {
  OP4_0, OP4_1
} INSN_OP4;

/* Enum declaration for insn bits 3-0.  */
typedef enum insn_op3_0 {
  OP3_0_0, OP3_0_1, OP3_0_2, OP3_0_3
 , OP3_0_4, OP3_0_5, OP3_0_6, OP3_0_7
 , OP3_0_8, OP3_0_9, OP3_0_10, OP3_0_11
 , OP3_0_12, OP3_0_13, OP3_0_14, OP3_0_15
} INSN_OP3_0;

/* Enum declaration for insn bits 20-16.  */
typedef enum insn_op20_16 {
  OP16_20_0, OP16_20_1, OP16_20_2, OP16_20_3
 , OP16_20_4, OP16_20_5, OP16_20_6, OP16_20_7
 , OP16_20_8, OP16_20_9, OP16_20_10, OP16_20_11
 , OP16_20_12, OP16_20_13, OP16_20_14, OP16_20_15
 , OP16_20_16, OP16_20_17, OP16_20_18, OP16_20_19
 , OP16_20_20, OP16_20_21, OP16_20_22, OP16_20_23
 , OP16_20_24, OP16_20_25, OP16_20_26, OP16_20_27
 , OP16_20_28, OP16_20_29, OP16_20_30, OP16_20_31
} INSN_OP20_16;

/* Enum declaration for insn bits 22-21.  */
typedef enum insn_op22_21 {
  OP22_21_0, OP22_21_1, OP22_21_2, OP22_21_3
} INSN_OP22_21;

/* Enum declaration for insn bits 26-23.  */
typedef enum insn_op26_23 {
  OP26_23_0, OP26_23_1, OP26_23_2, OP26_23_3
 , OP26_23_4, OP26_23_5, OP26_23_6, OP26_23_7
 , OP26_23_8, OP26_23_9, OP26_23_10, OP26_23_11
 , OP26_23_12, OP26_23_13, OP26_23_14, OP26_23_15
} INSN_OP26_23;

/* Enum declaration for insn bits 31-27.  */
typedef enum insn_op31_27 {
  OP31_27_0, OP31_27_1, OP31_27_2, OP31_27_3
 , OP31_27_4, OP31_27_5, OP31_27_6, OP31_27_7
 , OP31_27_8, OP31_27_9, OP31_27_10, OP31_27_11
 , OP31_27_12, OP31_27_13, OP31_27_14, OP31_27_15
 , OP31_27_16, OP31_27_17, OP31_27_18, OP31_27_19
 , OP31_27_20, OP31_27_21, OP31_27_22, OP31_27_23
 , OP31_27_24, OP31_27_25, OP31_27_26, OP31_27_27
 , OP31_27_28, OP31_27_29, OP31_27_30, OP31_27_31
} INSN_OP31_27;

/* Attributes.  */

/* Enum declaration for machine type selection.  */
typedef enum mach_attr {
  MACH_BASE, MACH_VC4, MACH_MAX
} MACH_ATTR;

/* Enum declaration for instruction set selection.  */
typedef enum isa_attr {
  ISA_VC4, ISA_MAX
} ISA_ATTR;

/* Number of architecture variants.  */
#define MAX_ISAS  1
#define MAX_MACHS ((int) MACH_MAX)

/* Ifield support.  */

/* Ifield attribute indices.  */

/* Enum declaration for cgen_ifld attrs.  */
typedef enum cgen_ifld_attr {
  CGEN_IFLD_VIRTUAL, CGEN_IFLD_PCREL_ADDR, CGEN_IFLD_ABS_ADDR, CGEN_IFLD_RESERVED
 , CGEN_IFLD_SIGN_OPT, CGEN_IFLD_SIGNED, CGEN_IFLD_END_BOOLS, CGEN_IFLD_START_NBOOLS = 31
 , CGEN_IFLD_MACH, CGEN_IFLD_END_NBOOLS
} CGEN_IFLD_ATTR;

/* Number of non-boolean elements in cgen_ifld_attr.  */
#define CGEN_IFLD_NBOOL_ATTRS (CGEN_IFLD_END_NBOOLS - CGEN_IFLD_START_NBOOLS - 1)

/* cgen_ifld attribute accessor macros.  */
#define CGEN_ATTR_CGEN_IFLD_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_IFLD_MACH-CGEN_IFLD_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_IFLD_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_IFLD_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_IFLD_RESERVED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_RESERVED)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_IFLD_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_IFLD_SIGNED)) != 0)

/* Enum declaration for vc4 ifield types.  */
typedef enum ifield_type {
  VC4_F_NIL, VC4_F_ANYOF, VC4_F_OPLEN, VC4_F_OP15_13
 , VC4_F_OP11_8, VC4_F_OP11_10, VC4_F_ALU16OP, VC4_F_ALU32OP
 , VC4_F_OP7_4, VC4_F_OP7_5, VC4_F_OP4, VC4_F_OP4_0
 , VC4_F_OP3_0, VC4_F_OP20_16, VC4_F_OP22_21, VC4_F_OP26_23
 , VC4_F_OP31_27, VC4_F_MAX
} IFIELD_TYPE;

#define MAX_IFLD ((int) VC4_F_MAX)

/* Hardware attribute indices.  */

/* Enum declaration for cgen_hw attrs.  */
typedef enum cgen_hw_attr {
  CGEN_HW_VIRTUAL, CGEN_HW_CACHE_ADDR, CGEN_HW_PC, CGEN_HW_PROFILE
 , CGEN_HW_END_BOOLS, CGEN_HW_START_NBOOLS = 31, CGEN_HW_MACH, CGEN_HW_END_NBOOLS
} CGEN_HW_ATTR;

/* Number of non-boolean elements in cgen_hw_attr.  */
#define CGEN_HW_NBOOL_ATTRS (CGEN_HW_END_NBOOLS - CGEN_HW_START_NBOOLS - 1)

/* cgen_hw attribute accessor macros.  */
#define CGEN_ATTR_CGEN_HW_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_HW_MACH-CGEN_HW_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_HW_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_HW_CACHE_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_CACHE_ADDR)) != 0)
#define CGEN_ATTR_CGEN_HW_PC_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PC)) != 0)
#define CGEN_ATTR_CGEN_HW_PROFILE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_HW_PROFILE)) != 0)

/* Enum declaration for vc4 hardware types.  */
typedef enum cgen_hw_type {
  HW_H_MEMORY, HW_H_SINT, HW_H_UINT, HW_H_ADDR
 , HW_H_IADDR, HW_H_REG, HW_H_FASTREG, HW_H_COND
 , HW_H_ACCSZ, HW_H_PC, HW_MAX
} CGEN_HW_TYPE;

#define MAX_HW ((int) HW_MAX)

/* Operand attribute indices.  */

/* Enum declaration for cgen_operand attrs.  */
typedef enum cgen_operand_attr {
  CGEN_OPERAND_VIRTUAL, CGEN_OPERAND_PCREL_ADDR, CGEN_OPERAND_ABS_ADDR, CGEN_OPERAND_SIGN_OPT
 , CGEN_OPERAND_SIGNED, CGEN_OPERAND_NEGATIVE, CGEN_OPERAND_RELAX, CGEN_OPERAND_SEM_ONLY
 , CGEN_OPERAND_END_BOOLS, CGEN_OPERAND_START_NBOOLS = 31, CGEN_OPERAND_MACH, CGEN_OPERAND_END_NBOOLS
} CGEN_OPERAND_ATTR;

/* Number of non-boolean elements in cgen_operand_attr.  */
#define CGEN_OPERAND_NBOOL_ATTRS (CGEN_OPERAND_END_NBOOLS - CGEN_OPERAND_START_NBOOLS - 1)

/* cgen_operand attribute accessor macros.  */
#define CGEN_ATTR_CGEN_OPERAND_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_OPERAND_MACH-CGEN_OPERAND_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_OPERAND_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_PCREL_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_PCREL_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_ABS_ADDR_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_ABS_ADDR)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGN_OPT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGN_OPT)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SIGNED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SIGNED)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_NEGATIVE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_NEGATIVE)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_RELAX_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_RELAX)) != 0)
#define CGEN_ATTR_CGEN_OPERAND_SEM_ONLY_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_OPERAND_SEM_ONLY)) != 0)

/* Enum declaration for vc4 operand types.  */
typedef enum cgen_operand_type {
  VC4_OPERAND_PC, VC4_OPERAND_ALU16SREG, VC4_OPERAND_ALU16DREG, VC4_OPERAND_ALU32DREG
 , VC4_OPERAND_ALU32BREG, VC4_OPERAND_ALU32AREG, VC4_OPERAND_ALU32COND, VC4_OPERAND_MAX
} CGEN_OPERAND_TYPE;

/* Number of operands types.  */
#define MAX_OPERANDS 7

/* Maximum number of operands referenced by any insn.  */
#define MAX_OPERAND_INSTANCES 8

/* Insn attribute indices.  */

/* Enum declaration for cgen_insn attrs.  */
typedef enum cgen_insn_attr {
  CGEN_INSN_ALIAS, CGEN_INSN_VIRTUAL, CGEN_INSN_UNCOND_CTI, CGEN_INSN_COND_CTI
 , CGEN_INSN_SKIP_CTI, CGEN_INSN_DELAY_SLOT, CGEN_INSN_RELAXABLE, CGEN_INSN_RELAXED
 , CGEN_INSN_NO_DIS, CGEN_INSN_PBB, CGEN_INSN_END_BOOLS, CGEN_INSN_START_NBOOLS = 31
 , CGEN_INSN_MACH, CGEN_INSN_END_NBOOLS
} CGEN_INSN_ATTR;

/* Number of non-boolean elements in cgen_insn_attr.  */
#define CGEN_INSN_NBOOL_ATTRS (CGEN_INSN_END_NBOOLS - CGEN_INSN_START_NBOOLS - 1)

/* cgen_insn attribute accessor macros.  */
#define CGEN_ATTR_CGEN_INSN_MACH_VALUE(attrs) ((attrs)->nonbool[CGEN_INSN_MACH-CGEN_INSN_START_NBOOLS-1].nonbitset)
#define CGEN_ATTR_CGEN_INSN_ALIAS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_ALIAS)) != 0)
#define CGEN_ATTR_CGEN_INSN_VIRTUAL_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_VIRTUAL)) != 0)
#define CGEN_ATTR_CGEN_INSN_UNCOND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_UNCOND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_COND_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_COND_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_SKIP_CTI_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_SKIP_CTI)) != 0)
#define CGEN_ATTR_CGEN_INSN_DELAY_SLOT_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_DELAY_SLOT)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXABLE_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXABLE)) != 0)
#define CGEN_ATTR_CGEN_INSN_RELAXED_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_RELAXED)) != 0)
#define CGEN_ATTR_CGEN_INSN_NO_DIS_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_NO_DIS)) != 0)
#define CGEN_ATTR_CGEN_INSN_PBB_VALUE(attrs) (((attrs)->bool_ & (1 << CGEN_INSN_PBB)) != 0)

/* cgen.h uses things we just defined.  */
#include "opcode/cgen.h"

extern const struct cgen_ifld vc4_cgen_ifld_table[];

/* Attributes.  */
extern const CGEN_ATTR_TABLE vc4_cgen_hardware_attr_table[];
extern const CGEN_ATTR_TABLE vc4_cgen_ifield_attr_table[];
extern const CGEN_ATTR_TABLE vc4_cgen_operand_attr_table[];
extern const CGEN_ATTR_TABLE vc4_cgen_insn_attr_table[];

/* Hardware decls.  */

extern CGEN_KEYWORD vc4_cgen_opval_h_reg;
extern CGEN_KEYWORD vc4_cgen_opval_h_fastreg;
extern CGEN_KEYWORD vc4_cgen_opval_h_cond;
extern CGEN_KEYWORD vc4_cgen_opval_h_accsz;

extern const CGEN_HW_ENTRY vc4_cgen_hw_table[];



#endif /* VC4_CPU_H */
