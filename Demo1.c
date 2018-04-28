#include <iocc2530.h>
#ifndef BV
#define BV(n)  (1<<(n))
#endif

void delay_us(unsigned int MicroSec){
  while(MicroSec--){
  }
}

void delay_ms(unsigned int MilliSec){
  while(MilliSec--){
    delay_us(1000);
  }
}

void main(void){
  P0SEL &=(-BV(6));
  P0DIR |=BV(6);

  for(;;){
    P0_6=1;
    delay_ms(300);
    P0_6=0;
    delay_ms(300);
  }
}