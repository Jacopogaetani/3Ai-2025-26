;Date due variabili A e B, se A è uguale a B azzera una terza variabile C, altrimenti scambia tra loro i valori di A e B.

data segment
    ; add your data here!
    pkey db "press any key...$" 
    a db 05h
    b db 06h
    c db 10h
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
    
    mov al, a
    mov bl, b 
           
    cmp al, bl
    je ramoTrue
                  
    ; al = 5
    ; bl = 6
    
    
    xchg al, bl
    
    ; al = 6
    ; bl = 5
    
    mov a, al
    mov b, bl
    
    jmp fineProgramma
    ramoTrue: mov c, 0
    
    fineProgramma: int 20h
ends


end start ; set entry point and stop the assembler.
