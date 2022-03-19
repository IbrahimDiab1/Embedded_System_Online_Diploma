/*
 ============================================================================
 Name        : EX_1_Functions.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_1 in Functions in C, Ansi-style
 ============================================================================
 */

/*
 *  Prime Numbers Between two Intervals by Making User-defined Function
 */

#include <stdio.h>
#include <stdlib.h>

void Print_Prime_num(int ,int);
char is_prime(int);

int main()
{
	int in1,in2;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&in1,&in2);
	fflush(stdin);fflush(stdout);
	printf("print numbers between %d and %d :",in1,in2);
	Print_Prime_num(in1,in2);

}

void Print_Prime_num(int in1,int in2)
{
	for(int j=in1;j<=in2;j++)
	{
		if(is_prime(j))
			printf("%d ",j);
	}
}

char is_prime(int in)
{
	for(int i=2;i<(in/2);i++)
	{
		if((in % i)==0)
			return 0;
	}
	return 1;
}

