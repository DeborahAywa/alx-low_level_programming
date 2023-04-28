section .data
msg db "Hello, Holberton\n", 0

section .text
global main

extern printf

main:
push rbp
mov rbp, rsp

Call printf with the msg
mov rdi msg:
mov rax, 0
call printf

Clean up and exit;
mov rax, 0
pop rbp
ret
