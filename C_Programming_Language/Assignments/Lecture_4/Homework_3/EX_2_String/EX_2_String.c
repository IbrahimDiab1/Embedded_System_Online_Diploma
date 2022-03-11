/*
 ============================================================================
 Name        : EX_2_String.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_2 in String in C, Ansi-style
 ============================================================================
 */

/*
 * Program to Find the Length of a String
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char length=0;
	char arr[100];
	printf("Enter a string :");
	fflush(stdin);fflush(stdout);
	gets(arr);
	char i=0;
	while(arr[i++]!='\0')
		length++;
	fflush(stdin);fflush(stdout);
	printf("Length of string: %d",length);
	return 0;
}
