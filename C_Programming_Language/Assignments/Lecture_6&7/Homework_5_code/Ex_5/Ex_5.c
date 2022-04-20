/*
 ============================================================================
 Name        : EX_4_Macro.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_4 in macro & structure in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to find area of a circle, passing arguments to macros.
 */

#define PI (22/7.0)
#define area(r) (PI*r*r)


#include <stdio.h>
#include <stdlib.h>


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float r;
	printf("Enter the radius:");
	scanf("%f",&r);

	printf("Area= %g",area(r));

	return 0;
}
