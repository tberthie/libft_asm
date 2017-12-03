section .text
global _ft_strdup
extern _malloc

_ft_strdup:

.main:
	mov rdi, 10
	call _malloc
.ret:
	ret
