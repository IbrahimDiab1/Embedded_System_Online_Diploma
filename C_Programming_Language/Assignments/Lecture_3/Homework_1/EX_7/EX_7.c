/*
 ============================================================================
 Name        : EX_7.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_7 in C, Ansi-style
 ============================================================================
 */

/*
 * interview trick
 * Write Source Code to Swap Two Numbers without temp variable
 * Console-output:
 * Enter value of a: 1.20
 * Enter value of b: 2.45
 * After swapping, value of a = 2.45
 * After swapping, value of b = 1.2
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f",b);

	return EXIT_SUCCESS;
}
