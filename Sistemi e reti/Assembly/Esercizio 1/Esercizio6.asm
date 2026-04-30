; multi-segment executable file template.  
;Fai in modo che il valore della cella di indirizzo 22 sia fissato a 0 e
;aumenti progressivamente di 1 fino ad arrivare al valore 8. Raggiunto
;questo valore termina il programma.

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
    mov ah, 0h
    mov bh, 9h
    
    inizioCiclo: cmp ah, bh
    je fineProgramma
    mov [022h], ah
    inc ah
    jmp inizioCiclo
           
    fineProgramma: int 20h  
ends

end start ; set entry point and stop the assembler.
