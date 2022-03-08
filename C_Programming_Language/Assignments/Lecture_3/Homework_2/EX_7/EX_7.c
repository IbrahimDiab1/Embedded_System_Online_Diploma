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
 *  Program to Find Factorial of a Number
 */


#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main(void) {

	int in;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&in);
	if(in<0)
		printf("Error!!! Factorial of negative number doesn't exist.");
	else
		printf("Factorial =%d",factorial(in));
	return EXIT_SUCCESS;
}

int factorial(int a)
{
	if (a==0)
		return 1;
	return factorial(a-1)*a;
}
