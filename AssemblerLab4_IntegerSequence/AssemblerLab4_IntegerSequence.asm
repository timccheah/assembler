segment .data
start dq 0
sum dq 0
end dq 10
increment dq 1
tot dq 0

segment .text
global main
mov rax,[start]
mov rbx,[sum]
mov rcx, [end]
mov rdx, [increment]
;mov rex, [tot]

main:
jmp start_loop

start_loop:
;code
cmp rbx, rdx
je end_loop

add rbx, rdx
mov rax, rbx
mov rdx, rbx
mov rdx, rax
loop start_loop
sub rdx, 1
end_loop:

