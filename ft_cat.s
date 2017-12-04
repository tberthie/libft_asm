%define SYSCALL(nb)		0x2000000 | nb
%define READ			3
%define WRITE			4
%define BUFF_SIZE		11

section .data
	buffer	times BUFF_SIZE db 0

section .text
global _ft_cat
extern _ft_puts

_ft_cat:

.main:
	cmp rdi, 0
	jl .ret
	mov r9, rdi

.read:
	mov rdi, r9
	mov rax, SYSCALL(READ)
	lea rsi, [rel buffer]
	mov rdx, BUFF_SIZE
	dec rdx
	syscall
	cmp rax, 0
	jl .ret
	mov rdi, 1
	mov rdx, rax
	lea rsi, [rel buffer]
	mov r10, rax
	mov rax, SYSCALL(WRITE)
	syscall
	cmp r10, 1
	jl .ret
	jmp .read
.ret:
	ret
