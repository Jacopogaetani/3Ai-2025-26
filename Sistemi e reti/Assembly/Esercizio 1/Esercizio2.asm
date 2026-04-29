;Inizializzare una variabile contatore con un valore a tua scelta.
;Incrementa di uno una seconda variabile inizializzata con il valore 4 fino
;a che il contatore non risulti uguale a 0

data segment
    ; add your data here!
    cont db 05h   
    i db 04h
ends

stack segment
   
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

    mov ah, cont
startCiclo: cmp ah,0
    
    je fineCiclo
    
    inc i
    dec ah
    jmp startCiclo
    
    
    fineCiclo: int 20h
    
ends

end start ; set entry point and stop the assembler.
