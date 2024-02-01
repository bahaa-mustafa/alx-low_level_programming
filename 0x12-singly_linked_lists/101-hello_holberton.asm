section		.text
	extern	printf
	global	main
main:
	mov		edi, view
	mov		eax, 0
	call	printf

section		.data
	view db 'Hello, Holberton', 0xa, 0
