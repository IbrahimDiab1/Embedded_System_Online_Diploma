/*
 ============================================================================
 Name        : EX_8.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_8 in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
 */

#include <stdio.h>
#include <stdlib.h>

float calc(float,float,char);

int main(void) {

	char op;
	float a,b;
	for(;;)
	{
		printf("Enter operator either + or - or * or / :");
		fflush(stdin);fflush(stdout);
		scanf("%c",&op);
		printf("Enter two operands:");
		fflush(stdin);fflush(stdout);
		scanf("%f%f",&a,&b);
		printf("%.1f %c %.1f = %.1f\n",a,op,b,calc(a,b,op));
	}
	return EXIT_SUCCESS;
}

float calc(float a,float b,char op)
{
	switch (op)
	{
	case '+':
		return a+b;
	case '-':
		return a-b;
	case '/':
	{
		if (b==0)
		{
			printf("error in division\n");
			return 0;
		}

		return a/b;
	}
	case '*':
		return a*b;
	default:
	{
		printf("error input\n");
		return 0;
	}

	}
}
