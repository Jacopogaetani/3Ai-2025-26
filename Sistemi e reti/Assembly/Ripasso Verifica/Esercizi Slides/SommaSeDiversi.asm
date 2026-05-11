; multi-segment executable file template.
                       
;Dati due numeri sommarli se sono diversi e scrivere il
;risultato in memoria, altrimenti termina il programma.

data segment
    ; add your data here!
    pkey db "press any key...$"  
    num1 db 10h
    num2 db 05h      
    ris db 00h
ends

stack segment
    dw   128  dup(0)
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

    ; add your code here
                   
    mov al, num1
    mov ah, num2
    cmp al, ah
    
    je fineProgramma
    add al, ah
    mov ris, al
    
    
    fineProgramma: int 20h
ends

end start ; set entry point and stop the assembler.
