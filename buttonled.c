#include <targets/LPC2000.h>
#include <stdio.h>

int main(void){

IO0DIR|=(1<<13)|(1<<12);


   while (1)
   {
      if (IO0PIN & (1<<16)){
        IO0CLR|=(1<<13);//Grün an
      }else{
        IO0SET|=(1<<13);
      }
   }


IO0CLR|=(1<<13);//Grün an
IO0SET|=(1<<12);//Gelb aus

return(0);
}