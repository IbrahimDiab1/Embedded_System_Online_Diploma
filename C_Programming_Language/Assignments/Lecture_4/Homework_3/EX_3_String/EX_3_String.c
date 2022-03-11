/*
 ============================================================================
 Name        : EX_3_String.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_3 in String in C, Ansi-style
 ============================================================================
 */

/*
 * Program to Reverse String Without Using Library Function
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char st[100],rev[100];
	char i=0;
	printf("Enter hte string :");
	fflush(stdin);fflush(stdout);
	gets(st);
	fflush(stdin);fflush(stdout);
	while(st[i]!=0)
	{
		rev[strlen(st)-i-1]=st[i];
		i++;
	}
	rev[strlen(st)]=0;
	printf("\nReverse string is :");
	fflush(stdin);fflush(stdout);
	puts(rev);
	return 0;
}
