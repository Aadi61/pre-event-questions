	.file	"file.c"
	.text
	.section	.rodata
.LC0:
	.string	"%p "
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$72, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movabsq	$3709669182270562672, %rax
	movabsq	$7160569833236018529, %rdx
	movq	%rax, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movabsq	$3991138647997114677, %rax
	movabsq	$35309937440808806, %rdx
	movq	%rax, -55(%rbp)
	movq	%rdx, -47(%rbp)
	movl	$0, -68(%rbp)
	jmp	.L2
.L3:
	movl	-68(%rbp), %eax
	cltq
	movzbl	-64(%rbp,%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -68(%rbp)
.L2:
	movl	-68(%rbp), %eax
	movslq	%eax, %rbx
	leaq	-64(%rbp), %rax
	movq	%rax, %rdi
	call	strlen@PLT
	cmpq	%rax, %rbx
	jb	.L3
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	movq	-24(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
