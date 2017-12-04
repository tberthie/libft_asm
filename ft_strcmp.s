section .text
global _ft_strcmp
_ft_strcmp:

.main:
	mov rcx, 0
.loop:
	mov eax, [rdi+rcx]
	mov ebx, [rsi+rcx]
	cmp eax, ebx
	jne .ko
	cmp eax, 0
	je .ok
	inc rcx
	jmp .loop
.ok:
	mov rax, 0
	jmp .ret
.ko:
	mov rax, 1
.ret:
	ret
