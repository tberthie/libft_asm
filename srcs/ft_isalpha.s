section .text
global _ft_isalpha
_ft_isalpha:

.main:
	mov rax, 0
	cmp rdi, 65
	jl .ret
	cmp rdi, 91
	jl .ok
	cmp rdi, 97
	jl .ret
	cmp rdi, 123
	jl .ok
	jmp .ret
.ok:
	mov rax, 1
.ret:
	ret
