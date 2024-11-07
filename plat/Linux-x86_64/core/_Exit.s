.section .text
.equ _Exit, _exit
_exit:
	movq $231, %rax
	syscall
.L0:	movq $60, %rax
	syscall
	jmp .L0
