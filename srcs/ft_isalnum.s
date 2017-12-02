section .text
global _ft_isalnum
extern _ft_isdigit
extern _ft_isalpha

_ft_isalnum:

.main:
	call _ft_isdigit
	mov rdx, rax
	call _ft_isalpha
	or rdx, rax
	mov rax, rdx
.ret:
	ret
