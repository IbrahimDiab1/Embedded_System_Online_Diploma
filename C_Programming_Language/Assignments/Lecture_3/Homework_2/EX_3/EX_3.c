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
 *  Program to Find the Largest Number Among Three Numbers
 */


#include <stdio.h>
#include <stdlib.h>

float large_num(float ,float );

int main(void) {

	float in1,in2,in3;
	printf("Enter three numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&in1,&in2,&in3);
	printf("Largest number is %.2f",large_num(large_num(in1,in2),in3));
	return EXIT_SUCCESS;
}

float large_num(float a,float b)
{
	if(a>b)
		return a;
	else
		return b;
}
