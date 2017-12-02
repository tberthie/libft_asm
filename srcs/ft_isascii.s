section .text
global _ft_isascii
_ft_isascii:

.main:
	mov rax, 0
	cmp rdi, 0
	jl .ret
	cmp rdi, 128
	jl .ok
	jmp .ret
.ok:
	mov rax, 1
.ret:
	ret
