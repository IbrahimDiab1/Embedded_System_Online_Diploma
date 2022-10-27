/*
 ******************************************************************************
 * @file           : main.c
 * @author         : Ibrahim Diab
 * @brief          : LAB1: Practical lab on STM32F103XX.
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

// GPIO
#define GPIOA_CRH    *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR    *(volatile uint32_t *)(GPIOA_BASE + 0x0C)


int main(void)
{
	RCC_APB2ENR |= (1<<2);
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

	while(1)
	{
		GPIOA_ODR |=(1<<13);
		for(int i=0; i<1000;i++);
		GPIOA_ODR &=~(1<<13);
		for(int i=0;i<1000;i++);
	}
}
