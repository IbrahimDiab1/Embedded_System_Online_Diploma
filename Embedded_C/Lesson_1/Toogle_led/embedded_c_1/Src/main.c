/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ibrahim Diab
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>

typedef volatile unsigned int vuint32;


#define  RCC_BASE     0x40021000
#define  GPIOA_BASE   0x40010800

#define  RCC_APB2ENR  *(volatile uint32_t *)(RCC_BASE + 0x18)
#define  GPIOA_CRH    *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define  GPIOA_ODR    *(volatile uint32_t *)(GPIOA_BASE + 0x0c)

typedef union
{
	vuint32 all_fields;
	 struct
	{
		vuint32 reserved   : 13 ;
		vuint32 pin13      : 1  ;


	}pin;
}R_ODR_T;

volatile R_ODR_T * R_ODR= (volatile R_ODR_T*)(GPIOA_BASE +0x0c);

int main(void)
{

	RCC_APB2ENR |= 1<<2;
	GPIOA_CRH &= 0Xff0fffff;
	GPIOA_CRH |= 0x0020000;

	while(1)
	{
		R_ODR ->pin.pin13=1;		//set bit 13
		for(int i=0;i<5000;i++);	//delay

		R_ODR ->pin.pin13=0;		//clear bit 13
		for(int i=0;i<5000;i++);	//delay

	}

}
