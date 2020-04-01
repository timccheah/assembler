    segment.data
msg: db 'Hello world!', 0x0a    ;String to print
len: equ    $-msg   ;String length

    segment.text
    global main     ;Tell linker about main
    extern write, exit
main:
    push rbp
    mov rbp,rsp
        ;Up to 6 integer register parameters
        ;in rdi,rsl,rdx,rcx,r8,r9
        ;Up to 8 float register parameters
        ;in xmm0-xmm7
    
    mov edx, len        ;Parameter 3 for write
    lea rsl,[msg]       ;Parameter 2 for write
    mov edi, 1          ;Parameter 1(fd)
    call write
    
    xor edi, edl
    call exit
