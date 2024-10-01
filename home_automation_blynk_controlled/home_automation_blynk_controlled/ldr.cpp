#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
unsigned int inputVal=0;
void brightness_control(void)
{
  inputVal = analogRead(LDR_SENSOR); 
  inputVal =  (1023 - inputVal)/4;
  analogWrite (GARDEN_LIGHT, inputVal);

  delay (100);
      
}
