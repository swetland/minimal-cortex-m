
.syntax unified

.thumb
.section .text
.align 2

.thumb_func
.type sh_call, %function
.globl sh_call
sh_call:
    bkpt #0xAB
    bx lr
