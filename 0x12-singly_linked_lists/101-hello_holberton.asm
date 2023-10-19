section .data
	hello db "Hello, Holberton", 0 ; Null-terminated string

section .text
    global main

    extern printf
    global _start

_start:
    push rbp        ; Prologue
    mov rdi, hello  ; Format string
    call printf     ; Call printf
    add rsp, 8      ; Clean up the stack (printf uses XMM registers)
    pop rbp         ; Epilogue

    ; Exit the program
    mov rax, 60     ; syscall number for exit
    xor rdi, rdi    ; Exit status (0)
    syscall

main:
    ; No need to do anything in the main function

section .bss
	res resq 1
