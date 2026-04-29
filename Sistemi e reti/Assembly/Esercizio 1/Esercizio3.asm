;Date due variabili var1 e var2 di un byte inizializzate con valori a tua
;scelta, scrivi il contenuto di var1 nella cella di indirizzo var2.

data segment
    ; add your data here!
    num1 db 05h   
    num2 db 04h     
    num3 db 0h
ends

stack segment
   
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
    mov es, ax

    mov ah, num1
    mov al, num2
    
    cmp ah, al
    jg primoMaggiore
    mov num3, al


primoMaggiore: mov num3, ah

    int 20h
    
ends

end start ; set entry point and stop the assembler.
