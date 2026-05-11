; multi-segment executable file template.

data segment
    ; add your data here!
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
    
    mov ax, 0h
    mov bx, 200h                     
    ; Istruzione assembly: <codice mnemonico><operandi>. Lunghezza massima: 6 byte per via della lunghezza della coda di prefetch
    
    ;Istruzione a 1 Operando
    inc ax ;Incrementa il contenuto del registro ax
    
    ;Istruzione a 2 Operandi
    mov ax, bx ;Copia il contenuto del registro bx in ax
                     
    ;REGOLE SINTATTICHE
    
    ;1) Il risultato di un'operazione aritmetico logica va' nel destinatario
    
    ;2) Se ci sono due operandi, solo uno può essere una locazione di memoria
                 
    mov [bx], 150h ;Le parentesi quadre indicano una locazione di memoria. 
    mov ax, [bx]   ;Bx è l'unico registro di uso generale ad essere un registro puntatore
    
    ;mov [bx], [0200h] è SBAGLIATO
                                            
    ;3) Gli operandi devono avere tutti la stessa dimensione (8 - 16 bit)
    
    mov ax,bx ;giusto
    ; mov al, bx SBAGLIATO
    
    
    
                         
   
    
    int 20h ;Segnale di interrupt di fine
ends

end start ; set entry point and stop the assembler.
