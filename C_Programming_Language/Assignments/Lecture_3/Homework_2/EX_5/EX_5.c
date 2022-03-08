/*
 ============================================================================
 Name        : EX_5.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_5 in C, Ansi-style
 ============================================================================
 */

/*
 *  C Program to Check Whether a Character is an Alphabet or not
*/


#include <stdio.h>
#include <stdlib.h>

char is_alphabet(char);

int main(void) {

	char in;
	printf("Enter a character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&in);
	if(is_alphabet(in))
		printf("%c is an alphabet",in);
	else
		printf("%c is not an alphabet",in);
	return EXIT_SUCCESS;
}

char is_alphabet(char ch)
{
	if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
	{
		return 1;
	}
	return 0;
}
