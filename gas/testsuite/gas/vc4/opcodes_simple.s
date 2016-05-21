	.text

	bkpt
	nop
	sleep
	user
	ei
	di
	cbclr
	cbinc
	cbchg
	cbdec
	rti

	swi	r0
	swi	r13
	swi	pc
	
	rts

	b	r0
	b	r19
	b	pc

	bl	r0
	bl	r18
	bl	pc

	tbb	r2
	tbh	r3

	mov	r5, cpuid

