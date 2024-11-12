.section .data
.globl environ
.comm environ, 8
.type environ, @object
environ: .quad 0
.equ __environ, environ
.globl __environ 
