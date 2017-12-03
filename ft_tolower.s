section .text
global _ft_tolower
_ft_tolower:

.main:
	mov rax, rdi

	cmp rdi, 65
	jl .ret
	cmp rdi, 91
	jl .ok
	jmp .ret
.ok:
	add rax, 32
.ret:
	ret
