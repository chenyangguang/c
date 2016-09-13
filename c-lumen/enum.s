	.file	"enum.c"
	.section	.rodata
.LC0:
	.string	"%d"
.LC1:
	.string	"Monday"
.LC2:
	.string	"Tuesday"
.LC3:
	.string	"Wednesday"
.LC4:
	.string	"Thursday"
.LC5:
	.string	"Friday"
.LC6:
	.string	"Saturday"
.LC7:
	.string	"Sunday"
.LC8:
	.string	"Error!"
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
	subq	$16, %rsp
	leaq	-4(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	scanf
	movl	-4(%rbp), %eax
	cmpl	$7, %eax
	ja	.L2
	movl	%eax, %eax
	movq	.L4(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L2
	.quad	.L3
	.quad	.L5
	.quad	.L6
	.quad	.L7
	.quad	.L8
	.quad	.L9
	.quad	.L10
	.text
.L3:
	movl	$.LC1, %edi
	call	puts
	jmp	.L11
.L5:
	movl	$.LC2, %edi
	call	puts
	jmp	.L11
.L6:
	movl	$.LC3, %edi
	call	puts
	jmp	.L11
.L7:
	movl	$.LC4, %edi
	call	puts
	jmp	.L11
.L8:
	movl	$.LC5, %edi
	call	puts
	jmp	.L11
.L9:
	movl	$.LC6, %edi
	call	puts
	jmp	.L11
.L10:
	movl	$.LC7, %edi
	call	puts
	jmp	.L11
.L2:
	movl	$.LC8, %edi
	call	puts
.L11:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.1) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
