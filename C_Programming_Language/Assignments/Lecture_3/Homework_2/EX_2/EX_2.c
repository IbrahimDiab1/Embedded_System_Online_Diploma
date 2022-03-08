/*
 ============================================================================
 Name        : EX_2.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_2 in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to Check Vowel or Consonant
 */


#include <stdio.h>
#include <stdlib.h>

char is_vowel(int);

int main(void) {

	char in;
	printf("Enter an alphabet:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&in);
	if(is_vowel(in))
		printf("%c is a vowel",in);
	else
		printf("%c is a constant",in);
	return EXIT_SUCCESS;
}

char is_vowel(int in)
{
	switch (in)				// More optimization than using "if" condition
	{
	case 'a':
		return 1;
	case 'e':
		return 1;
	case 'i':
		return 1;
	case 'o':
		return 1;
	case 'u':
		return 1;
	case 'A':
		return 1;
	case 'E':
		return 1;
	case 'I':
		return 1;
	case 'O':
		return 1;
	case 'U':
		return 1;
	default:
		return 0;
	}}
