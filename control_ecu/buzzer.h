/******************************************************************************
 * Module: BUZZER
 * File Name: buzzer.h
 * Description: header file for buzzer
 * Author: Eslam Ali
 ******************************************************************************/
#ifndef BUZZER_H_
#define BUZZER_H_

#include "std_types.h"

/*******************************************************************************
 *****************              Definitions            ************************/

#define BUZZER_PORT_ID PORTA_ID
#define BUZZER_PIN_ID  PIN7_ID


/*******************************************************************************
 *****************     Functions deceleration           ************************/
void BUZZER_init(void);
void BUZZER_on(void);
void BUZZER_off(void);


#endif /* BUZZER_H_ */
