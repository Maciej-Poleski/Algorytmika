	.file	"C6.cpp"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"vector::_M_insert_aux"
	.section	.text._ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi,"axG",@progbits,_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi,comdat
	.align 2
	.p2align 4,,15
	.weak	_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi
	.type	_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi, @function
_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi:
.LFB598:
	pushl	%ebp
.LCFI0:
	movl	%esp, %ebp
.LCFI1:
	subl	$40, %esp
.LCFI2:
	movl	%edi, -4(%ebp)
.LCFI3:
	movl	8(%ebp), %edi
	movl	%esi, -8(%ebp)
.LCFI4:
	movl	12(%ebp), %esi
	movl	%ebx, -12(%ebp)
.LCFI5:
	movl	4(%edi), %edx
	cmpl	8(%edi), %edx
	je	.L2
	testl	%edx, %edx
	je	.L3
	movl	-4(%edx), %eax
	movl	%eax, (%edx)
.L3:
	leal	4(%edx), %eax
	movl	%eax, 4(%edi)
	movl	16(%ebp), %eax
	movl	(%eax), %ebx
	leal	-4(%edx), %eax
	subl	%esi, %eax
	andl	$-4, %eax
	subl	%eax, %edx
	movl	%eax, 8(%esp)
	movl	%esi, 4(%esp)
	movl	%edx, (%esp)
	call	memmove
	movl	%ebx, (%esi)
.L12:
	movl	-12(%ebp), %ebx
	movl	-8(%ebp), %esi
	movl	-4(%ebp), %edi
	movl	%ebp, %esp
	popl	%ebp
	ret
	.p2align 4,,7
	.p2align 3
.L2:
	movl	%edx, %eax
	movl	$1, %edx
	subl	(%edi), %eax
	sarl	$2, %eax
	testl	%eax, %eax
	jne	.L14
.L7:
	sall	$2, %edx
	movl	%edx, -16(%ebp)
.L9:
	movl	-16(%ebp), %ecx
	movl	%esi, %ebx
	movl	%ecx, (%esp)
	call	_Znwj
	movl	%eax, -24(%ebp)
	movl	(%edi), %eax
	subl	%eax, %ebx
	movl	%eax, 4(%esp)
	movl	-24(%ebp), %eax
	andl	$-4, %ebx
	movl	%ebx, 8(%esp)
	movl	%eax, (%esp)
	call	memmove
	movl	-24(%ebp), %edx
	addl	%ebx, %edx
	je	.L10
	movl	16(%ebp), %ecx
	movl	(%ecx), %eax
	movl	%eax, (%edx)
.L10:
	movl	4(%edi), %ebx
	addl	$4, %edx
	movl	%edx, -20(%ebp)
	movl	%esi, 4(%esp)
	movl	%edx, (%esp)
	subl	%esi, %ebx
	andl	$-4, %ebx
	movl	%ebx, 8(%esp)
	call	memmove
	movl	(%edi), %eax
	addl	-20(%ebp), %ebx
	testl	%eax, %eax
	je	.L11
	movl	%eax, (%esp)
	call	_ZdlPv
.L11:
	movl	-24(%ebp), %ecx
	movl	%ebx, 4(%edi)
	movl	%ecx, %eax
	addl	-16(%ebp), %eax
	movl	%ecx, (%edi)
	movl	%eax, 8(%edi)
	jmp	.L12
	.p2align 4,,7
	.p2align 3
.L14:
	leal	(%eax,%eax), %edx
	cmpl	%edx, %eax
	jbe	.L15
.L8:
	movl	$-4, -16(%ebp)
	jmp	.L9
.L15:
	cmpl	$1073741823, %edx
	.p2align 4,,3
	.p2align 3
	ja	.L8
	.p2align 4,,7
	.p2align 3
	jmp	.L7
.LFE598:
	.size	_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi, .-_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi
	.section	.rodata.str1.1
.LC1:
	.string	"%d"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB575:
	leal	4(%esp), %ecx
.LCFI6:
	andl	$-16, %esp
	pushl	-4(%ecx)
.LCFI7:
	pushl	%ebp
.LCFI8:
	movl	%esp, %ebp
.LCFI9:
	pushl	%esi
.LCFI10:
	pushl	%ebx
.LCFI11:
	pushl	%ecx
.LCFI12:
	subl	$28, %esp
.LCFI13:
	leal	-16(%ebp), %eax
	movl	%eax, 4(%esp)
	leal	-28(%ebp), %esi
	movl	$.LC1, (%esp)
	call	scanf
	.p2align 4,,7
	.p2align 3
.L30:
	movl	-16(%ebp), %eax
	testl	%eax, %eax
	je	.L31
.L24:
	subl	$1, %eax
	movl	%eax, -16(%ebp)
	leal	-20(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	scanf
	movl	-20(%ebp), %ebx
	leal	1(%ebx,%ebx,2), %eax
	sall	$2, %eax
	movl	%eax, (%esp)
	call	_Znaj
	addl	$4, %eax
	testl	%ebx, %ebx
	movl	%ebx, -4(%eax)
	je	.L18
	movl	%eax, %edx
	xorl	%ecx, %ecx
	.p2align 4,,7
	.p2align 3
.L19:
	addl	$1, %ecx
	movl	$0, (%edx)
	movl	$0, 4(%edx)
	movl	$0, 8(%edx)
	addl	$12, %edx
	cmpl	%ecx, %ebx
	jne	.L19
.L18:
	cmpl	$1, -20(%ebp)
	movl	%eax, G
	movl	$1, -28(%ebp)
	jle	.L30
	leal	-24(%ebp), %ebx
.L23:
	movl	%ebx, 4(%esp)
	movl	$.LC1, (%esp)
	call	scanf
	movl	-24(%ebp), %eax
	leal	(%eax,%eax,2), %eax
	leal	0(,%eax,4), %ecx
	addl	G, %ecx
	movl	4(%ecx), %edx
	cmpl	8(%ecx), %edx
	je	.L20
	testl	%edx, %edx
	je	.L21
	movl	-28(%ebp), %eax
	movl	%eax, (%edx)
.L21:
	leal	4(%edx), %eax
	movl	%eax, 4(%ecx)
.L22:
	movl	-28(%ebp), %eax
	addl	$1, %eax
	cmpl	%eax, -20(%ebp)
	movl	%eax, -28(%ebp)
	jg	.L23
	movl	-16(%ebp), %eax
	testl	%eax, %eax
	jne	.L24
.L31:
	addl	$28, %esp
	popl	%ecx
	popl	%ebx
	popl	%esi
	popl	%ebp
	leal	-4(%ecx), %esp
	ret
.L20:
	movl	%esi, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%ecx, (%esp)
	call	_ZNSt6vectorIiSaIiEE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPiS1_EERKi
	jmp	.L22
.LFE575:
	.size	main, .-main
.globl G
	.bss
	.align 4
	.type	G, @object
	.size	G, 4
G:
	.zero	4
	.section	.eh_frame,"a",@progbits
.Lframe1:
	.long	.LECIE1-.LSCIE1
.LSCIE1:
	.long	0x0
	.byte	0x1
.globl __gxx_personality_v0
	.string	"zP"
	.uleb128 0x1
	.sleb128 -4
	.byte	0x8
	.uleb128 0x5
	.byte	0x0
	.long	__gxx_personality_v0
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x88
	.uleb128 0x1
	.align 4
.LECIE1:
.LSFDE1:
	.long	.LEFDE1-.LASFDE1
.LASFDE1:
	.long	.LASFDE1-.Lframe1
	.long	.LFB598
	.long	.LFE598-.LFB598
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI0-.LFB598
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI3-.LCFI1
	.byte	0x87
	.uleb128 0x3
	.byte	0x4
	.long	.LCFI4-.LCFI3
	.byte	0x86
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI5-.LCFI4
	.byte	0x83
	.uleb128 0x5
	.align 4
.LEFDE1:
.LSFDE3:
	.long	.LEFDE3-.LASFDE3
.LASFDE3:
	.long	.LASFDE3-.Lframe1
	.long	.LFB575
	.long	.LFE575-.LFB575
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI6-.LFB575
	.byte	0xc
	.uleb128 0x1
	.uleb128 0x0
	.byte	0x9
	.uleb128 0x4
	.uleb128 0x1
	.byte	0x4
	.long	.LCFI7-.LCFI6
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI8-.LCFI7
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI9-.LCFI8
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI12-.LCFI9
	.byte	0x84
	.uleb128 0x5
	.byte	0x83
	.uleb128 0x4
	.byte	0x86
	.uleb128 0x3
	.align 4
.LEFDE3:
	.ident	"GCC: (Gentoo 4.3.3-r2 p1.1, pie-10.1.5) 4.3.3"
	.section	.note.GNU-stack,"",@progbits
