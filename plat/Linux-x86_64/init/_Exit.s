.section .text
.globl sys_exit

.equ _Exit, _exit
.equ sys_exit_group, _exit

.globl _Exit
.globl _exit

_exit:
	movq $231, %rax
	syscall
sys_exit:
	movq $60, %rax
	syscall
	jmp _exit
