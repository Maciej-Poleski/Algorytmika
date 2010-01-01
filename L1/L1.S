	.file	"L1.cpp"
.globl MAX_SIZE
	.bss
	.align 8
	.type	MAX_SIZE, @object
	.size	MAX_SIZE, 8
MAX_SIZE:
	.zero	8
.globl sito
	.align 8
	.type	sito, @object
	.size	sito, 8
sito:
	.zero	8
.globl prime
	.align 8
	.type	prime, @object
	.size	prime, 8
prime:
	.zero	8
.globl pc
	.align 4
	.type	pc, @object
	.size	pc, 4
pc:
	.zero	4
	.text
.globl _Z3powxi
	.type	_Z3powxi, @function
_Z3powxi:
.LFB451:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movq	$1, -16(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movq	-16(%rbp), %rax
	imulq	-24(%rbp), %rax
	movq	%rax, -16(%rbp)
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	setl	%al
	testb	%al, %al
	jne	.L3
	movq	-16(%rbp), %rax
	leave
	ret
	.cfi_endproc
.LFE451:
	.size	_Z3powxi, .-_Z3powxi
	.section	.rodata
.LC0:
	.string	"%d"
.LC1:
	.string	"%lld"
.LC3:
	.string	"1 0"
.LC4:
	.string	"%lld %d\n"
.globl _Unwind_Resume
	.text
.globl main
	.type	main, @function
main:
.LFB452:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA452
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$104, %rsp
	movq	%rsp, %rax
	movq	%rax, %rbx
	.cfi_offset 3, -24
	leaq	-108(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
.LEHB0:
	call	scanf
	movl	-108(%rbp), %eax
	cltq
	subq	$1, %rax
	movq	%rax, -104(%rbp)
	addq	$1, %rax
	salq	$3, %rax
	addq	$15, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$15, %rax
	shrq	$4, %rax
	salq	$4, %rax
	movq	%rax, -96(%rbp)
	movl	$0, -84(%rbp)
	jmp	.L6
.L8:
	movq	-96(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx,%rdx
	salq	$3, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	scanf
	movl	-84(%rbp), %edx
	movq	-96(%rbp), %rax
	movslq	%edx,%rdx
	movq	(%rax,%rdx,8), %rdx
	movq	MAX_SIZE(%rip), %rax
	cmpq	%rax, %rdx
	jle	.L7
	movl	-84(%rbp), %edx
	movq	-96(%rbp), %rax
	movslq	%edx,%rdx
	movq	(%rax,%rdx,8), %rax
	movq	%rax, MAX_SIZE(%rip)
.L7:
	addl	$1, -84(%rbp)
.L6:
	movl	-108(%rbp), %eax
	cmpl	%eax, -84(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L8
	movq	MAX_SIZE(%rip), %rax
	cvtsi2sdq	%rax, %xmm1
	sqrtsd	%xmm1, %xmm0
	ucomisd	%xmm0, %xmm0
	jp	.L46
	je	.L9
.L46:
	movapd	%xmm1, %xmm0
	call	sqrt
.L9:
	movapd	%xmm0, %xmm1
	movsd	.LC2(%rip), %xmm0
	addsd	%xmm1, %xmm0
	cvttsd2siq	%xmm0, %rax
	movq	%rax, MAX_SIZE(%rip)
	movq	MAX_SIZE(%rip), %rax
	addq	$5, %rax
	movq	%rax, %rdi
	call	_Znam
	movq	%rax, sito(%rip)
	movq	MAX_SIZE(%rip), %rax
	addq	$5, %rax
	movq	%rax, %rdx
	movq	sito(%rip), %rax
	movl	$0, %esi
	movq	%rax, %rdi
	call	memset
	movl	$3, -80(%rbp)
	jmp	.L10
.L16:
	movq	sito(%rip), %rdx
	movl	-80(%rbp), %eax
	cltq
	leaq	(%rdx,%rax), %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L43
.L11:
	movl	pc(%rip), %eax
	addl	$1, %eax
	movl	%eax, pc(%rip)
	movl	-80(%rbp), %eax
	movslq	%eax,%rdx
	movl	-80(%rbp), %eax
	cltq
	imulq	%rax, %rdx
	movq	MAX_SIZE(%rip), %rax
	cmpq	%rax, %rdx
	jg	.L44
.L13:
	movl	-80(%rbp), %eax
	imull	-80(%rbp), %eax
	movl	%eax, -76(%rbp)
	jmp	.L14
.L15:
	movq	sito(%rip), %rdx
	movl	-76(%rbp), %eax
	cltq
	leaq	(%rdx,%rax), %rax
	movb	$1, (%rax)
	movl	-80(%rbp), %eax
	addl	%eax, -76(%rbp)
.L14:
	movl	-76(%rbp), %eax
	movslq	%eax,%rdx
	movq	MAX_SIZE(%rip), %rax
	cmpq	%rax, %rdx
	setle	%al
	testb	%al, %al
	jne	.L15
	jmp	.L12
.L43:
	nop
	jmp	.L12
.L44:
	nop
.L12:
	addl	$2, -80(%rbp)
.L10:
	movl	-80(%rbp), %eax
	movslq	%eax,%rdx
	movq	MAX_SIZE(%rip), %rax
	cmpq	%rax, %rdx
	setle	%al
	testb	%al, %al
	jne	.L16
	movl	pc(%rip), %eax
	addl	$2, %eax
	cltq
	salq	$2, %rax
	movq	%rax, %rdi
	call	_Znam
	movq	%rax, prime(%rip)
	movq	prime(%rip), %rax
	movq	%rax, -72(%rbp)
	movq	-72(%rbp), %rax
	movl	$2, (%rax)
	addq	$4, -72(%rbp)
	movl	$3, -64(%rbp)
	jmp	.L17
.L19:
	movq	sito(%rip), %rdx
	movl	-64(%rbp), %eax
	cltq
	leaq	(%rdx,%rax), %rax
	movzbl	(%rax), %eax
	xorl	$1, %eax
	testb	%al, %al
	je	.L18
	movq	-72(%rbp), %rax
	movl	-64(%rbp), %edx
	movl	%edx, (%rax)
	addq	$4, -72(%rbp)
.L18:
	addl	$2, -64(%rbp)
.L17:
	movl	-64(%rbp), %eax
	movslq	%eax,%rdx
	movq	MAX_SIZE(%rip), %rax
	cmpq	%rax, %rdx
	setle	%al
	testb	%al, %al
	jne	.L19
	movq	-72(%rbp), %rax
	movl	$100000007, (%rax)
	addq	$4, -72(%rbp)
	movq	sito(%rip), %rax
	testq	%rax, %rax
	je	.L20
	movq	sito(%rip), %rax
	movq	%rax, %rdi
	call	_ZdaPv
.L20:
	movl	$0, -60(%rbp)
	jmp	.L21
.L38:
	movq	$1, -40(%rbp)
	movl	$0, -112(%rbp)
	movl	-60(%rbp), %edx
	movq	-96(%rbp), %rax
	movslq	%edx,%rdx
	movq	(%rax,%rdx,8), %rax
	movq	%rax, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, -48(%rbp)
	cmpq	$1, -56(%rbp)
	jne	.L24
	movl	$.LC3, %edi
	call	puts
	jmp	.L23
.L25:
	movl	-112(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -112(%rbp)
	sarq	-56(%rbp)
.L24:
	movq	-56(%rbp), %rax
	andl	$1, %eax
	testq	%rax, %rax
	sete	%al
	testb	%al, %al
	jne	.L25
	movl	-112(%rbp), %eax
	testl	%eax, %eax
	jle	.L26
	movl	-112(%rbp), %eax
	movl	$1, %edx
	movq	%rdx, %rsi
	movl	%eax, %ecx
	salq	%cl, %rsi
	movl	-112(%rbp), %eax
	subl	$1, %eax
	movl	$1, %edx
	movq	%rdx, %rdi
	movl	%eax, %ecx
	salq	%cl, %rdi
	movq	%rdi, %rax
	movq	%rsi, %rdx
	subq	%rax, %rdx
	movq	%rdx, %rax
	movq	%rax, -40(%rbp)
.L26:
	movl	$1, -24(%rbp)
	jmp	.L27
.L34:
	movl	$0, -112(%rbp)
	movq	prime(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx,%rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -20(%rbp)
	jmp	.L28
.L29:
	movl	-112(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -112(%rbp)
	movl	-20(%rbp), %eax
	movslq	%eax,%rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rcx
	movq	%rax, %rdx
	sarq	$63, %rdx
	idivq	%rcx
	movq	%rax, -56(%rbp)
.L28:
	movl	-20(%rbp), %eax
	movslq	%eax,%rdx
	movq	-56(%rbp), %rax
	movq	%rdx, %rdi
	movq	%rax, %rdx
	sarq	$63, %rdx
	idivq	%rdi
	movq	%rdx, %rax
	testq	%rax, %rax
	sete	%al
	testb	%al, %al
	jne	.L29
	movl	-112(%rbp), %eax
	testl	%eax, %eax
	je	.L45
.L30:
	movl	-112(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-20(%rbp), %eax
	cltq
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_Z3powxi
	movl	-20(%rbp), %edx
	subl	$1, %edx
	movslq	%edx,%rdx
	imulq	%rdx, %rax
	movq	-40(%rbp), %rdx
	imulq	%rdx, %rax
	movq	%rax, -40(%rbp)
	jmp	.L31
.L45:
	nop
.L31:
	addl	$1, -24(%rbp)
.L27:
	movq	prime(%rip), %rax
	movl	-24(%rbp), %edx
	movslq	%edx,%rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movq	prime(%rip), %rax
	movl	-24(%rbp), %ecx
	movslq	%ecx,%rcx
	salq	$2, %rcx
	addq	%rcx, %rax
	movl	(%rax), %eax
	imull	%edx, %eax
	cltq
	cmpq	-56(%rbp), %rax
	jg	.L32
	movl	pc(%rip), %eax
	cmpl	%eax, -24(%rbp)
	jg	.L32
	movl	$1, %eax
	jmp	.L33
.L32:
	movl	$0, %eax
.L33:
	testb	%al, %al
	jne	.L34
	cmpq	$1, -56(%rbp)
	jle	.L35
	movq	-56(%rbp), %rax
	leaq	-1(%rax), %rdx
	movq	-40(%rbp), %rax
	imulq	%rdx, %rax
	movq	%rax, -40(%rbp)
.L35:
	cvtsi2sdq	-48(%rbp), %xmm0
	call	sqrt
	cvttsd2si	%xmm0, %eax
	movl	%eax, -112(%rbp)
	movq	prime(%rip), %rax
	movl	pc(%rip), %edx
	movslq	%edx,%rdx
	addq	$1, %rdx
	salq	$2, %rdx
	leaq	(%rax,%rdx), %rcx
	movq	prime(%rip), %rax
	leaq	-112(%rbp), %rdx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt11lower_boundIPiiET_S1_S1_RKT0_
	movq	%rax, %rdx
	movq	prime(%rip), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$2, %rax
	movl	%eax, -28(%rbp)
	movq	prime(%rip), %rax
	movl	-28(%rbp), %edx
	movslq	%edx,%rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-112(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L36
	movl	-28(%rbp), %eax
	addl	$1, %eax
	jmp	.L37
.L36:
	movl	-28(%rbp), %eax
.L37:
	movq	-40(%rbp), %rcx
	movl	%eax, %edx
	movq	%rcx, %rsi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
.LEHE0:
.L23:
	addl	$1, -60(%rbp)
.L21:
	movl	-108(%rbp), %eax
	cmpl	%eax, -60(%rbp)
	setl	%al
	testb	%al, %al
	jne	.L38
	movq	prime(%rip), %rax
	testq	%rax, %rax
	je	.L39
	movq	prime(%rip), %rax
	movq	%rax, %rdi
	call	_ZdaPv
.L39:
	movl	$0, %eax
	movq	%rbx, %rsp
	movq	-8(%rbp), %rbx
	leave
	ret
.L42:
.L40:
	movq	%rbx, %rsp
	movslq	%edx,%rdx
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
	.cfi_endproc
.LFE452:
	.size	main, .-main
.globl __gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA452:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE452-.LLSDACSB452
.LLSDACSB452:
	.uleb128 .LEHB0-.LFB452
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L42-.LFB452
	.uleb128 0x0
	.uleb128 .LEHB1-.LFB452
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0x0
	.uleb128 0x0
.LLSDACSE452:
	.text
	.section	.text._ZSt11lower_boundIPiiET_S1_S1_RKT0_,"axG",@progbits,_ZSt11lower_boundIPiiET_S1_S1_RKT0_,comdat
	.weak	_ZSt11lower_boundIPiiET_S1_S1_RKT0_
	.type	_ZSt11lower_boundIPiiET_S1_S1_RKT0_, @function
_ZSt11lower_boundIPiiET_S1_S1_RKT0_:
.LFB453:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-48(%rbp), %rdx
	movq	-40(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
	movq	%rax, -16(%rbp)
	jmp	.L48
.L50:
	movq	-16(%rbp), %rax
	sarq	%rax
	movq	%rax, -8(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-8(%rbp), %rdx
	leaq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt7advanceIPilEvRT_T0_
	movq	-24(%rbp), %rax
	movl	(%rax), %edx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L49
	movq	-24(%rbp), %rax
	movq	%rax, -40(%rbp)
	addq	$4, -40(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	subq	$1, %rax
	movq	%rax, -16(%rbp)
	jmp	.L48
.L49:
	movq	-8(%rbp), %rax
	movq	%rax, -16(%rbp)
.L48:
	cmpq	$0, -16(%rbp)
	setg	%al
	testb	%al, %al
	jne	.L50
	movq	-40(%rbp), %rax
	leave
	ret
	.cfi_endproc
.LFE453:
	.size	_ZSt11lower_boundIPiiET_S1_S1_RKT0_, .-_ZSt11lower_boundIPiiET_S1_S1_RKT0_
	.section	.text._ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_,"axG",@progbits,_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_,comdat
	.weak	_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
	.type	_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_, @function
_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_:
.LFB454:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	leaq	-24(%rbp), %rax
	movq	%rax, %rdi
	.cfi_offset 3, -24
	call	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	movq	-24(%rbp), %rax
	movq	-32(%rbp), %rdx
	movb	%bl, (%rsp)
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
	addq	$40, %rsp
	popq	%rbx
	leave
	ret
	.cfi_endproc
.LFE454:
	.size	_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_, .-_ZSt8distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_
	.section	.text._ZSt7advanceIPilEvRT_T0_,"axG",@progbits,_ZSt7advanceIPilEvRT_T0_,comdat
	.weak	_ZSt7advanceIPilEvRT_T0_
	.type	_ZSt7advanceIPilEvRT_T0_, @function
_ZSt7advanceIPilEvRT_T0_:
.LFB455:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -24(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, %rdi
	.cfi_offset 3, -24
	call	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	movq	-24(%rbp), %rdx
	movq	-40(%rbp), %rax
	movb	%bl, (%rsp)
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
	addq	$56, %rsp
	popq	%rbx
	leave
	ret
	.cfi_endproc
.LFE455:
	.size	_ZSt7advanceIPilEvRT_T0_, .-_ZSt7advanceIPilEvRT_T0_
	.section	.text._ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_,"axG",@progbits,_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_,comdat
	.weak	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	.type	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_, @function
_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_:
.LFB456:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leave
	ret
	.cfi_endproc
.LFE456:
	.size	_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_, .-_ZSt19__iterator_categoryIPiENSt15iterator_traitsIT_E17iterator_categoryERKS2_
	.section	.text._ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag,"axG",@progbits,_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag,comdat
	.weak	_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
	.type	_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag, @function
_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag:
.LFB457:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, %rcx
	subq	%rax, %rcx
	movq	%rcx, %rax
	sarq	$2, %rax
	leave
	ret
	.cfi_endproc
.LFE457:
	.size	_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag, .-_ZSt10__distanceIPiENSt15iterator_traitsIT_E15difference_typeES2_S2_St26random_access_iterator_tag
	.section	.text._ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag,"axG",@progbits,_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag,comdat
	.weak	_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
	.type	_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag, @function
_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag:
.LFB458:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	pushq	%rbp
	.cfi_def_cfa_offset 16
	movq	%rsp, %rbp
	.cfi_offset 6, -16
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	-16(%rbp), %rdx
	salq	$2, %rdx
	leaq	(%rax,%rdx), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	leave
	ret
	.cfi_endproc
.LFE458:
	.size	_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag, .-_ZSt9__advanceIPilEvRT_T0_St26random_access_iterator_tag
	.section	.rodata
	.align 8
.LC2:
	.long	0
	.long	1073741824
	.ident	"GCC: (Gentoo 4.4.2 p1.0) 4.4.2"
	.section	.note.GNU-stack,"",@progbits
