section .text
global _ft_memcmp
_ft_memcmp:

.main:
	mov rcx, rdx
.loop:
	cmp rcx, 0
	jl .ok
	mov eax, [rdi+rcx]
	mov ebx, [rsi+rcx]
	cmp eax, ebx
	jne .ko
	dec rcx
	jmp .loop
.ok:
	mov rax, 1
	jmp .ret
.ko:
	mov rax, 0
.ret:
	ret
