section .data
    hello db 'Hello, Holberton', 0Ah ; 0Ah is a new line character
section .text
    global main
    extern printf

main:
    push rbp        ; save the base pointer
    mov rbp, rsp    ; set the stack pointer to the base pointer
    mov rdi, hello  ; set the first argument (format string) to hello
    xor eax, eax    ; zero out the eax register
    call printf     ; call the printf function
    mov rsp, rbp    ; restore the stack pointer
    pop rbp         ; restore the base pointer
    xor eax, eax    ; set the return value to zero
    ret             ; return from the function
