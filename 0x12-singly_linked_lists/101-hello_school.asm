extern printf    ; The C function, to be called

section .data    ; Data section, initialized variables
msg:    db "Hello, Holberton", 0 ; C string needs a null terminator
fmt:    db "%s", 10, 0          ; The printf format, including newline and null terminator

section .text    ; Code section

global main      ; The standard GCC entry point

; Function: main
; ----------------------
; The main function that prints a message using printf.
; Returns: 0
main:             ; Program label for the entry point
    push rbp      ; Set up stack frame, must be aligned

    mov rdi, fmt  ; First argument: format string
    mov rsi, msg  ; Second argument: message string
    xor rax, rax  ; Clear RAX register (optional: can also use mov rax, 0)
    call printf   ; Call the printf function

    pop rbp       ; Restore stack

    mov rax, 0    ; Set RAX to 0 (return value)
    ret           ; Return
