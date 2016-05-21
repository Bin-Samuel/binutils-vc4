#objdump: -d
#name: Pushing and Popping

.*: .*

Disassembly of section \.text:

00000000 <\.text>:
   0:	a0 02       	push r6
   2:	20 02       	pop r6
   4:	a0 03       	push r6,lr
   6:	20 03       	pop r6,pc
   8:	80 02       	push r0
   a:	c0 02       	push r16
   c:	e0 02       	push r24
   e:	00 02       	pop r0
  10:	40 02       	pop r16
  12:	60 02       	pop r24
  14:	80 03       	push r0,lr
  16:	c0 03       	push r16,lr
  18:	e0 03       	push r24,lr
  1a:	00 03       	pop r0,pc
  1c:	40 03       	pop r16,pc
  1e:	60 03       	pop r24,pc
  20:	bf 02       	push r6-r5
  22:	a0 02       	push r6
  24:	a1 02       	push r6-r7
  26:	ba 02       	push r6-r0
  28:	b9 02       	push r6-pc
  2a:	bf 03       	push r6-r5,lr
  2c:	a0 03       	push r6,lr
  2e:	a1 03       	push r6-r7,lr
  30:	ba 03       	push r6-r0,lr
  32:	b9 03       	push r6-pc,lr
  34:	3f 02       	pop r6-r5
  36:	20 02       	pop r6
  38:	21 02       	pop r6-r7
  3a:	3a 02       	pop r6-r0
  3c:	39 02       	pop r6-pc
  3e:	3f 03       	pop r6-r5,pc
  40:	20 03       	pop r6,pc
  42:	21 03       	pop r6-r7,pc
  44:	3a 03       	pop r6-r0,pc
  46:	39 03       	pop r6-pc,pc
  48:	85 02       	push r0-r5
  4a:	86 02       	push r0-r6
  4c:	87 02       	push r0-r7
  4e:	80 02       	push r0
  50:	9f 02       	push r0-pc
  52:	85 03       	push r0-r5,lr
  54:	86 03       	push r0-r6,lr
  56:	87 03       	push r0-r7,lr
  58:	80 03       	push r0,lr
  5a:	9f 03       	push r0-pc,lr
  5c:	05 02       	pop r0-r5
  5e:	06 02       	pop r0-r6
  60:	07 02       	pop r0-r7
  62:	00 02       	pop r0
  64:	1f 02       	pop r0-pc
  66:	05 03       	pop r0-r5,pc
  68:	06 03       	pop r0-r6,pc
  6a:	07 03       	pop r0-r7,pc
  6c:	00 03       	pop r0,pc
  6e:	1f 03       	pop r0-pc,pc
  70:	d5 02       	push r16-r5
  72:	d6 02       	push r16-r6
  74:	d7 02       	push r16-r7
  76:	d0 02       	push r16-r0
  78:	cf 02       	push r16-pc
  7a:	d5 03       	push r16-r5,lr
  7c:	d6 03       	push r16-r6,lr
  7e:	d7 03       	push r16-r7,lr
  80:	d0 03       	push r16-r0,lr
  82:	cf 03       	push r16-pc,lr
  84:	55 02       	pop r16-r5
  86:	56 02       	pop r16-r6
  88:	57 02       	pop r16-r7
  8a:	50 02       	pop r16-r0
  8c:	4f 02       	pop r16-pc
  8e:	55 03       	pop r16-r5,pc
  90:	56 03       	pop r16-r6,pc
  92:	57 03       	pop r16-r7,pc
  94:	50 03       	pop r16-r0,pc
  96:	4f 03       	pop r16-pc,pc
  98:	ed 02       	push r24-r5
  9a:	ee 02       	push r24-r6
  9c:	ef 02       	push r24-r7
  9e:	e8 02       	push r24-r0
  a0:	e7 02       	push r24-pc
  a2:	ed 03       	push r24-r5,lr
  a4:	ee 03       	push r24-r6,lr
  a6:	ef 03       	push lr
  a8:	e8 03       	push r24-r0,lr
  aa:	e7 03       	push r24-pc,lr
  ac:	6d 02       	pop r24-r5
  ae:	6e 02       	pop r24-r6
  b0:	6f 02       	pop r24-r7
  b2:	68 02       	pop r24-r0
  b4:	67 02       	pop r24-pc
  b6:	6d 03       	pop r24-r5,pc
  b8:	6e 03       	pop r24-r6,pc
  ba:	6f 03       	pop pc
  bc:	68 03       	pop r24-r0,pc
  be:	67 03       	pop r24-pc,pc
  c0:	21 a4 00 cf 	push r1
  c4:	23 a4 00 cf 	push r3
  c8:	02 a5 00 cf 	pop r2
  cc:	07 a5 00 cf 	pop r7
