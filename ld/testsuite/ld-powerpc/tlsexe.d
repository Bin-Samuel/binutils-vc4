#source: tls.s
#as: -a64
#ld: tmpdir/libtlslib.so
#objdump: -dr
#target: powerpc64*-*-*

.*

Disassembly of section \.text:

.* <00000010\.plt_call\.__tls_get_addr(|_opt)\+0>:
.*	(e9 63 00 00|00 00 63 e9) 	ld      r11,0\(r3\)
.*	(e9 83 00 08|08 00 83 e9) 	ld      r12,8\(r3\)
.*	(7c 60 1b 78|78 1b 60 7c) 	mr      r0,r3
.*	(2c 2b 00 00|00 00 2b 2c) 	cmpdi   r11,0
.*	(7c 6c 6a 14|14 6a 6c 7c) 	add     r3,r12,r13
.*	(4d 82 00 20|20 00 82 4d) 	beqlr   
.*	(7c 03 03 78|78 03 03 7c) 	mr      r3,r0
.*	(7d 68 02 a6|a6 02 68 7d) 	mflr    r11
.*	(f9 61 00 20|20 00 61 f9) 	std     r11,32\(r1\)
.*	(f8 41 00 28|28 00 41 f8) 	std     r2,40\(r1\)
.*	(e9 62 80 48|48 80 62 e9) 	ld      r11,-32696\(r2\)
.*	(7d 69 03 a6|a6 03 69 7d) 	mtctr   r11
.*	(e8 42 80 50|50 80 42 e8) 	ld      r2,-32688\(r2\)
.*	(4e 80 04 21|21 04 80 4e) 	bctrl
.*	(e9 61 00 20|20 00 61 e9) 	ld      r11,32\(r1\)
.*	(e8 41 00 28|28 00 41 e8) 	ld      r2,40\(r1\)
.*	(7d 68 03 a6|a6 03 68 7d) 	mtlr    r11
.*	(4e 80 00 20|20 00 80 4e) 	blr

.* <_start>:
.*	(e8 62 80 10|10 80 62 e8) 	ld      r3,-32752\(r2\)
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(7c 63 6a 14|14 6a 63 7c) 	add     r3,r3,r13
.*	(38 62 80 18|18 80 62 38) 	addi    r3,r2,-32744
.*	(4b ff ff a9|a9 ff ff 4b) 	bl      .*
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(3c 6d 00 00|00 00 6d 3c) 	addis   r3,r13,0
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(38 63 90 38|38 90 63 38) 	addi    r3,r3,-28616
.*	(3c 6d 00 00|00 00 6d 3c) 	addis   r3,r13,0
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(38 63 10 00|00 10 63 38) 	addi    r3,r3,4096
.*	(39 23 80 40|40 80 23 39) 	addi    r9,r3,-32704
.*	(3d 23 00 00|00 00 23 3d) 	addis   r9,r3,0
.*	(81 49 80 48|48 80 49 81) 	lwz     r10,-32696\(r9\)
.*	(e9 22 80 28|28 80 22 e9) 	ld      r9,-32728\(r2\)
.*	(7d 49 18 2a|2a 18 49 7d) 	ldx     r10,r9,r3
.*	(3d 2d 00 00|00 00 2d 3d) 	addis   r9,r13,0
.*	(a1 49 90 58|58 90 49 a1) 	lhz     r10,-28584\(r9\)
.*	(89 4d 90 60|60 90 4d 89) 	lbz     r10,-28576\(r13\)
.*	(3d 2d 00 00|00 00 2d 3d) 	addis   r9,r13,0
.*	(99 49 90 68|68 90 49 99) 	stb     r10,-28568\(r9\)
.*	(3c 6d 00 00|00 00 6d 3c) 	addis   r3,r13,0
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(38 63 90 00|00 90 63 38) 	addi    r3,r3,-28672
.*	(3c 6d 00 00|00 00 6d 3c) 	addis   r3,r13,0
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(38 63 10 00|00 10 63 38) 	addi    r3,r3,4096
.*	(f9 43 80 08|08 80 43 f9) 	std     r10,-32760\(r3\)
.*	(3d 23 00 00|00 00 23 3d) 	addis   r9,r3,0
.*	(91 49 80 10|10 80 49 91) 	stw     r10,-32752\(r9\)
.*	(e9 22 80 08|08 80 22 e9) 	ld      r9,-32760\(r2\)
.*	(7d 49 19 2a|2a 19 49 7d) 	stdx    r10,r9,r3
.*	(3d 2d 00 00|00 00 2d 3d) 	addis   r9,r13,0
.*	(b1 49 90 58|58 90 49 b1) 	sth     r10,-28584\(r9\)
.*	(e9 4d 90 2a|2a 90 4d e9) 	lwa     r10,-28632\(r13\)
.*	(3d 2d 00 00|00 00 2d 3d) 	addis   r9,r13,0
.*	(a9 49 90 30|30 90 49 a9) 	lha     r10,-28624\(r9\)
.*	(00 00 00 00|00 02 01 00) .*
.*	(00 01 02 00|00 00 00 00) .*
.* <__glink_PLTresolve>:
.*	(7d 88 02 a6|a6 02 88 7d) 	mflr    r12
.*	(42 9f 00 05|05 00 9f 42) 	bcl-    20,4\*cr7\+so,.*
.*	(7d 68 02 a6|a6 02 68 7d) 	mflr    r11
.*	(e8 4b ff f0|f0 ff 4b e8) 	ld      r2,-16\(r11\)
.*	(7d 88 03 a6|a6 03 88 7d) 	mtlr    r12
.*	(7d 82 5a 14|14 5a 82 7d) 	add     r12,r2,r11
.*	(e9 6c 00 00|00 00 6c e9) 	ld      r11,0\(r12\)
.*	(e8 4c 00 08|08 00 4c e8) 	ld      r2,8\(r12\)
.*	(7d 69 03 a6|a6 03 69 7d) 	mtctr   r11
.*	(e9 6c 00 10|10 00 6c e9) 	ld      r11,16\(r12\)
.*	(4e 80 04 20|20 04 80 4e) 	bctr
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(60 00 00 00|00 00 00 60) 	nop
.*	(38 00 00 00|00 00 00 38) 	li      r0,0
.*	(4b ff ff c4|c4 ff ff 4b) 	b       .*
