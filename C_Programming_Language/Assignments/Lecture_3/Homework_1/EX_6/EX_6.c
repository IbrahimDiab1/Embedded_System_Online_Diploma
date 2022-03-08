/*
 ============================================================================
 Name        : EX_6.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_6 in C, Ansi-style
 ============================================================================
 */

/*
 * Write Source Code to Swap Two Numbers
 * Console-output:
 * Enter value of a: 1.20
 * Enter value of b: 2.45
 * After swapping, value of a = 2.45
 * After swapping, value of b = 1.2
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	temp =a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %.2f\n",a);
	printf("After swapping, value of b = %.2f",b);

	return EXIT_SUCCESS;
}
