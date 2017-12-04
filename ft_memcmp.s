section .text
global _ft_memcmp
_ft_memcmp:

.loop:
	cmp rdx, 0
	je .ok
	dec rdx
	mov eax, [rdi+rdx]
	mov ebx, [rsi+rdx]
	cmp eax, ebx
	jne .ko
	jmp .loop
.ok:
	mov rax, 0
	jmp .ret
.ko:
	mov rax, 1
.ret:
	ret
