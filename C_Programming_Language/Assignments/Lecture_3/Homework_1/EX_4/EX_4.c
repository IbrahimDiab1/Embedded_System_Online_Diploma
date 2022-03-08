/*
 ============================================================================
 Name        : EX_4.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_4 in C, Ansi-style
 ============================================================================
 */

/*
 * Write C Program to Multiply two Floating Point Numbers
 * Console-output:
 * Enter two numbers: 2.4
 * 1.1
 * Product: 2.640000
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float input_1,input_2;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&input_1,&input_2);
	printf("Product: %.2f",input_1*input_2);

	return EXIT_SUCCESS;
}
