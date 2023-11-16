section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0

section .text
    global main

    extern printf

main:
    ; Call printf function
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Exit the program
    mov rax, 60                 ; syscall number for sys_exit
    xor rdi, rdi                ; exit code 0
    syscall
