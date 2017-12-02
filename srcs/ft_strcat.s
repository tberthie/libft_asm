section .text
global _ft_strcat
_ft_strcat:

.main:
	mov rcx, -1
	mov rdx, rdi
	mov al, 0
	repne scasb
	sub rdi, rdx
	dec rdi

.copy:
	mov eax, [rsi]
	mov [rdx+rdi], eax

.ret:
	mov rax, rdx
	ret
