;Somma Progressiva: Utilizzando un registro contatore (es. CX), calcola la somma dei primi 5 numeri interi (1+2+3+4+5) e memorizza il risultato finale in una variabile TOTALE.

data segment
    ; add your data here!
    pkey db "press any key...$" 
    totale dw 0h
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

    mov cx, 05h ;Contatore decrescente
    
    inizioCiclo: cmp cx, 0 ;if(cx == 0) jmp to fineProgramma
    je fineProgramma       ;
    add totale, cx         ;totale = totale + cx
    dec cx                 ;cx--
    jmp inizioCiclo
    
    fineProgramma: int 20h
ends


end start ; set entry point and stop the assembler.
