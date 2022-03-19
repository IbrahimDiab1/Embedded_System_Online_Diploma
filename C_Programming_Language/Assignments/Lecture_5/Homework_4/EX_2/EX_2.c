/*
 ============================================================================
 Name        : EX_2_Functions.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_2 in Functions in C, Ansi-style
 ============================================================================
 */

/*
 *  C program to Calculate Factorial of a Number Using Recursion
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int );

int main()
{
	int in;
	printf("Enter a positive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&in);
	fflush(stdin);fflush(stdout);
	printf("\nFactorial of %d =%d",in,factorial(in));
}

int factorial(int in)
{
	if (in==1)
		return 1;
	return (in*factorial(in-1));

}
