/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Ibrahim Diab
 * @brief          : Lab_1 for studying STM interrupts.
 ******************************************************************************
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

/********************************************
 	 	 	 Registers Addresses
********************************************/

// AFIO
#define AFIO_BASE 0x40010000
#define AFIO_EXTICR1 *(volatile uint32_t *)(AFIO_BASE + 0x08)

// RCC
#define RCC_BASE 0x40021000
#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)
#define RCC_IOPAEN (1<<2)

// GPIO
#define GPIOA_BASE 0x40010800
#define GPIOA_CRL *(volatile uint32_t *)(GPIOA_BASE + 0x00)
#define GPIOA_CRH *(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR *(volatile uint32_t *)(GPIOA_BASE + 0x0c)
#define GPIOA13 (1UL<<13)

// EXTI
#define EXTI_BASE 0x40010400
#define EXTI_IMR *(volatile uint32_t *) (EXTI_BASE + 0x00)
#define EXTI_RTSR *(volatile uint32_t *) (EXTI_BASE + 0x08)
#define EXTI_PR *(volatile uint32_t *) (EXTI_BASE + 0x14)

// NVIC
#define NVIC_ISER0 *(volatile uint32_t *) (0xE000E100)

void clock_init() {

	//Enable clock GPIOA
	RCC_APB2ENR |= RCC_IOPAEN;

	//Alternate Function IO clock enabled
	RCC_APB2ENR |= 1;
}

void GPIO_init() {

	//pin 13 port A output
	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;

	//pin 0 port A as floating input
	GPIOA_CRL |= (1 << 2);
}

int main(void) {

	clock_init();
	GPIO_init();

	//Interrupt request from Line 0 is not masked
	EXTI_IMR |= 1;

	//Rising trigger enabled for input line 0
	EXTI_RTSR |= 1;

	//To select the source input for EXTI0 external interrupt
	AFIO_EXTICR1 &= ~1;

	//Enable NVIC IRQ 6 (EXTI0)
	NVIC_ISER0 |= (1 << 6);

	while (1);

}

void EXTI0_IRQHandler(void) {

	//IRQ is happened EXTI0 >>>> PORTA pin 0 | rising edge
	//toggle led pin A 13
	GPIOA_ODR |= (1 << 13);

	//Clearing pending register by writing 1 to bit line 0
	EXTI_PR |= 1;
}
