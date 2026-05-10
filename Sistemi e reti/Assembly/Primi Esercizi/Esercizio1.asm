; multi-segment executable file template.
;Date due variabili eseguire la sottrazione se la prima è maggiore della
;seconda altrimenti sommarle. Inserire il risultato in una terza variabile.

data segment
    num1 db 00h
    num2 db 00h
    ris db 00h

ends

stack segment
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

    ; add your code here   
    
    mov num1, 13h
    mov num2, 14h  
    mov ah, num1
    
    cmp ah,num2
    
    jg sottrazione
    
    add ah, num2
    mov ris, ah
    jmp fine
    
sottrazione: sub ah, num2
       mov ris, ah
       
       
            
   fine: int 20h    
ends

end start ; set entry point and stop the assembler.
