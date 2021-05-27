Assume cs:code, ds:data
Data segment
        Data1 dw 1234h
        Data2 dw 4321h
Data Ends
Code segment
        Start:
                Mov ax, data
                Mov ds, ax
                Mov ax, data1
                Mov bx, data2
                Add ax, bx
                Int 03h
Code Ends
End start
