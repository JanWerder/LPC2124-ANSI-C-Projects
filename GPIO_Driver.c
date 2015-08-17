#include <GPIO_Driver.h>
#include <stdbool.h>

void setPin(int pin,int status){
  if (status == true){
     IO0CLR|=(1<<pin);
  }else{
    IO0SET|=(1<<pin);
  }
}

int getPinValue(int pin){
  if (IO0PIN & (pin)){
     return false;
  }
  return true;
}

void initPin(int pin){
  IO0DIR|=(1<<pin);
}