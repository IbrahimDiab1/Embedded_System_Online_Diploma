/*
 ============================================================================
 Name        : EX_3_Structure.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_3 in macro & structure in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to Add Two Complex Numbers by Passing Structure to a Function
 */


#include <stdio.h>
#include <stdlib.h>

	struct complex
	{
		float real,imag;
	};


	struct complex sum_com(struct complex c1,struct complex c2)
	{
		struct complex temp;
		temp.real=c1.real+c2.real;
		temp.imag=c1.imag+c2.imag;

		return temp;
	}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct complex com1,com2,temp;

	printf("For first complex number:\n");
	printf("Enter real and imaginary respectively:");
	scanf("%f%f",&com1.real,&com1.imag);


	printf("For second complex number:\n");
	printf("Enter real and imaginary respectively:");
	scanf("%f%f",&com2.real,&com2.imag);

	temp = sum_com(com1,com2);
	printf("\nSum = %g%c%gi",temp.real,temp.imag>0?'+':' ',temp.imag);

	return 0;
}
