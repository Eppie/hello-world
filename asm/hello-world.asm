section     .text
global      _start                     ;must be declared for linker (ld)

_start:                                ;linker entry point

    mov     edx,len                    ;message length
    mov     ecx,msg                    ;message to print
    mov     ebx,1                      ;print to stdout
    mov     eax,4                      ;function to call (sys_write)
    int     0x80                       ;kernel interrupt (calls sys_write)

    mov     ebx,0                      ;exit with status code 0
    mov     eax,1                      ;function to call (sys_exit)
    int     0x80                       ;kernel interrupt (calls sys_exit)

section     .data

msg     db  'Hello, world!',0xa        ;the message (0xa is newline)
len     equ $ - msg                    ;length of message
