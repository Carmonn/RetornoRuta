#ifndef MCC_H
#define	MCC_H
#include <xc.h>
#include "device_config.h"
#include "pin_manager.h"
#include <stdint.h>
#include <stdbool.h>
#include <conio.h>
#include "i2c1_master.h"


void SYSTEM_Initialize(void);
void OSCILLATOR_Initialize(void);
void PMD_Initialize(void);

//---Others
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//---I2C
#include "examples/i2c1_master_example.h"

//---OLED
#include "../OLED.h"

#endif