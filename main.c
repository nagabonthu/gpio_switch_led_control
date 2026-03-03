/* 
 * Project: Switch Controlled LED Logic
 * MCU: LPC2129
 *
 * Case 1: Switch1 enables Switch2 functionality
 * Case 2: If Switch2 pressed → LED1 ON
 * Case 3: If Switch2 released → LED2 ON
 * If Switch1 not pressed → Both LEDs OFF
 */

#include <lpc21xx.h>

#define LED1 (1 << 3)
#define LED2 (1 << 5)
#define SW1  16
#define SW2  24

int main(void)
{
    IODIR0 |= LED1 | LED2;   // Configure LEDs as output

    while (1)
    {
        /* Check if Switch1 is pressed (active low) */
        if (((IOPIN0 >> SW1) & 1) == 0)
        {
            /* Switch1 pressed → now check Switch2 */
            if (((IOPIN0 >> SW2) & 1) == 0)
            {
                IOSET0 = LED1;   // Turn ON LED1
                IOCLR0 = LED2;   // Turn OFF LED2
            }
            else
            {
                IOSET0 = LED2;   // Turn ON LED2
                IOCLR0 = LED1;   // Turn OFF LED1
            }
        }
        else
        {
            IOCLR0 = LED1 | LED2;  // Switch1 not pressed → both LEDs OFF
        }
    }
}
