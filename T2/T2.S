	.file	"T2.cpp"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d\n"
.LC1:
	.string	"%s\n%s\n"
.LC2:
	.string	"TAK"
.LC3:
	.string	"NIE"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
	leal	4(%esp), %ecx
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	pushl	%ecx
	subl	$88, %esp
	leal	84(%esp), %eax
	movl	$.LC0, (%esp)
	movl	%eax, 4(%esp)
	call	scanf
	leal	76(%esp), %eax
	movl	%eax, 24(%esp)
.L46:
	movl	84(%esp), %eax
	testl	%eax, %eax
	je	.L49
.L35:
	decl	%eax
	movl	$.LC0, (%esp)
	movl	%eax, 84(%esp)
	leal	80(%esp), %eax
	movl	%eax, 4(%esp)
	call	scanf
	movl	80(%esp), %eax
	addl	$2, %eax
	movl	%eax, (%esp)
	call	_Znaj
	movl	%eax, 28(%esp)
	movl	80(%esp), %eax
	addl	$2, %eax
	movl	%eax, (%esp)
	call	_Znaj
	movl	28(%esp), %edx
	movl	%eax, 32(%esp)
	movl	%eax, 8(%esp)
	movl	$.LC1, (%esp)
	movl	%edx, 4(%esp)
	call	scanf
	movl	80(%esp), %eax
	leal	2(%eax,%eax,2), %eax
	movl	%eax, (%esp)
	call	_Znaj
	movl	28(%esp), %ecx
	movl	%eax, 48(%esp)
	movl	80(%esp), %eax
	movl	48(%esp), %ebx
	movl	%ecx, 4(%esp)
	movl	%ebx, (%esp)
	movl	%eax, 8(%esp)
	call	memcpy
	movl	80(%esp), %eax
	movl	32(%esp), %edi
	leal	1(%ebx,%eax), %edx
	movl	%edi, 4(%esp)
	movl	%eax, 8(%esp)
	movl	%edx, (%esp)
	call	memcpy
	movl	80(%esp), %eax
	movl	%edi, 4(%esp)
	xorl	%edi, %edi
	leal	1(%ebx,%eax,2), %edx
	movl	%eax, 8(%esp)
	movl	%edx, (%esp)
	call	memcpy
	movl	80(%esp), %eax
	movb	$35, (%ebx,%eax)
	movl	80(%esp), %eax
	leal	(%eax,%eax,2), %eax
	movb	$64, 1(%ebx,%eax)
	movl	80(%esp), %eax
	decl	%ebx
	movl	%ebx, 36(%esp)
	leal	(%eax,%eax,2), %eax
	leal	1(%eax), %ebp
	leal	8(,%eax,4), %eax
	movl	%ebp, 40(%esp)
	movl	%eax, (%esp)
	call	_Znaj
	decl	%ebp
	movl	%eax, 56(%esp)
	movl	$-1, 4(%eax)
	movl	$2, 52(%esp)
	jle	.L3
	.p2align 4,,7
	.p2align 3
.L4:
	movl	52(%esp), %edx
	movl	36(%esp), %ecx
	addl	%edi, %edx
	movzbl	(%ecx,%edx), %eax
	cmpb	1(%ecx,%edi), %al
	jne	.L11
	movl	48(%esp), %ebx
	movl	48(%esp), %ecx
	addl	%edx, %ebx
	addl	%edi, %ecx
	.p2align 4,,7
	.p2align 3
.L5:
	movzbl	(%ebx), %edx
	movzbl	1(%ecx), %eax
	incl	%edi
	incl	%ebx
	incl	%ecx
	cmpb	%al, %dl
	je	.L5
.L11:
	movl	52(%esp), %eax
	movl	56(%esp), %edx
	cmpl	$1, %edi
	leal	(%edx,%eax,4), %eax
	movl	%eax, 16(%esp)
	movl	%edi, (%eax)
	jle	.L6
	movl	%edx, %ecx
	leal	-1(%edi), %eax
	addl	$8, %ecx
	cmpl	%eax, 8(%edx)
	je	.L6
	movl	52(%esp), %ebx
	leal	4(%edx,%ebx,4), %esi
	movl	$2, %edx
	jmp	.L10
	.p2align 4,,7
	.p2align 3
.L50:
	movl	56(%esp), %ebp
	incl	%edx
	subl	%ebx, %eax
	addl	$4, %esi
	cmpl	%eax, 4(%ebp,%ebx,4)
	leal	(%ebp,%edx,4), %ecx
	je	.L9
.L10:
	movl	%eax, 76(%esp)
	cmpl	%eax, (%ecx)
	movl	%edx, %ebx
	movl	24(%esp), %eax
	movl	16(%esp), %ebp
	cmovle	%ecx, %eax
	movl	(%eax), %eax
	movl	%eax, (%esi)
	movl	(%ebp), %eax
	cmpl	%eax, %edx
	jl	.L50
.L9:
	movl	%edi, %edx
	movl	$0, %eax
	subl	%ebx, %edx
	movl	%eax, %edi
	cmovns	%edx, %edi
	addl	%ebx, 52(%esp)
	movl	52(%esp), %eax
	cmpl	%eax, 40(%esp)
	jge	.L4
.L3:
	movl	80(%esp), %ebx
	testl	%ebx, %ebx
	jle	.L12
	xorl	%edx, %edx
	.p2align 4,,7
	.p2align 3
.L13:
	movl	28(%esp), %edi
	movl	48(%esp), %ebp
	subl	%edx, %ebx
	movzbl	(%edi,%edx), %eax
	incl	%edx
	movb	%al, -1(%ebp,%ebx)
	movl	80(%esp), %ebx
	cmpl	%edx, %ebx
	jg	.L13
	testl	%ebx, %ebx
	jle	.L12
	xorl	%esi, %esi
	.p2align 4,,7
	.p2align 3
.L14:
	movl	32(%esp), %eax
	leal	(%ebx,%ebx), %edx
	movzbl	(%eax,%esi), %ecx
	leal	(%edx,%ebx), %eax
	movl	48(%esp), %ebx
	subl	%esi, %edx
	subl	%esi, %eax
	incl	%esi
	movb	%cl, (%ebx,%eax)
	movb	%cl, (%ebx,%edx)
	movl	80(%esp), %ebx
	cmpl	%esi, %ebx
	jg	.L14
.L12:
	movl	28(%esp), %ebx
	testl	%ebx, %ebx
	je	.L15
	movl	28(%esp), %edi
	movl	%edi, (%esp)
	call	_ZdaPv
.L15:
	movl	32(%esp), %ecx
	testl	%ecx, %ecx
	je	.L16
	movl	32(%esp), %ebp
	movl	%ebp, (%esp)
	call	_ZdaPv
.L16:
	movl	80(%esp), %eax
	leal	(%eax,%eax,2), %eax
	leal	1(%eax), %edx
	leal	8(,%eax,4), %eax
	movl	%edx, 68(%esp)
	movl	%eax, (%esp)
	call	_Znaj
	cmpl	$1, 68(%esp)
	movl	%eax, %ebp
	movl	$-1, 4(%eax)
	jle	.L17
	leal	72(%esp), %ecx
	xorl	%edi, %edi
	movl	$2, 60(%esp)
	movl	%ecx, 20(%esp)
	.p2align 4,,7
	.p2align 3
.L18:
	movl	60(%esp), %eax
	movl	36(%esp), %ecx
	leal	(%edi,%eax), %edx
	movzbl	(%ecx,%edx), %eax
	cmpb	1(%ecx,%edi), %al
	jne	.L25
	movl	48(%esp), %ebx
	movl	48(%esp), %ecx
	addl	%edx, %ebx
	addl	%edi, %ecx
	.p2align 4,,7
	.p2align 3
.L19:
	movzbl	(%ebx), %edx
	movzbl	1(%ecx), %eax
	incl	%edi
	incl	%ebx
	incl	%ecx
	cmpb	%al, %dl
	je	.L19
.L25:
	movl	60(%esp), %ebx
	cmpl	$1, %edi
	leal	(%ebp,%ebx,4), %ebx
	movl	%ebx, 64(%esp)
	movl	%edi, (%ebx)
	jle	.L20
	leal	-1(%edi), %eax
	cmpl	%eax, 8(%ebp)
	leal	8(%ebp), %ecx
	je	.L20
	movl	60(%esp), %edx
	leal	4(%ebp,%edx,4), %esi
	movl	$2, %edx
	jmp	.L24
	.p2align 4,,7
	.p2align 3
.L51:
	incl	%edx
	subl	%ebx, %eax
	addl	$4, %esi
	cmpl	%eax, 4(%ebp,%ebx,4)
	leal	(%ebp,%edx,4), %ecx
	je	.L23
.L24:
	movl	%eax, 72(%esp)
	cmpl	%eax, (%ecx)
	movl	%edx, %ebx
	movl	20(%esp), %eax
	cmovle	%ecx, %eax
	movl	64(%esp), %ecx
	movl	(%eax), %eax
	movl	%eax, (%esi)
	movl	(%ecx), %eax
	cmpl	%eax, %edx
	jl	.L51
.L23:
	movl	%edi, %edx
	movl	$0, %eax
	subl	%ebx, %edx
	movl	%eax, %edi
	cmovns	%edx, %edi
	addl	%ebx, 60(%esp)
	movl	60(%esp), %ebx
	cmpl	%ebx, 68(%esp)
	jge	.L18
.L17:
	movl	80(%esp), %esi
	testl	%esi, %esi
	js	.L26
	movl	56(%esp), %edi
	leal	2(%esi,%esi), %edx
	leal	-1(%esi), %ebx
	xorl	%ecx, %ecx
	movl	(%ebp,%edx,4), %eax
	movl	%ebx, 12(%esp)
	leal	-4(%ebp,%edx,4), %ebx
	addl	8(%edi,%esi,4), %eax
	cmpl	12(%esp), %eax
	jne	.L29
	jmp	.L27
	.p2align 4,,7
	.p2align 3
.L31:
	movl	56(%esp), %edi
	leal	(%ecx,%esi), %edx
	movl	(%ebx), %eax
	subl	$4, %ebx
	addl	8(%edi,%edx,4), %eax
	cmpl	%eax, 12(%esp)
	je	.L27
.L29:
	incl	%ecx
	cmpl	%esi, %ecx
	jle	.L31
.L32:
	movl	$.LC3, (%esp)
	call	puts
	movb	$0, 47(%esp)
.L30:
	movl	56(%esp), %edx
	testl	%edx, %edx
	je	.L33
	movl	56(%esp), %eax
	movl	%eax, (%esp)
	call	_ZdaPv
.L33:
	testl	%ebp, %ebp
	je	.L34
	movl	%ebp, (%esp)
	call	_ZdaPv
.L34:
	movl	48(%esp), %eax
	testl	%eax, %eax
	je	.L46
	movl	48(%esp), %edx
	movl	%edx, (%esp)
	call	_ZdaPv
	movl	84(%esp), %eax
	testl	%eax, %eax
	jne	.L35
.L49:
	addl	$88, %esp
	popl	%ecx
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
.L20:
	movl	$1, %ebx
	jmp	.L23
.L6:
	movl	$1, %ebx
	jmp	.L9
.L27:
	movl	$.LC2, (%esp)
	call	puts
	movb	$1, 47(%esp)
	jmp	.L30
.L26:
	cmpb	$0, 47(%esp)
	jne	.L30
	.p2align 4,,5
	.p2align 3
	jmp	.L32
	.size	main, .-main
	.ident	"GCC: (Gentoo 4.3.3-r2 p1.1, pie-10.1.5) 4.3.3"
	.section	.note.GNU-stack,"",@progbits
