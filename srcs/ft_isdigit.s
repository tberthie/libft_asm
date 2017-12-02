section .text
global _ft_isdigit
_ft_isdigit:

.main:
	mov rax, 0
	cmp rdi, 48
	jl .ret
	cmp rdi, 58
	jl .ok
	jmp .ret
.ok:
	mov rax, 1
.ret:
	ret
