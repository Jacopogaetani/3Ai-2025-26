; multi-segment executable file template.    

;Definisci due variabili con valori a tua scelta. Memorizza il valore minore
;in una variabile che si chiama a min e il maggiore in una variabile che si
;chiama max

data segment
    ; add your data here!
    var1 db 10h
    var2 db 15h
    max db 00h
    min db 00h
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
    mov ah, var1
    mov al, var2
   
    cmp ah, al
    
    jge primoMaggiore
    
    mov max, al
    mov min, ah
    jmp fineProgramma   
   
primoMaggiore: mov max, ah
               mov min, al  
    fineProgramma: int 20h
ends

end start ; set entry point and stop the assembler.
