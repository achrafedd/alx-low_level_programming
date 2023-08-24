section .data
helloMessage db "Hello, Holberton\n", 0

section .text
extern printf
global _start

_start:
    ; Setup for printf
    mov rdi, helloMessage  ; First argument (format string)
    xor rax, rax           ; Clear rax (printf's way of counting SSE registers used for floating point arguments)
    call printf

    ; Exit the program
    mov rax, 60           ; syscall: exit
    xor rdi, rdi          ; status = 0
    syscall
