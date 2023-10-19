section .data
hello db "Hello, Holberton",10  ; The string to be printed, followed by a newline character

section .text
global main

extern printf

main:
; Prepare the arguments for printf
mov rdi, hello  ; The format string
xor rax, rax   ; Clear RAX (no floating-point parameters)
call printf    ; Call printf

; Exit the program
mov rax, 60     ; syscall number for exit (60)
xor rdi, rdi    ; Status code, 0 in this case
syscall
