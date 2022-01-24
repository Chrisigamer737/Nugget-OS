[bits32]
delay2:
dec bp
nop
jnz delay2
dec si
cmp si,0    
jnz delay2
; end delay