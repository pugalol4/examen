#include <18F4620.h>
#include <Timer.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, /*NOMCLR,*/ STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)

int contadorGlobal1=0;
int contador=1;

char caracter[22];//{-2+-2:}
int flag=0;
float numero1=0, numero2=0;
float resultado=0;
int calculo=0;
int puntero=0;
float decimal1=0,decimal2=0;
char operacion;
//void clean(void);
int i=0;
int clear=0;
char cadena[20];
   char cadena2[20];
   
#INT_TIMER0
void TIMER0(){
   contadorGlobal1++;
   set_timer0(15536);
}

void main(void) {
   setup_oscillator(OSC_16MHZ);
   set_tris_a(0x0);

   setup_timer_0(RTCC_INTERNAL | RTCC_DIV_8  );
   enable_interrupts(INT_TIMER0 );
   enable_interrupts(GLOBAL);
   set_timer0(15536);
   
   while (1) { 

     if(kbhit()){
        caracter[i]=getch();
        if((caracter[i]>=97 && caracter[i]<=122) || (caracter[i]>=48 && caracter[i]<=57)||caracter[i]==32){
            printf("%c",caracter[i]);
            if(caracter[i]==64){
            calculo=1;
        }
        i++;
    }
   }
   
    if(calculo==1){
       while(caracter[puntero]!=32);{
              cadena[i]=caracter[i];
              puntero++;
              }
    
     while(caracter[puntero]!=13);{
              cadena2[i]=caracter[i];
              puntero++;
              }
    
    
         
          if(contadorGlobal1 == 2){
         contador*=2;   
         contadorGlobal1 = 0;
         
         int j=0;
    if(cadena2 == "uno")
         printf("%s",cadena);
    else if(cadena2 == "dos")
         printf("%s",cadena);
         
      }
   
     if(contador ==256){
      contador=1;
     }
     
     output_b(contador);
     
    }
  
   }
}
