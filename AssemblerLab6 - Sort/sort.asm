segment .data

array dq 5, 1, 3, 9, 7, 4, 6
size dq 7 
arrayCount dq 0

        segment .text
        global main 
main:

mov rdx, [size]
mov rsi, [arrayCount]

loop1:
    cmp rdx, 1
    je end
    jg sort_list
    
    sort_list:
        cmp rsi, rdx
        jmp loop1
        cmp rdx, [size]
        mov rax, [array + rsi]
        mov rbx, [array + rsi + 8]
        cmp rax, rbx
        jle count
        jg swap
        
        
    swap: 
        xchg rax, rbx
        mov [array + rsi], rax
        mov [array + rsi + 8], rbx
        add rsi, 8
        jmp sort_list
       
count:
        add rsi, 8
        dec rdx
        jmp loop1
        
end:
    xor rdx, rdx
        
