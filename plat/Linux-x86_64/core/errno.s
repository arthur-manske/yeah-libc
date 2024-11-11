.section .tbss,"awT",@nobits
.type  errno, @object
.size  errno, 4
.globl errno
errno: .long  0

.section .text
.globl __errno_location
__errno_location:
	movq %fs:errno@tpoff,%rax
	ret
