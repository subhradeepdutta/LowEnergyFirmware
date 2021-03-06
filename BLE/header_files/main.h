/********************************************************************************
* File ​Name 	  : main.h
* File Description: This file includes the global variables and other included
* 					header files for main.c
* Author		  : Subhradeep Dutta
* Date			  : 09/13/2017
********************************************************************************/

/*Include guard */
#ifndef MAIN_H_
#define MAIN_H_

//***********************************************************************************
// Include files
//***********************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include "em_core.h"
extern int ON_period, TOTAL_period, Prescaler, CurrentFrequency;
extern float temperature;
extern uint8_t ble_connection;
/*Define the desired energy mode here*/
#define EMTWO
/*Define the ON time here*/
#define ON_TIME (0.00)
/*Define the TOTAL time here*/
#define TOTAL_TIME (1.75)
/*Define the maximum count for the 16 bit LETIMER0*/
#define LETIMER0_MAX_VAL (65536)
/*The temperature set point is defined in I2C.h*/

#endif
