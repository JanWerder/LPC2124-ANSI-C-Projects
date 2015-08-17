#include <targets/LPC2000.h>
#include <stdio.h>
#include <stdbool.h>

#include <GPIO_Driver.h>
#include <Button_Switch.h>

void initPLL(){
  //Setzt Frequenz des Kerns
  PLLCFG = 0x00000024;
  PLLCON = (1<<0);
  PLLFEED = 0x000000AA;
  PLLFEED = 0x00000055;

  while(!(PLLSTAT & 0x00000400));
  PLLCON = 0x00000003;

  PLLFEED = 0x000000AA;
  PLLFEED = 0x00000055;
  VPBDIV = 0x00000002;
}

int main(void){

initPLL();

startButtonSwitch();

return(0);
}