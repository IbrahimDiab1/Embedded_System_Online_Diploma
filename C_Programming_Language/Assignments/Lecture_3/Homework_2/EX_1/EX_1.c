/*
 ============================================================================
 Name        : EX_1.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_1 in C, Ansi-style
 ============================================================================
 */

/*
 * Write C Program to Check Whether a Number is Even or Odd
 */


#include <stdio.h>
#include <stdlib.h>

char is_even(int);

int main(void) {

	int in;
	printf("Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&in);
	if(is_even(in))
		printf("%d is even",in);
	else
		printf("%d is odd",in);
	return EXIT_SUCCESS;
}

char is_even(int in)
{
	if((in%2)==0)
		return 1;
	return 0;
}
