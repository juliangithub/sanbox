	.file	"process.c"
	.section	.rodata
.LC0:
	.string	"pid:%d  addr: %p  num: %d\n"
	.align 8
.LC1:
	.string	"pid:%d  addr: %p  num: %d <<<<\n"
	.text
	.globl	static_stack
	.type	static_stack, @function
static_stack:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	%edi, -20(%rbp)
	movl	num.3407(%rip), %ebx
	call	getpid
	movl	%ebx, %ecx
	movl	$num.3407, %edx
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	num.3407(%rip), %edx
	movl	-20(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, num.3407(%rip)
	movl	num.3407(%rip), %ebx
	call	getpid
	movl	%ebx, %ecx
	movl	$num.3407, %edx
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	nop
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	static_stack, .-static_stack
	.section	.rodata
.LC2:
	.string	"%d\n"
.LC3:
	.string	"fork"
.LC4:
	.string	"============================"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	call	getpid
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	call	fork
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L3
	movl	$.LC3, %edi
	call	perror
	jmp	.L4
.L3:
	cmpl	$0, -4(%rbp)
	jne	.L5
	movl	$2, %edi
	call	static_stack
	movl	$2, %edi
	call	static_stack
	movl	$2, %edi
	call	static_stack
	movl	$2, %edi
	call	static_stack
	movl	$0, %edi
	call	exit
.L5:
	movl	$2, %edi
	call	sleep
	movl	$1, %edi
	call	static_stack
	movl	$1, %edi
	call	static_stack
	movl	$1, %edi
	call	static_stack
	movl	$1, %edi
	call	static_stack
.L4:
	movl	$.LC4, %edi
	call	puts
	call	getpid
	movl	%eax, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	call	fork
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jns	.L6
	movl	$.LC3, %edi
	call	perror
	jmp	.L7
.L6:
	cmpl	$0, -4(%rbp)
	jne	.L8
	movl	$5, %edi
	call	static_stack
	movl	$5, %edi
	call	static_stack
	movl	$5, %edi
	call	static_stack
	movl	$5, %edi
	call	static_stack
	movl	$5, %edi
	call	static_stack
	movl	$5, %edi
	call	static_stack
	movl	$0, %edi
	call	exit
.L8:
	movl	$2, %edi
	call	sleep
	movl	$2, %edi
	call	static_stack
	movl	$2, %edi
	call	static_stack
	movl	$2, %edi
	call	static_stack
	movl	$2, %edi
	call	static_stack
.L7:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.local	num.3407
	.comm	num.3407,4,4
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
