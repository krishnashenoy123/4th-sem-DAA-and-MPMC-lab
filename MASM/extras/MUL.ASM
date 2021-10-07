;program to multiply two numbers

.model small
.stack 100h
.data

 msg1 db 0ah,0dh,"enter the first number:$"
 msg2 db 0ah,0dh,"enter the second number:$"
 msg3 db 0ah,0dh,"Mul is:$"

.code
        main proc

                mov ax,@data   ;initialize data segment
                mov ds,ax
                lea dx,msg1
                mov ah,09h
                int 21h

                mov ah,01h
                int 21h

                mov bl,al
                sub bl,48

                mov dl,10
                mov ah,02h
                int 21h

                lea dx,msg2
                mov ah,09h
                int 21h


                mov ah,01h
                int 21h
                sub al,48

                mul bl

                mov bl,al
                add bl,48

                mov dl,10
                mov ah,02h
                int 21h

                mov dl,13
                mov ah,02h
                int 21h

                lea dx,msg3
                mov ah,09h
                int 21h


                mov dl,bl
                mov ah,02h
                int 21h
                mov ah,4ch
                int 21h

        main endp
end main
