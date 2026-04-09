; multi-segment executable file template.

data segment
    ; add your data here!
ends

stack segment
    ; non lo useremo
ends

code segment
start:
; set segment registers:
    mov ax, data
    mov ds, ax
 
    ; add your code here
  
    mov ax, 0001h
    mov bh, 45h
    mov cl, 12h
    mov dx, ax
    add ax, 0010h
    
    ; Ora, dovremmo assemblare :)
    
    
    
    int 21h    
ends

end start ; set entry point and stop the assembler.
