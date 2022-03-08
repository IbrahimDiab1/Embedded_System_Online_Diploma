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
 *  C Program to Check Whether a Number is Positive or Negative
*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float in;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&in);
	if(in>0)
		printf("%.2f is positive",in);
	else if(in<0)
		printf("%.2f is negative",in);
	else
		printf("you entered zero");

	return EXIT_SUCCESS;
}

