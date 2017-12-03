section .text
global _ft_strdup
extern _ft_strlen
extern _ft_memcpy
extern _malloc

_ft_strdup:

.main:
	mov r13, rdi
	call _ft_strlen

	mov r14, rax
	mov rdi, rax
	inc rdi

	push rdi
	call _malloc
	pop rdi

	cmp rax, 0
	je .end
	mov byte [rax+r14], 0
	mov rdi, rax
	mov rsi, r13
	mov rdx, r14
	call _ft_memcpy

.end:
	ret
