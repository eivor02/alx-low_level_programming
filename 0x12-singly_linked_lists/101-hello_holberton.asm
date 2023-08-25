SECTION .data
msg:    db "Hello, Holberton", 0
fmt:    db "%s", 10, 0

SECTION .text
extern printf
global main

; Function: main
; ----------------------
; The main function that prints a message using printf.
; Returns: 0
main:
    mov esi, msg    ; Point ESI to the message string
    mov edi, fmt    ; Point EDI to the format string
    mov eax, 0      ; Clear EAX register
    call printf     ; Call the printf function

    mov eax, 0      ; Set EAX to 0 (return value)
    ret             ; Return from the main function
