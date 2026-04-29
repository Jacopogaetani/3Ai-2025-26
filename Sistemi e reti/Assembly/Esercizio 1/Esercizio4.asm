; multi-segment executable file template.    
;Date due variabili var1 e var2 di un byte inizializzate con valori a tua
;scelta, scrivi il contenuto di var1 nella cella di indirizzo var2.

data segment
    ; add your data here!
    var1 db 10h
    var2 dw 05h
    pkey db "press any key...$"
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
    
    mov al, var1
    mov bx, var2
    
    
    mov [bx], al
  
    int 20h
ends

end start ; set entry point and stop the assembler.
