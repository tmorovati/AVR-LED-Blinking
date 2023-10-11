#include <delay.h>
#include <mega32.h>



void main(void)
{


// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRA=(1<<DDA7) | (1<<DDA6) | (1<<DDA5) | (1<<DDA4) | (1<<DDA3) | (1<<DDA2) | (1<<DDA1) | (1<<DDA0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);



while (1)
      {
            PORTA = 0b00000001;
            delay_ms(500);

 PORTA = 0b00000001;
            delay_ms(500);

 PORTA = 0b00000010;
            delay_ms(500);

 PORTA = 0b00000100;
            delay_ms(500);

 PORTA = 0b00001000;
            delay_ms(500);

 PORTA = 0b00010000;
            delay_ms(500);

 PORTA = 0b00100000;
            delay_ms(500);
 
 PORTA = 0b01000000;
            delay_ms(500);

 PORTA = 0b10000000;
            delay_ms(500);


      }
}
