	.file	"q1.cpp"
	.text
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
	.section	.text$getchar,"x"
	.linkonce discard
	.globl	_getchar
	.def	_getchar;	.scl	2;	.type	32;	.endef
_getchar:
LFB891:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	__imp___iob, %eax
	movl	4(%eax), %eax
	leal	-1(%eax), %edx
	movl	__imp___iob, %eax
	movl	%edx, 4(%eax)
	movl	__imp___iob, %eax
	movl	4(%eax), %eax
	testl	%eax, %eax
	js	L2
	movl	__imp___iob, %eax
	movl	(%eax), %eax
	leal	1(%eax), %ecx
	movl	__imp___iob, %edx
	movl	%ecx, (%edx)
	movzbl	(%eax), %eax
	movzbl	%al, %eax
	jmp	L4
L2:
	movl	__imp___iob, %eax
	movl	%eax, (%esp)
	call	__filbuf
L4:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE891:
.lcomm __ZStL8__ioinit,1,1
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter three x,y coordinates:\0"
LC1:
	.ascii "The coordinates are: \0"
LC3:
	.ascii "The shortest distance for (\0"
LC4:
	.ascii ",\0"
LC5:
	.ascii ") to the line composed of (\0"
LC6:
	.ascii ") and (\0"
LC7:
	.ascii ") is \0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1726:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$196, %esp
	call	___main
	movl	$LC0, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	movl	$0, -12(%ebp)
L8:
	call	_getchar
	movl	%eax, -28(%ebp)
	cmpl	$10, -28(%ebp)
	setne	%al
	testb	%al, %al
	je	L6
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	leal	-120(%ebp), %edx
	movl	-12(%ebp), %eax
	addl	%edx, %eax
	movb	%cl, (%eax)
	addl	$1, -12(%ebp)
	cmpl	$31, -12(%ebp)
	je	L19
	jmp	L8
L19:
	nop
L6:
	leal	-120(%ebp), %edx
	movl	-12(%ebp), %eax
	addl	%edx, %eax
	movb	$0, (%eax)
	movl	$LC1, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-120(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	movzbl	-120(%ebp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -128(%ebp)
	movzbl	-118(%ebp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -124(%ebp)
	movzbl	-116(%ebp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -136(%ebp)
	movzbl	-114(%ebp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -132(%ebp)
	movzbl	-112(%ebp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -144(%ebp)
	movzbl	-110(%ebp), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -140(%ebp)
	movl	-136(%ebp), %edx
	movl	-128(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -152(%ebp)
	movl	-132(%ebp), %edx
	movl	-124(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -148(%ebp)
	movl	-144(%ebp), %edx
	movl	-136(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -160(%ebp)
	movl	-140(%ebp), %edx
	movl	-132(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -156(%ebp)
	movl	-144(%ebp), %edx
	movl	-128(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -168(%ebp)
	movl	-140(%ebp), %edx
	movl	-124(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -164(%ebp)
	movl	-152(%ebp), %edx
	movl	-160(%ebp), %eax
	imull	%eax, %edx
	movl	-148(%ebp), %ecx
	movl	-156(%ebp), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fstpl	-40(%ebp)
	movl	-152(%ebp), %edx
	movl	-168(%ebp), %eax
	imull	%eax, %edx
	movl	-148(%ebp), %ecx
	movl	-164(%ebp), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fstpl	-48(%ebp)
	fldl	-40(%ebp)
	ftst
	fnstsw	%ax
	fstp	%st(0)
	sahf
	jbe	L17
	movl	-144(%ebp), %edx
	movl	-136(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fstpl	-80(%ebp)
	movl	-140(%ebp), %edx
	movl	-132(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fstpl	-88(%ebp)
	fldl	-80(%ebp)
	fld	%st(0)
	fmulp	%st, %st(1)
	fldl	-88(%ebp)
	fmul	%st(0), %st
	faddp	%st, %st(1)
	fstpl	(%esp)
	call	_sqrt
	fstpl	-24(%ebp)
	jmp	L11
L17:
	fldz
	fcompl	-48(%ebp)
	fnstsw	%ax
	sahf
	jbe	L18
	movl	-144(%ebp), %edx
	movl	-128(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fstpl	-64(%ebp)
	movl	-140(%ebp), %edx
	movl	-124(%ebp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fstpl	-72(%ebp)
	fldl	-64(%ebp)
	fld	%st(0)
	fmulp	%st, %st(1)
	fldl	-72(%ebp)
	fmul	%st(0), %st
	faddp	%st, %st(1)
	fstpl	(%esp)
	call	_sqrt
	fstpl	-24(%ebp)
	jmp	L11
L18:
	movl	-152(%ebp), %edx
	movl	-152(%ebp), %eax
	imull	%eax, %edx
	movl	-148(%ebp), %ecx
	movl	-148(%ebp), %eax
	imull	%ecx, %eax
	addl	%edx, %eax
	movl	%eax, (%esp)
	call	__ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_
	fstpl	-56(%ebp)
	movl	-152(%ebp), %edx
	movl	-164(%ebp), %eax
	imull	%eax, %edx
	movl	-168(%ebp), %ecx
	movl	-152(%ebp), %eax
	imull	%ecx, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	cltd
	xorl	%edx, %eax
	subl	%edx, %eax
	movl	%eax, -172(%ebp)
	fildl	-172(%ebp)
	fdivl	-56(%ebp)
	fstpl	-24(%ebp)
L11:
	movl	$LC3, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%eax, %edx
	movl	-144(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC4, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%eax, %edx
	movl	-140(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC5, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%eax, %edx
	movl	-128(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC4, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%eax, %edx
	movl	-124(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC6, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%eax, %edx
	movl	-136(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC4, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%eax, %edx
	movl	-132(%ebp), %eax
	movl	%eax, (%esp)
	movl	%edx, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC7, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	fldl	-24(%ebp)
	fstpl	(%esp)
	movl	%eax, %ecx
	call	__ZNSolsEd
	subl	$8, %esp
	movl	$__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEPFRSoS_E
	subl	$4, %esp
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1726:
	.section	.text$_ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_,"x"
	.linkonce discard
	.globl	__ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_
	.def	__ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_;	.scl	2;	.type	32;	.endef
__ZSt4sqrtIiEN9__gnu_cxx11__enable_ifIXsrSt12__is_integerIT_E7__valueEdE6__typeES3_:
LFB1965:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	fildl	8(%ebp)
	fstpl	(%esp)
	call	_sqrt
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1965:
	.text
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB2206:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE2206:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB2205:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L25
	cmpl	$65535, 12(%ebp)
	jne	L25
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L25:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE2205:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB2207:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE2207:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC Build-2) 9.2.0"
	.def	__filbuf;	.scl	2;	.type	32;	.endef
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEPFRSoS_E;	.scl	2;	.type	32;	.endef
	.def	_sqrt;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEd;	.scl	2;	.type	32;	.endef
	.def	_sqrt;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
