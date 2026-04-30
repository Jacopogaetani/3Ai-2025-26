; multi-segment executable file template.  
;Inizializza a 0 il valore della cella di indirizzo ind1. Setta a 0 anche il
;valore delle successive 7 celle.

data segment
    ; add your data here!    
    ind1 dw 00h
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
    mov ax, 08h
    mov bx, ind1
            
inizio: cmp ax, bx
    je fine                  
    mov [bx], 00h 
    inc bx   
    jmp inizio
    
fine:int 20h
    
ends

end start ; set entry point and stop the assembler.
