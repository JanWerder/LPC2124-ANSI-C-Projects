#include <Button_Switch.h>
#include <stdbool.h>

void startButtonSwitch(){

initPin(13);
initPin(12);


bool config = true;

   while (1)
   {
      if (getPinValue(1<<16)){
        config = true;
      }
      if (getPinValue(1<<15)){
        config = false;
      }

      if (config){
          setPin(13,true);
          setPin(12,false);
        }else{
          setPin(12,true);
          setPin(13,false);
        }
   }
}