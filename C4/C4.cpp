__asm__ __volatile__("	.section	.rodata.str1.1,\"aMS\",@progbits,1\n\t"
".LC0:\n\t"
"	.string	\"%d\\n\"\n\t"
".LC1:\n\t"
"	.string	\"%d %d\\n\"\n\t"
".LC2:\n\t"
"	.string	\"%lld \"\n\t"
".LC3:\n\t"
"	.string	\"%lld %lld\\n\"\n\t"
".LC4:\n\t"
"	.string	\"%lld\\n\"\n\t"
"	.text\n\t"
"	.p2align 4,,15\n\t"
".globl main\n\t"
"	.type	main, @function\n\t"
"main:\n\t"
".LFB42:\n\t"
"	leal	4(%esp), %ecx\n\t"
".LCFI0:\n\t"
"	andl	$-16, %esp\n\t"
"	pushl	-4(%ecx)\n\t"
".LCFI1:\n\t"
"	pushl	%ebp\n\t"
".LCFI2:\n\t"
"	pushl	%edi\n\t"
".LCFI3:\n\t"
"	pushl	%esi\n\t"
".LCFI4:\n\t"
"	pushl	%ebx\n\t"
".LCFI5:\n\t"
"	pushl	%ecx\n\t"
".LCFI6:\n\t"
"	subl	$248, %esp\n\t"
".LCFI7:\n\t"
"	leal	244(%esp), %eax\n\t"
"	movl	%eax, 4(%esp)\n\t"
"	movl	$.LC0, (%esp)\n\t"
"	call	scanf\n\t"
".L73:\n\t"
"	movl	244(%esp), %eax\n\t"
"	testl	%eax, %eax\n\t"
"	je	.L76\n\t"
".L52:\n\t"
"	subl	$1, %eax\n\t"
"	movl	%eax, 244(%esp)\n\t"
"	leal	240(%esp), %eax\n\t"
"	movl	%eax, 8(%esp)\n\t"
"	movl	$n, 4(%esp)\n\t"
"	movl	$.LC1, (%esp)\n\t"
"	call	scanf\n\t"
"	movl	n, %edx\n\t"
"	cmpl	$1, %edx\n\t"
"	jle	.L3\n\t"
"	movl	$1, %eax\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L4:\n\t"
"	addl	%eax, %eax\n\t"
"	cmpl	%eax, %edx\n\t"
"	jg	.L4\n\t"
"	leal	(%eax,%eax), %ebx\n\t"
"	movl	%eax, %edx\n\t"
"	movl	%eax, s\n\t"
"	movl	%ebx, %eax\n\t"
"	sarl	$31, %edx\n\t"
"	sall	$5, %eax\n\t"
"	movl	%edx, s+4\n\t"
"	movl	%eax, (%esp)\n\t"
"	call	_Znaj\n\t"
"	movl	%eax, %edx\n\t"
"	leal	-1(%ebx), %eax\n\t"
"	cmpl	$-1, %eax\n\t"
"	je	.L5\n\t"
".L6:\n\t"
"	movl	%edx, %ecx\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L7:\n\t"
"	subl	$1, %eax\n\t"
"	movl	$0, (%ecx)\n\t"
"	movl	$0, 4(%ecx)\n\t"
"	movl	$0, 8(%ecx)\n\t"
"	movl	$0, 12(%ecx)\n\t"
"	movl	$0, 16(%ecx)\n\t"
"	movl	$0, 20(%ecx)\n\t"
"	movl	$0, 24(%ecx)\n\t"
"	movl	$0, 28(%ecx)\n\t"
"	addl	$32, %ecx\n\t"
"	cmpl	$-1, %eax\n\t"
"	jne	.L7\n\t"
".L5:\n\t"
"	movl	n, %eax\n\t"
"	movl	s, %ecx\n\t"
"	movl	%edx, tree\n\t"
"	movl	s+4, %ebx\n\t"
"	movl	%eax, %edx\n\t"
"	sarl	$31, %edx\n\t"
"	movl	%eax, 24(%esp)\n\t"
"	addl	%ecx, 24(%esp)\n\t"
"	movl	%edx, 28(%esp)\n\t"
"	movl	%ecx, %edx\n\t"
"	adcl	%ebx, 28(%esp)\n\t"
"	sarl	$31, %edx\n\t"
"	cmpl	%edx, 28(%esp)\n\t"
"	movl	%ecx, 132(%esp)\n\t"
"	movl	%ecx, 32(%esp)\n\t"
"	movl	%edx, 36(%esp)\n\t"
"	jl	.L8\n\t"
"	jg	.L54\n\t"
"	cmpl	%ecx, 24(%esp)\n\t"
"	jbe	.L8\n\t"
".L54:\n\t"
"	movl	132(%esp), %edx\n\t"
"	movl	%ecx, %ebp\n\t"
"	sall	$5, %ebp\n\t"
"	movl	$0, 152(%esp)\n\t"
"	movl	$0, 156(%esp)\n\t"
"	leal	1(%edx), %eax\n\t"
"	movl	%eax, %ecx\n\t"
"	sarl	$31, %ecx\n\t"
"	movl	%eax, 48(%esp)\n\t"
"	movl	%ecx, 52(%esp)\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L70:\n\t"
"	leal	232(%esp), %ebx\n\t"
"	movl	%ebx, 4(%esp)\n\t"
"	movl	$.LC2, (%esp)\n\t"
"	call	scanf\n\t"
"	movl	236(%esp), %edx\n\t"
"	movl	%ebp, %ecx\n\t"
"	movl	232(%esp), %eax\n\t"
"	addl	tree, %ecx\n\t"
"	testl	%edx, %edx\n\t"
"	movl	%eax, (%ecx)\n\t"
"	movl	%edx, 4(%ecx)\n\t"
"	js	.L77\n\t"
".L10:\n\t"
"	movl	%eax, 8(%ecx)\n\t"
"	movl	s+4, %ebx\n\t"
"	movl	%eax, 24(%ecx)\n\t"
"	movl	152(%esp), %esi\n\t"
"	movl	%eax, 16(%ecx)\n\t"
"	movl	n, %eax\n\t"
"	movl	%edx, 12(%ecx)\n\t"
"	movl	156(%esp), %edi\n\t"
"	movl	%edx, 28(%ecx)\n\t"
"	movl	%edx, 20(%ecx)\n\t"
"	movl	s, %ecx\n\t"
"	addl	48(%esp), %esi\n\t"
"	movl	%eax, %edx\n\t"
"	adcl	52(%esp), %edi\n\t"
"	addl	$32, %ebp\n\t"
"	addl	$1, 152(%esp)\n\t"
"	adcl	$0, 156(%esp)\n\t"
"	sarl	$31, %edx\n\t"
"	addl	%ecx, %eax\n\t"
"	adcl	%ebx, %edx\n\t"
"	cmpl	%edi, %edx\n\t"
"	jg	.L70\n\t"
"	jge	.L78\n\t"
".L8:\n\t"
"	leal	-1(%ecx), %esi\n\t"
"	movl	%ecx, %eax\n\t"
"	testl	%esi, %esi\n\t"
"	movl	%esi, 116(%esp)\n\t"
"	jle	.L71\n\t"
"	movl	tree, %edi\n\t"
"	sall	$5, %eax\n\t"
"	movl	$0, 148(%esp)\n\t"
"	movl	%esi, 60(%esp)\n\t"
"	movl	%edi, 144(%esp)\n\t"
"	leal	-32(%edi,%eax), %edi\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L22:\n\t"
"	movl	116(%esp), %eax\n\t"
"	subl	148(%esp), %eax\n\t"
"	movl	144(%esp), %esi\n\t"
"	movl	144(%esp), %ecx\n\t"
"	sall	$6, %eax\n\t"
"	addl	%eax, %esi\n\t"
"	sall	$0, %eax\n\t"
"	movl	20(%esi), %ebp\n\t"
"	orl	$32, %eax\n\t"
"	movl	16(%esi), %ebx\n\t"
"	addl	%eax, %ecx\n\t"
"	movl	(%ecx), %eax\n\t"
"	movl	4(%ecx), %edx\n\t"
"	addl	(%esi), %eax\n\t"
"	adcl	4(%esi), %edx\n\t"
"	movl	%ebx, 80(%esp)\n\t"
"	movl	%eax, (%edi)\n\t"
"	movl	16(%ecx), %eax\n\t"
"	movl	%edx, 4(%edi)\n\t"
"	movl	20(%ecx), %edx\n\t"
"	addl	(%esi), %eax\n\t"
"	adcl	4(%esi), %edx\n\t"
"	movl	%eax, %ebx\n\t"
"	cmpl	%ebp, %edx\n\t"
"	movl	%edx, %eax\n\t"
"	jg	.L14\n\t"
"	jl	.L15\n\t"
"	cmpl	80(%esp), %ebx\n\t"
"	jae	.L14\n\t"
".L15:\n\t"
"	movl	80(%esp), %ebx\n\t"
"	movl	%ebp, %eax\n\t"
".L14:\n\t"
"	movl	%eax, 20(%edi)\n\t"
"	movl	28(%esi), %edx\n\t"
"	movl	24(%esi), %eax\n\t"
"	movl	28(%ecx), %ebp\n\t"
"	addl	(%ecx), %eax\n\t"
"	movl	%ebx, 16(%edi)\n\t"
"	movl	24(%ecx), %ebx\n\t"
"	adcl	4(%ecx), %edx\n\t"
"	cmpl	%ebp, %edx\n\t"
"	movl	%ebx, 84(%esp)\n\t"
"	movl	%eax, %ebx\n\t"
"	movl	%edx, %eax\n\t"
"	jg	.L16\n\t"
"	jl	.L17\n\t"
"	cmpl	84(%esp), %ebx\n\t"
"	jae	.L16\n\t"
".L17:\n\t"
"	movl	84(%esp), %ebx\n\t"
"	movl	%ebp, %eax\n\t"
".L16:\n\t"
"	movl	12(%ecx), %edx\n\t"
"	movl	%eax, 28(%edi)\n\t"
"	movl	8(%ecx), %eax\n\t"
"	movl	%ebx, 24(%edi)\n\t"
"	movl	%edx, 88(%esp)\n\t"
"	movl	12(%esi), %edx\n\t"
"	movl	%eax, 92(%esp)\n\t"
"	movl	8(%esi), %eax\n\t"
"	cmpl	88(%esp), %edx\n\t"
"	movl	%edx, %ebx\n\t"
"	movl	%eax, %ebp\n\t"
"	jg	.L18\n\t"
"	jl	.L19\n\t"
"	cmpl	92(%esp), %eax\n\t"
"	jae	.L18\n\t"
".L19:\n\t"
"	movl	92(%esp), %ebp\n\t"
"	movl	88(%esp), %ebx\n\t"
".L18:\n\t"
"	movl	16(%ecx), %eax\n\t"
"	movl	20(%ecx), %edx\n\t"
"	addl	24(%esi), %eax\n\t"
"	adcl	28(%esi), %edx\n\t"
"	movl	%ebp, 8(%edi)\n\t"
"	movl	%eax, %ecx\n\t"
"	cmpl	%ebx, %edx\n\t"
"	movl	%edx, %eax\n\t"
"	movl	%ebx, 12(%edi)\n\t"
"	jg	.L20\n\t"
"	jl	.L21\n\t"
"	cmpl	%ebp, %ecx\n\t"
"	jae	.L20\n\t"
".L21:\n\t"
"	movl	%ebp, %ecx\n\t"
"	movl	%ebx, %eax\n\t"
".L20:\n\t"
"	movl	%eax, 12(%edi)\n\t"
"	movl	60(%esp), %eax\n\t"
"	addl	$1, 148(%esp)\n\t"
"	subl	148(%esp), %eax\n\t"
"	movl	%ecx, 8(%edi)\n\t"
"	subl	$32, %edi\n\t"
"	testl	%eax, %eax\n\t"
"	jg	.L22\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L71:\n\t"
"	movl	240(%esp), %edx\n\t"
"	leal	-1(%edx), %eax\n\t"
"	testl	%edx, %edx\n\t"
"	movl	%eax, 240(%esp)\n\t"
"	je	.L79\n\t"
"	movl	stdin, %eax\n\t"
"	movl	%eax, (%esp)\n\t"
"	call	_IO_getc\n\t"
"	movl	%eax, %ebx\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L23:\n\t"
"	movl	stdin, %eax\n\t"
"	movl	%eax, (%esp)\n\t"
"	call	_IO_getc\n\t"
"	cmpl	$10, %eax\n\t"
"	jne	.L23\n\t"
"	cmpb	$85, %bl\n\t"
"	je	.L80\n\t"
"	leal	224(%esp), %ebx\n\t"
"	leal	232(%esp), %esi\n\t"
"	movl	%ebx, 8(%esp)\n\t"
"	movl	%esi, 4(%esp)\n\t"
"	movl	$.LC3, (%esp)\n\t"
"	call	scanf\n\t"
"	movl	232(%esp), %ecx\n\t"
"	movl	236(%esp), %ebx\n\t"
"	movl	224(%esp), %eax\n\t"
"	movl	228(%esp), %edx\n\t"
"	movl	%ecx, 40(%esp)\n\t"
"	movl	s, %ecx\n\t"
"	movl	40(%esp), %esi\n\t"
"	movl	%ebx, 44(%esp)\n\t"
"	movl	s+4, %ebx\n\t"
"	movl	44(%esp), %edi\n\t"
"	addl	%ecx, %esi\n\t"
"	movl	%esi, 176(%esp)\n\t"
"	adcl	%ebx, %edi\n\t"
"	addl	$-1, 176(%esp)\n\t"
"	movl	176(%esp), %esi\n\t"
"	movl	%edi, 180(%esp)\n\t"
"	adcl	$-1, 180(%esp)\n\t"
"	movl	180(%esp), %edi\n\t"
"	movl	%esi, 232(%esp)\n\t"
"	movl	%eax, %esi\n\t"
"	addl	%ecx, %esi\n\t"
"	movl	%eax, %ecx\n\t"
"	movl	%esi, 104(%esp)\n\t"
"	movl	%edi, 236(%esp)\n\t"
"	movl	%edx, %edi\n\t"
"	adcl	%ebx, %edi\n\t"
"	addl	$-1, %esi\n\t"
"	movl	%edi, 108(%esp)\n\t"
"	movl	%edx, %ebx\n\t"
"	adcl	$-1, %edi\n\t"
"	addl	$1, %ecx\n\t"
"	adcl	$0, %ebx\n\t"
"	movl	%ebx, 188(%esp)\n\t"
"	movl	40(%esp), %ebx\n\t"
"	movl	%esi, 120(%esp)\n\t"
"	movl	44(%esp), %esi\n\t"
"	movl	%ecx, 184(%esp)\n\t"
"	subl	%ebx, 184(%esp)\n\t"
"	sbbl	%esi, 188(%esp)\n\t"
"	movl	%edi, 124(%esp)\n\t"
"	movl	$0, 200(%esp)\n\t"
"	movl	188(%esp), %esi\n\t"
"	orl	184(%esp), %esi\n\t"
"	movl	$0, 204(%esp)\n\t"
"	je	.L45\n\t"
"	movl	tree, %edi\n\t"
"	movl	$0, 208(%esp)\n\t"
"	movl	$0, 212(%esp)\n\t"
"	movl	%edi, 196(%esp)\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L72:\n\t"
"	testb	$1, 176(%esp)\n\t"
"	jne	.L48\n\t"
"	cmpl	$0, 188(%esp)\n\t"
"	jle	.L81\n\t"
".L49:\n\t"
"	movl	$2, %esi\n\t"
"	xorl	%edi, %edi\n\t"
"	jmp	.L39\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L82:\n\t"
"	movl	184(%esp), %eax\n\t"
"	movl	%esi, %ecx\n\t"
"	movl	%edi, %ebx\n\t"
"	movl	188(%esp), %edx\n\t"
"	addl	%esi, %ecx\n\t"
"	shldl	$1, %esi, %ebx\n\t"
"	subl	%ecx, %eax\n\t"
"	sbbl	%ebx, %edx\n\t"
"	testl	%edx, %edx\n\t"
"	js	.L38\n\t"
"	movl	%ecx, %esi\n\t"
"	movl	%ebx, %edi\n\t"
".L39:\n\t"
"	movl	180(%esp), %edx\n\t"
"	movl	176(%esp), %eax\n\t"
"	shrdl	$1, %edx, %eax\n\t"
"	sarl	%edx\n\t"
"	testb	$1, %al\n\t"
"	movl	%eax, 176(%esp)\n\t"
"	movl	%edx, 180(%esp)\n\t"
"	je	.L82\n\t"
".L38:\n\t"
"	movl	176(%esp), %eax\n\t"
"	sall	$5, %eax\n\t"
"	addl	196(%esp), %eax\n\t"
"	movl	4(%eax), %ecx\n\t"
"	movl	(%eax), %edx\n\t"
"	movl	28(%eax), %ebx\n\t"
"	movl	%ecx, 140(%esp)\n\t"
"	movl	24(%eax), %ecx\n\t"
"	movl	%edx, 136(%esp)\n\t"
"	movl	208(%esp), %edx\n\t"
"	addl	16(%eax), %edx\n\t"
"	movl	%ebx, 72(%esp)\n\t"
"	movl	8(%eax), %ebx\n\t"
"	movl	%ecx, 76(%esp)\n\t"
"	movl	212(%esp), %ecx\n\t"
"	adcl	20(%eax), %ecx\n\t"
"	movl	%edx, %ebp\n\t"
"	movl	12(%eax), %eax\n\t"
"	movl	%ecx, %edx\n\t"
"	cmpl	%eax, %ecx\n\t"
"	jg	.L40\n\t"
"	jl	.L41\n\t"
"	cmpl	%ebx, %ebp\n\t"
"	jae	.L40\n\t"
".L41:\n\t"
"	movl	%ebx, %ebp\n\t"
"	movl	%eax, %edx\n\t"
".L40:\n\t"
"	cmpl	%edx, 204(%esp)\n\t"
"	jg	.L42\n\t"
"	jl	.L43\n\t"
"	cmpl	%ebp, 200(%esp)\n\t"
"	jae	.L42\n\t"
".L43:\n\t"
"	movl	%edx, %ebx\n\t"
"	movl	%ebp, 200(%esp)\n\t"
"	movl	%ebx, 204(%esp)\n\t"
".L42:\n\t"
"	subl	%esi, 184(%esp)\n\t"
"	sbbl	%edi, 188(%esp)\n\t"
"	movl	104(%esp), %esi\n\t"
"	movl	108(%esp), %edi\n\t"
"	subl	184(%esp), %esi\n\t"
"	sbbl	188(%esp), %edi\n\t"
"	movl	%esi, 176(%esp)\n\t"
"	movl	%edi, 180(%esp)\n\t"
"	movl	188(%esp), %edi\n\t"
"	orl	184(%esp), %edi\n\t"
"	je	.L83\n\t"
"	movl	136(%esp), %edx\n\t"
"	movl	140(%esp), %ecx\n\t"
"	addl	%edx, 208(%esp)\n\t"
"	adcl	%ecx, 212(%esp)\n\t"
"	movl	72(%esp), %ecx\n\t"
"	cmpl	%ecx, 212(%esp)\n\t"
"	jg	.L72\n\t"
"	jl	.L47\n\t"
"	movl	76(%esp), %ebx\n\t"
"	cmpl	%ebx, 208(%esp)\n\t"
"	jae	.L72\n\t"
".L47:\n\t"
"	movl	76(%esp), %eax\n\t"
"	movl	72(%esp), %ebx\n\t"
"	movl	%eax, 208(%esp)\n\t"
"	movl	%ebx, 212(%esp)\n\t"
"	jmp	.L72\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L81:\n\t"
"	jl	.L48\n\t"
"	cmpl	$1, 184(%esp)\n\t"
"	ja	.L49\n\t"
".L48:\n\t"
"	movl	$1, %esi\n\t"
"	xorl	%edi, %edi\n\t"
"	jmp	.L38\n\t"
".L83:\n\t"
"	movl	176(%esp), %eax\n\t"
"	movl	180(%esp), %edx\n\t"
"	movl	%eax, 232(%esp)\n\t"
"	movl	%edx, 236(%esp)\n\t"
".L45:\n\t"
"	movl	120(%esp), %esi\n\t"
"	movl	124(%esp), %edi\n\t"
"	movl	200(%esp), %eax\n\t"
"	movl	204(%esp), %edx\n\t"
"	movl	%esi, 224(%esp)\n\t"
"	movl	%edi, 228(%esp)\n\t"
"	movl	%eax, 8(%esp)\n\t"
"	movl	%edx, 12(%esp)\n\t"
"	movl	$.LC4, 4(%esp)\n\t"
"	movl	$1, (%esp)\n\t"
"	call	__printf_chk\n\t"
"	jmp	.L71\n\t"
".L80:\n\t"
"	leal	224(%esp), %ecx\n\t"
"	leal	232(%esp), %ebx\n\t"
"	movl	%ecx, 8(%esp)\n\t"
"	movl	%ebx, 4(%esp)\n\t"
"	movl	$.LC3, (%esp)\n\t"
"	call	scanf\n\t"
"	movl	s, %ebx\n\t"
"	addl	232(%esp), %ebx\n\t"
"	movl	s+4, %esi\n\t"
"	adcl	236(%esp), %esi\n\t"
"	movl	228(%esp), %ecx\n\t"
"	addl	$-1, %ebx\n\t"
"	movl	tree, %edi\n\t"
"	movl	%ebx, %eax\n\t"
"	movl	224(%esp), %edx\n\t"
"	adcl	$-1, %esi\n\t"
"	sall	$5, %eax\n\t"
"	movl	%edi, 164(%esp)\n\t"
"	addl	%eax, %edi\n\t"
"	testl	%ecx, %ecx\n\t"
"	movl	%edx, (%edi)\n\t"
"	movl	%edx, %eax\n\t"
"	movl	%ecx, %edx\n\t"
"	movl	%ecx, 4(%edi)\n\t"
"	js	.L84\n\t"
".L26:\n\t"
"	movl	%eax, 8(%edi)\n\t"
"	movl	%edx, 12(%edi)\n\t"
"	movl	%eax, 24(%edi)\n\t"
"	movl	%edx, 28(%edi)\n\t"
"	movl	%eax, 16(%edi)\n\t"
"	movl	%ebx, %eax\n\t"
"	movl	%edx, 20(%edi)\n\t"
"	movl	%esi, %edx\n\t"
"	shrdl	$1, %esi, %eax\n\t"
"	sarl	%edx\n\t"
"	movl	%edx, 172(%esp)\n\t"
"	movl	%edx, 236(%esp)\n\t"
"	orl	%eax, %edx\n\t"
"	movl	%eax, 168(%esp)\n\t"
"	movl	%eax, 232(%esp)\n\t"
"	je	.L71\n\t"
"	.p2align 4,,7\n\t"
"	.p2align 3\n\t"
".L60:\n\t"
"	movl	168(%esp), %eax\n\t"
"	movl	164(%esp), %ebp\n\t"
"	movl	164(%esp), %edi\n\t"
"	movl	164(%esp), %ebx\n\t"
"	sall	$5, %eax\n\t"
"	addl	%eax, %ebp\n\t"
"	addl	%eax, %eax\n\t"
"	addl	%eax, %edi\n\t"
"	sall	$0, %eax\n\t"
"	movl	20(%edi), %esi\n\t"
"	orl	$32, %eax\n\t"
"	movl	16(%edi), %ecx\n\t"
"	addl	%eax, %ebx\n\t"
"	movl	(%ebx), %eax\n\t"
"	movl	4(%ebx), %edx\n\t"
"	addl	(%edi), %eax\n\t"
"	adcl	4(%edi), %edx\n\t"
"	movl	%ecx, 96(%esp)\n\t"
"	movl	%eax, (%ebp)\n\t"
"	movl	16(%ebx), %eax\n\t"
"	movl	%edx, 4(%ebp)\n\t"
"	movl	20(%ebx), %edx\n\t"
"	addl	(%edi), %eax\n\t"
"	adcl	4(%edi), %edx\n\t"
"	movl	%eax, %ecx\n\t"
"	cmpl	%esi, %edx\n\t"
"	movl	%edx, %eax\n\t"
"	jg	.L27\n\t"
"	jl	.L28\n\t"
"	cmpl	96(%esp), %ecx\n\t"
"	jae	.L27\n\t"
".L28:\n\t"
"	movl	96(%esp), %ecx\n\t"
"	movl	%esi, %eax\n\t"
".L27:\n\t"
"	movl	24(%ebx), %esi\n\t"
"	movl	%eax, 20(%ebp)\n\t"
"	movl	28(%edi), %edx\n\t"
"	movl	24(%edi), %eax\n\t"
"	addl	(%ebx), %eax\n\t"
"	movl	%esi, 100(%esp)\n\t"
"	movl	28(%ebx), %esi\n\t"
"	adcl	4(%ebx), %edx\n\t"
"	movl	%ecx, 16(%ebp)\n\t"
"	movl	%eax, %ecx\n\t"
"	cmpl	%esi, %edx\n\t"
"	movl	%edx, %eax\n\t"
"	jg	.L29\n\t"
"	jl	.L30\n\t"
"	cmpl	100(%esp), %ecx\n\t"
"	jae	.L29\n\t"
".L30:\n\t"
"	movl	100(%esp), %ecx\n\t"
"	movl	%esi, %eax\n\t"
".L29:\n\t"
"	movl	12(%ebx), %edx\n\t"
"	movl	%eax, 28(%ebp)\n\t"
"	movl	8(%ebx), %eax\n\t"
"	movl	%ecx, 24(%ebp)\n\t"
"	movl	%edx, 64(%esp)\n\t"
"	movl	12(%edi), %edx\n\t"
"	movl	%eax, 68(%esp)\n\t"
"	movl	8(%edi), %eax\n\t"
"	cmpl	64(%esp), %edx\n\t"
"	movl	%edx, %ecx\n\t"
"	movl	%eax, %esi\n\t"
"	jg	.L31\n\t"
"	jl	.L32\n\t"
"	cmpl	68(%esp), %eax\n\t"
"	jae	.L31\n\t"
".L32:\n\t"
"	movl	68(%esp), %esi\n\t"
"	movl	64(%esp), %ecx\n\t"
".L31:\n\t"
"	movl	16(%ebx), %eax\n\t"
"	movl	20(%ebx), %edx\n\t"
"	movl	%esi, %ebx\n\t"
"	addl	24(%edi), %eax\n\t"
"	adcl	28(%edi), %edx\n\t"
"	movl	%esi, 8(%ebp)\n\t"
"	movl	%ecx, 12(%ebp)\n\t"
"	cmpl	%edx, %ecx\n\t"
"	jg	.L33\n\t"
"	jl	.L34\n\t"
"	cmpl	%eax, %esi\n\t"
"	jae	.L33\n\t"
".L34:\n\t"
"	movl	%eax, %ebx\n\t"
"	movl	%edx, %ecx\n\t"
".L33:\n\t"
"	movl	%ebx, 8(%ebp)\n\t"
"	movl	172(%esp), %ebx\n\t"
"	movl	%ecx, 12(%ebp)\n\t"
"	movl	168(%esp), %ecx\n\t"
"	shrdl	$1, %ebx, %ecx\n\t"
"	sarl	%ebx\n\t"
"	movl	%ebx, 172(%esp)\n\t"
"	orl	%ecx, %ebx\n\t"
"	movl	%ecx, 168(%esp)\n\t"
"	jne	.L60\n\t"
"	movl	$0, 232(%esp)\n\t"
"	movl	$0, 236(%esp)\n\t"
"	jmp	.L71\n\t"
".L78:\n\t"
"	cmpl	%esi, %eax\n\t"
"	ja	.L70\n\t"
"	jmp	.L8\n\t"
".L77:\n\t"
"	xorl	%eax, %eax\n\t"
"	xorl	%edx, %edx\n\t"
"	.p2align 4,,5\n\t"
"	.p2align 3\n\t"
"	jmp	.L10\n\t"
".L84:\n\t"
"	xorl	%eax, %eax\n\t"
"	xorl	%edx, %edx\n\t"
"	.p2align 4,,3\n\t"
"	.p2align 3\n\t"
"	jmp	.L26\n\t"
".L79:\n\t"
"	movl	tree, %eax\n\t"
"	testl	%eax, %eax\n\t"
"	je	.L73\n\t"
"	movl	%eax, (%esp)\n\t"
"	call	_ZdaPv\n\t"
"	movl	244(%esp), %eax\n\t"
"	testl	%eax, %eax\n\t"
"	jne	.L52\n\t"
".L76:\n\t"
"	addl	$248, %esp\n\t"
"	popl	%ecx\n\t"
"	popl	%ebx\n\t"
"	popl	%esi\n\t"
"	popl	%edi\n\t"
"	popl	%ebp\n\t"
"	leal	-4(%ecx), %esp\n\t"
"	ret\n\t"
".L3:\n\t"
"	movl	$1, s\n\t"
"	movl	$0, s+4\n\t"
"	movl	$64, (%esp)\n\t"
"	call	_Znaj\n\t"
"	movl	%eax, %edx\n\t"
"	movl	$1, %eax\n\t"
"	jmp	.L6\n\t"
".LFE42:\n\t"
"	.size	main, .-main\n\t"
".globl tree\n\t"
"	.bss\n\t"
"	.align 4\n\t"
"	.type	tree, @object\n\t"
"	.size	tree, 4\n\t"
"tree:\n\t"
"	.zero	4\n\t"
".globl n\n\t"
"	.align 4\n\t"
"	.type	n, @object\n\t"
"	.size	n, 4\n\t"
"n:\n\t"
"	.zero	4\n\t"
".globl s\n\t"
"	.align 8\n\t"
"	.type	s, @object\n\t"
"	.size	s, 8\n\t"
"s:\n\t"
"	.zero	8\n\t"
"	.section	.eh_frame,\"a\",@progbits\n\t"
".Lframe1:\n\t"
"	.long	.LECIE1-.LSCIE1\n\t"
".LSCIE1:\n\t"
"	.long	0x0\n\t"
"	.byte	0x1\n\t"
".globl __gxx_personality_v0\n\t"
"	.string	\"zP\"\n\t"
"	.uleb128 0x1\n\t"
"	.sleb128 -4\n\t"
"	.byte	0x8\n\t"
"	.uleb128 0x5\n\t"
"	.byte	0x0\n\t"
"	.long	__gxx_personality_v0\n\t"
"	.byte	0xc\n\t"
"	.uleb128 0x4\n\t"
"	.uleb128 0x4\n\t"
"	.byte	0x88\n\t"
"	.uleb128 0x1\n\t"
"	.align 4\n\t"
".LECIE1:\n\t"
".LSFDE1:\n\t"
"	.long	.LEFDE1-.LASFDE1\n\t"
".LASFDE1:\n\t"
"	.long	.LASFDE1-.Lframe1\n\t"
"	.long	.LFB42\n\t"
"	.long	.LFE42-.LFB42\n\t"
"	.uleb128 0x0\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI0-.LFB42\n\t"
"	.byte	0xc\n\t"
"	.uleb128 0x1\n\t"
"	.uleb128 0x0\n\t"
"	.byte	0x9\n\t"
"	.uleb128 0x4\n\t"
"	.uleb128 0x1\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI1-.LCFI0\n\t"
"	.byte	0xc\n\t"
"	.uleb128 0x4\n\t"
"	.uleb128 0x4\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI2-.LCFI1\n\t"
"	.byte	0xe\n\t"
"	.uleb128 0x8\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI3-.LCFI2\n\t"
"	.byte	0xe\n\t"
"	.uleb128 0xc\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI4-.LCFI3\n\t"
"	.byte	0xe\n\t"
"	.uleb128 0x10\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI5-.LCFI4\n\t"
"	.byte	0xe\n\t"
"	.uleb128 0x14\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI6-.LCFI5\n\t"
"	.byte	0xe\n\t"
"	.uleb128 0x18\n\t"
"	.byte	0x84\n\t"
"	.uleb128 0x6\n\t"
"	.byte	0x83\n\t"
"	.uleb128 0x5\n\t"
"	.byte	0x86\n\t"
"	.uleb128 0x4\n\t"
"	.byte	0x87\n\t"
"	.uleb128 0x3\n\t"
"	.byte	0x85\n\t"
"	.uleb128 0x2\n\t"
"	.byte	0x4\n\t"
"	.long	.LCFI7-.LCFI6\n\t"
"	.byte	0xe\n\t"
"	.uleb128 0x110\n\t"
"	.align 4\n\t"
".LEFDE1:\n\t"
"	.section	.note.GNU-stack,\"\",@progbits\n\t"
);
