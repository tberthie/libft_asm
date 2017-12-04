section .text
global _ft_strchr
_ft_strchr :

.main:
	mov rcx, 0
	lea ecx, [rsi]
.loop:
	mov eax, [rdi+rcx]
	cmp eax, ecx
	je .ok
	cmp eax, 0
	je .ko
	inc rcx
	jmp .loop
.ko:
	mov rax, 0
	jmp .ret
.ok:
	mov rax, [rdi+rcx]
.ret:
	ret
