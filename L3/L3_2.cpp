__asm__ __volatile__("	.section	.rodata.str1.1,\"aMS\",@progbits,1\n"
".LC0:\n"
"	.string	\"%d\"\n"
".LC1:\n"
"	.string	\"%lld\\n\"\n"
".LC2:\n"
"	.string	\"%lld\"\n"
"	.text\n"
"	.p2align 4,,15\n"
".globl main\n"
"	.type	main, @function\n"
"main:\n"
".LFB120:\n"
"	.cfi_startproc\n"
"	.cfi_personality 0x3,__gxx_personality_v0\n"
"	pushq	%rbx\n"
"	.cfi_def_cfa_offset 16\n"
"	xorl	%eax, %eax\n"
"	movl	$.LC0, %edi\n"
"	subq	$16, %rsp\n"
"	.cfi_def_cfa_offset 32\n"
"	leaq	12(%rsp), %rsi\n"
"	.cfi_offset 3, -16\n"
"	call	scanf\n"
"	movl	12(%rsp), %eax\n"
"	testl	%eax, %eax\n"
"	je	.L2\n"
"	subl	$1, %eax\n"
"	movl	%eax, 12(%rsp)\n"
"	.p2align 4,,10\n"
"	.p2align 3\n"
".L6:\n"
"	xorl	%eax, %eax\n"
"	movq	%rsp, %rsi\n"
"	movl	$.LC2, %edi\n"
"	call	scanf\n"
"	cvtsi2sdq	(%rsp), %xmm1\n"
"	sqrtsd	%xmm1, %xmm0\n"
"	ucomisd	%xmm0, %xmm0\n"
"	jp	.L10\n"
"	je	.L3\n"
".L10:\n"
"	movapd	%xmm1, %xmm0\n"
"	call	sqrt\n"
".L3:\n"
"	cvttsd2siq	%xmm0, %rdi\n"
"	testq	%rdi, %rdi\n"
"	.p2align 4,,2\n"
"	jle	.L4\n"
"	movq	(%rsp), %r8\n"
"	movq	%rdi, %rsi\n"
"	movl	$1, %ecx\n"
"	.p2align 4,,10\n"
"	.p2align 3\n"
".L5:\n"
"	movq	%rcx, %rdx\n"
"	movq	%r8, %rax\n"
"	imulq	%rcx, %rdx\n"
"	subq	%rdx, %rax\n"
"	movq	%rax, %rdx\n"
"	sarq	$63, %rdx\n"
"	idivq	%rcx\n"
"	addq	$1, %rcx\n"
"	cmpq	%rcx, %rdi\n"
"	leaq	(%rsi,%rax,2), %rsi\n"
"	jge	.L5\n"
"	movq	%rsi, %rdi\n"
".L4:\n"
"	movq	%rdi, %rdx\n"
"	xorl	%eax, %eax\n"
"	movl	$.LC1, %esi\n"
"	movl	$1, %edi\n"
"	call	__printf_chk\n"
"	movl	12(%rsp), %eax\n"
"	testl	%eax, %eax\n"
"	je	.L2\n"
"	subl	$1, %eax\n"
"	movl	%eax, 12(%rsp)\n"
"	jmp	.L6\n"
".L2:\n"
"	xorl	%eax, %eax\n"
"	addq	$16, %rsp\n"
"	popq	%rbx\n"
"	ret\n"
"	.cfi_endproc\n"
".LFE120:\n"
"	.size	main, .-main\n"
);