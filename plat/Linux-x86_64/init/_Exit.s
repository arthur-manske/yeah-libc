.section .text
.equ _Exit, _exit
_exit:
	movq $231, %rax
	syscall
	movq $60, %rax
	syscall
	jmp _exit
