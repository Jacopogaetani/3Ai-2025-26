; multi-segment executable file template.

data segment
    ; add your data here!  
    num1 db 81h
    num2 db 81h
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
    
    mov al, 81h
    mov bl, 80h
                 
    cmp al, bl ;compara i due registri
    jne sott; se non solo uguali va al ramo "sott"
    add al, bl; altrimenti somma i registri al e bl e inserisce il risultato in al
    mov ris, al; sposta il contenuto del registro al in ris 
    
    jmp fine-prog; salta alla fine del programma

sott:sub al, bl; ramo "false" della sottrazione, esegue la sottrazione dei registri al e bl e inserisce il risultato in al
    mov ris, al; inserisce il risultato in ris
   
   
    fine-prog: int 21h; ritorna il controllo al sistema operativo
    
        
ends

end start ; set entry point and stop the assembler.
