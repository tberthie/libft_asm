%define SYSCALL(nb)		0x2000000 | nb
%define READ			3
%define OPEN			5
%define CLOSE			6

section .text
global _ft_cat
_ft_cat:

.main:
	
