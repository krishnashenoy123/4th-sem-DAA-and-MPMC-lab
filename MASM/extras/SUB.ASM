;subtraction of two numbers
dosseg
.model small
.stack 100h
.data

 msg1 db 0ah,0dh,"enter the first number:$"
 msg2 db 0ah,0dh,"enter the second number:$"
 msg3 db 0ah,0dh,"Sub is:$"

.code
        main proc
                mov ax,@data   ;initialize data segment
                mov ds,ax
                lea dx,msg1
                mov ah,09h
                int 21h

                mov ah,1
                int 21h
                mov bl,al

                lea dx,msg2
                mov ah,09h
                int 21h


                mov ah,1
                int 21h

                lea dx,msg3
                mov ah,09h
                int 21h

                sub bl,al
                add bl,48
                mov dl,bl
                mov ah,2
                int 21h
                mov ah,4ch
                int 21h

        main endp
end main
