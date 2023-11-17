section .data
    hello_msg db "Hello, Holberton", 10, 0 ; Message to be printed with a newline character (\n)

section .text
    extern printf   ; Declare the printf function from the C library

global _start
_start:
    ; Set up arguments to call printf
    mov rdi, hello_msg  ; Load the address of the message
    xor rax, rax        ; Clear rax register to indicate no SIMD registers used (XMM0-XMM15)
    call printf         ; Call printf function

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor edi, edi        ; Exit code 0
    syscall
