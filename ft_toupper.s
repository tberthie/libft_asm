section .text
global _ft_toupper
_ft_toupper:

.main:
	mov rax, rdi

	cmp rdi, 97
	jl .ret
	cmp rdi, 123
	jl .ok
	jmp .ret
.ok:
	sub rax, 32
.ret:
	ret
