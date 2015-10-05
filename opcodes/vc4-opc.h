/* Instruction opcode header for vc4.

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

#ifndef VC4_OPC_H
#define VC4_OPC_H

/* Enum declaration for vc4 instruction types.  */
typedef enum cgen_insn_type {
  VC4_INSN_INVALID, VC4_INSN_HALT, VC4_INSN_NOP, VC4_INSN_WAIT
 , VC4_INSN_USER, VC4_INSN_EI, VC4_INSN_DI, VC4_INSN_CLR
 , VC4_INSN_INC, VC4_INSN_CHG, VC4_INSN_DEC, VC4_INSN_RTI
 , VC4_INSN_ADD16, VC4_INSN_ADD32, VC4_INSN_ADD48I
} CGEN_INSN_TYPE;

/* Index of `invalid' insn place holder.  */
#define CGEN_INSN_INVALID VC4_INSN_INVALID

/* Total number of insns in table.  */
#define MAX_INSNS ((int) VC4_INSN_ADD48I + 1)

/* This struct records data prior to insertion or after extraction.  */
struct cgen_fields
{
  int length;
  long f_nil;
  long f_anyof;
  long f_oplen;
  long f_op15_13;
  long f_op15_11;
  long f_op11_8;
  long f_op11_10;
  long f_op10_7;
  long f_alu16op;
  long f_op9_5;
  long f_op7_4;
  long f_op7_5;
  long f_op4;
  long f_op4_0;
  long f_op3_0;
  long f_op20_16;
  long f_op22_21;
  long f_op26_23;
  long f_op31_27;
  long f_op47_16;
};

#define CGEN_INIT_PARSE(od) \
{\
}
#define CGEN_INIT_INSERT(od) \
{\
}
#define CGEN_INIT_EXTRACT(od) \
{\
}
#define CGEN_INIT_PRINT(od) \
{\
}


#endif /* VC4_OPC_H */
