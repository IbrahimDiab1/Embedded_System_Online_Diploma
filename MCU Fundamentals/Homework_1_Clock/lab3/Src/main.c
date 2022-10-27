/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Ibrahim Diab
 * @brief          : Lab3: Change SYSCLK, HCLK, PCLK1 and PCLK2
   					 with different frequencies.

   					 Configure Board to run with the
					 Following rates:
						_ APB1 Bus frequency 16MHZ
						_ APB2 Bus frequency 8MHZ
						_ AHB frequency 32 MHZ
						_ SysClk 32 MHZ
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
#define RCC_CR *(volatile uint32_t *)(RCC_BASE)

// GPIO
#define GPIOA_CRH    *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR    *(volatile uint32_t *)(GPIOA_BASE + 0x0C)


int main(void)
{
	RCC_APB2ENR |= (1<<2);
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

	//Bit 24 PLLON: PLL enable
	RCC_CR |=(1<<24);

	// PLL selected as system clock
	RCC_CFGR |=(1<<1);

	//Bits 21:18  0110: PLL input clock x 8
	RCC_CFGR |=(0b0110<<18);

	//Bits 10:8  100: HCLK divided by 2 for APB1
	RCC_CFGR |=(1<<10);

	//Bits 13:11  101: HCLK divided by 4 for APB2
	RCC_CFGR |=(1<<11)|(1<<13);

	while(1)
	{
		GPIOA_ODR |=(1<<13);
		for(int i=0; i<1000;i++);
		GPIOA_ODR &=~(1<<13);
		for(int i=0;i<1000;i++);
	}
}
