#include "mcc_generated_files/mcc.h"

void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    //---Inicio Pantalla Oled
    OLED_Init();
    OLED_SetFont(FONT_1);
    unsigned char buffer[21]; //Buffer Font-UNO

    while (1)
    {
        // Add your application code
    }
}