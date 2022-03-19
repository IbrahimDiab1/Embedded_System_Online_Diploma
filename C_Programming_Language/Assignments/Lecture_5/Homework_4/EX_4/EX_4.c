/*
 ============================================================================
 Name        : EX_4_Functions.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_4 in Functions in C, Ansi-style
 ============================================================================
 */

/*
 *  program to Calculate the Power of a Number Using Recursion
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc(int,int);

int main()
{
	int base,power;
	printf("Enter base number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&base);
	fflush(stdin);fflush(stdout);
	printf("enter power number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);
	fflush(stdin);fflush(stdout);
	printf("%d ^ %d= %d ",base,power,calc(base,power));
}


int calc(int b,int p)
{
	if(p==1)
		return b;
	return b*calc(b,p-1);
}
