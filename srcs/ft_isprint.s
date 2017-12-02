section .text
global _ft_isprint
_ft_isprint:

.main:
	mov rax, 0
	cmp rdi, 40
	jl .ret
	cmp rdi, 177
	jl .ok
	jmp .ret
.ok:
	mov rax, 1
.ret:
	ret
