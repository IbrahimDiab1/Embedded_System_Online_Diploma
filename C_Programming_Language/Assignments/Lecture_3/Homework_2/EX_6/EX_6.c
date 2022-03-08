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
 * C Program to Calculate Sum of Natural Numbers
 */


#include <stdio.h>
#include <stdlib.h>

char is_even(int);

int main(void) {

	int in;
	printf("Enter an integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&in);
	if(is_even(in))
		printf("Sum = %d",(in/2)*(in+1));
	else
		printf("Sum = %d",in*(1+in/2));
	return EXIT_SUCCESS;
}

char is_even(int a)
{
	if(a%2==0)
		return 1;
	return 0;
}
