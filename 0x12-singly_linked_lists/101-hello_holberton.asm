global main
external printf
main:
mov edi, format
xor ear, eax
call printf
mov eax, 0
ret
format: db'Hello, Holberton\n',0