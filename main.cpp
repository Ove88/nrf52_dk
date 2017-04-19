#include "mbed.h"
#include "BLE_Button.h"


int main()
{
   NVIC_SetPriority(DebugMonitor_IRQn, 7ul);
  
   BLE_Button_Test::start();


   while(true)
   {
   }
}
