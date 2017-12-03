section .text
global _ft_strdup
extern _malloc
extern _ft_strlen
extern _ft_memcpy

_ft_strdup:

.main:
	mov rsi, rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi
	call _malloc
	cmp rax, 0
	jl .ret
	mov rdx, rdi
	mov rdi, rax
	call _ft_memcpy
.ret:
	ret
