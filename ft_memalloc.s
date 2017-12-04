section .text
global _ft_memalloc
extern _ft_memset
extern _malloc

_ft_memalloc:

.main:
	push rdi
	call _malloc
	pop rdi
	mov rdx, rdi
	mov rdi, rax
	mov rsi, 0
	call _ft_memset
	ret
