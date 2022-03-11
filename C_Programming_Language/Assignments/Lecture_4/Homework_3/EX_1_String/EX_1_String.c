/*
 ============================================================================
 Name        : EX_1_String.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_1 in String in C, Ansi-style
 ============================================================================
 */

/*
 * Program to Find the Frequency of Characters in a String
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];
	char ch,fr=0;
	printf("Enter a string:");
	fflush(stdin);fflush(stdout);
	gets(str);
	printf("\nEnter a character to find frequency: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	fflush(stdin);fflush(stdout);
	for(char i=0;i<strlen(str);i++)
		if(ch==str[i])
			fr++;
	printf("\nFrequency of %c = :%d",ch,fr);
	return 0;
}
