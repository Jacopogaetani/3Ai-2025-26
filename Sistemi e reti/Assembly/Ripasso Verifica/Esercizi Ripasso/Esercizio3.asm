;Ciclo di Decremento: Inizializza una variabile START a 15. Crea un ciclo che decrementi il valore di 2 alla volta 
;finché non diventa minore o uguale a 5. Salva il numero di iterazioni fatte in un registro a tua scelta.

data segment
    ; add your data here!
    pkey db "press any key...$" 
    var dw 15h
    iterazioni  dw 00h
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

    inzioCiclo: cmp var, 05h
    jle fineProgramma
    sub var, 02h
    inc iterazioni 
    jmp inizioCiclo
    
    fineProgramma: int 20h
ends


end start ; set entry point and stop the assembler.
