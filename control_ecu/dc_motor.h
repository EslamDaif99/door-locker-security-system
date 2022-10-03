/******************************************************************************
 *
 * Module: DC-MOTOR
 *
 * File Name: dc_motor.h
 *
 * Description: source file for DC-MOTOR
 *
 * Author: Eslam Ali
 *
 ******************************************************************************/


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

#include "std_types.h"

/*******************************************************************************
 ****************                 Definitions                ******************/
#define DC_MOTOR_PORT_ID      PORTD_ID
#define DC_MOTOR_IN1_PIN_ID   PIN6_ID
#define DC_MOTOR_IN2_PIN_ID   PIN7_ID

/******************************************************************************
 *****************           types definition           **********************/
typedef enum{
	STOP , CLOCKWISE ,A_CLOCKWISE
}DcMotor_State;

/******************************************************************************
 *****************           function prototypes        **********************/

void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state);



#endif /* DC_MOTOR_H_ */
