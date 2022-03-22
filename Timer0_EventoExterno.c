
#define LED RC7_BIT
void interrupt(){
     if(T0IF_bit==1){          //Testar se Timer0 estourou
          T0IF_bit=0;
          TMR0=254;
          LED=~LED;
     }


}


void main() {
     OPTION_REG=0xB8;        //TIMER0 PARA INCREMENTO DE EVENTO EXTERNO
     INTCON=0xA0;            //HABILITAR INTERRUPÇOES
     TMR0=254;
     TRISA4_BIT=1;
     RA4_BIT=0X00;
     TRISC7_BIT=0;              //SAIDA LED
     RC7_BIT=0;
     
     while(1){
     }
     
}