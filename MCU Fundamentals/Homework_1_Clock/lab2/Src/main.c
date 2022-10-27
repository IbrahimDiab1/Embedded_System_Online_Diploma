/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Ibrahim Diab
 * @brief          : Lab2: Change SYSCLK, HCLK, PCLK1 and PCLK2
   					 with different frequencies.

   					 Configure Board to run with the
					 Following rates:
						_ APB1 Bus frequency 4MHZ
						_ APB2 Bus frequency 2MHZ
						_ AHB frequency 8 MHZ
						_ SysClk 8 MHZ
						_ Use only internal HSI_RC
 ******************************************************************************
 */

#include<stdint.h>
#include<stdlib.h>
#include<stdio.h>


// register Base addresses
#define GPIOA_BASE 0x40010800
#define RCC_BASE 0x40021000

// RCC
#define RCC_APB2ENR  *(volatile uint32_t *)(RCC_BASE + 0x18)
#define RCC_CFGR *(volatile uint32_t *)(RCC_BASE + 0x04)

// GPIO
#define GPIOA_CRH    *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR    *(volatile uint32_t *)(GPIOA_BASE + 0x0C)


int main(void)
{
	RCC_APB2ENR |= (1<<2);
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;
	//Bits 2:0   101: HSI clock selected
	RCC_CFGR |=(1<<2)|(1);

	//Bits 10:8  100: HCLK divided by 2 for APB1
	RCC_CFGR |=(1<<10);

	//Bits 13:11  101: HCLK divided by 4 for APB	2
	RCC_CFGR |=(1<<11)|(1<<13);

	while(1)
	{
		GPIOA_ODR |=(1<<13);
		for(int i=0; i<1000;i++);
		GPIOA_ODR &=~(1<<13);
		for(int i=0;i<1000;i++);
	}
}
