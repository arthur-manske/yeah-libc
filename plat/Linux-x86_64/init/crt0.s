.section .text
.globl _start

_start:
	xorq %rbp, %rbp
	movq %rsp, %rdi

	leaq (%rip), %rsi
	andq $-16, %rsp

	call _start_c
