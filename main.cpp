#include "mbed.h"

DigitalOut led(LED1);
int main()
{
    NVIC_SetPriority(DebugMonitor_IRQn, 7ul);
    
    while(true)
    {
        led = !led;
        wait(2.0);
        int test = 0;
    }
}
