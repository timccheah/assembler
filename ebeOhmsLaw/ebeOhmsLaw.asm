segment .data
voltage     dq  8   ;value to calculate
amperage    dq  2  ;amperage input
resistance  dq  0   ;resistance input

        segment .text
        global main 
main:
;move variable to registers
mov rax,[voltage]
mov rbx,[amperage]
mov rcx, [resistance]

; if voltage is zero, calculate voltage
voltage_section:
cmp rax, 0
jne amperage_section
imul rbx,rcx
mov[voltage],rbx
jmp end

;if amperage is zero, calculate amperage
amperage_section:
cmp rbx, 0          ;see if we are calculating amperage by testing
jne resistance_section      ; if we are not canculating amperage go to next test
mov rbx, rcx        ; move voltage to rax register. now voltage is in rax and resistance is in rbx
mov rcx,0           ; clear the rcx register
mov rdx, 0          ; clear the rdx register
idiv rbx            ; how you divide numbers. Takes rax / rbx. Stores result in rax. Stores remainder in rdx.
mov [amperage],rax  ;rax is the amperage
jmp end


;if resistance is zero, calculate resistance
resistance_section:
mov rcx, rbx
mov rbx, rax
;mov rax, 0
mov rdx, 0
idiv rcx
mov [resistance],rbx    ;rax is the resistance


end:
