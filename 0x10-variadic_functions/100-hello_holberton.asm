	extern printf

	section .data
str:	db "Hello, Holberton", 0ah, 0dh

	section .text

	global main
main:
	mov eax,4
	mov ebx,1
	mov ecx,str
	mov edx,18
	int 80h
	mov eax,1
	int 80h
