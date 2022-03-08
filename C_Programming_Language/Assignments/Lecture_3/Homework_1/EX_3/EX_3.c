/*
 ============================================================================
 Name        : EX_3.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_3 in C, Ansi-style
 ============================================================================
 */

/*
 * Write C Program to Add Two Integers
 * Console-output:
 * Enter two integers: 12
 * 11
 * Sum: 23
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input_1=0,input_2=0;
	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&input_1,&input_2);
	printf("Sum: %d",input_1+input_2);

	return EXIT_SUCCESS;
}
