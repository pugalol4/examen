#include <18F4620.h>
#include <stdio.h>
#include <stdlib.h>


#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, /*NOMCLR,*/ STVREN, NOLVP, NODEBUG              




#use delay(crystal=16MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)



   
       
      
       


