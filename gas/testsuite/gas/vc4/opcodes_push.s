

	.text

	push	r6
	pop	r6
	push	r6, lr
	pop	r6, pc
	push	r0
	push	r16
	push	gp
	pop	r0
	pop	r16
	pop	gp
	push	r0, lr
	push	r16, lr
	push	gp, lr
	pop	r0, pc
	pop	r16, pc
	pop	gp, pc
	
	push	r6-r5
	push	r6-r6
	push	r6-r7
	push	r6-r0
	push	r6-pc
	push	r6-r5, lr
	push	r6-r6, lr
	push	r6-r7, lr
	push	r6-r0, lr
	push	r6-pc, lr
	
	pop	r6-r5
	pop	r6-r6
	pop	r6-r7
	pop	r6-r0
	pop	r6-pc
	pop	r6-r5, pc
	pop	r6-r6, pc
	pop	r6-r7, pc
	pop	r6-r0, pc
	pop	r6-pc, pc

	push	r0-r5
	push	r0-r6
	push	r0-r7
	push	r0-r0
	push	r0-pc
	push	r0-r5, lr
	push	r0-r6, lr
	push	r0-r7, lr
	push	r0-r0, lr
	push	r0-pc, lr
	
	pop	r0-r5
	pop	r0-r6
	pop	r0-r7
	pop	r0-r0
	pop	r0-pc
	pop	r0-r5, pc
	pop	r0-r6, pc
	pop	r0-r7, pc
	pop	r0-r0, pc
	pop	r0-pc, pc

	push	r16-r5
	push	r16-r6
	push	r16-r7
	push	r16-r0
	push	r16-pc
	push	r16-r5, lr
	push	r16-r6, lr
	push	r16-r7, lr
	push	r16-r0, lr
	push	r16-pc, lr
	
	pop	r16-r5
	pop	r16-r6
	pop	r16-r7
	pop	r16-r0
	pop	r16-pc
	pop	r16-r5, pc
	pop	r16-r6, pc
	pop	r16-r7, pc
	pop	r16-r0, pc
	pop	r16-pc, pc

	push	gp-r5
	push	gp-r6
	push	gp-r7
	push	gp-r0
	push	gp-pc
	push	gp-r5, lr
	push	gp-r6, lr
	push	gp-r7, lr
	push	gp-r0, lr
	push	gp-pc, lr
	
	pop	gp-r5
	pop	gp-r6
	pop	gp-r7
	pop	gp-r0
	pop	gp-pc
	pop	gp-r5, pc
	pop	gp-r6, pc
	pop	gp-r7, pc
	pop	gp-r0, pc
	pop	gp-pc, pc

	# These are really "st r1,(r25)--", "ld r1,(r25)++" (and are two words each!)
	push	r1
	push	r3
	pop	r2
	pop	r7

