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
 * Write C Program to Find ASCII Value of a Character
 * Console-output:
 * Enter a character: G
 * ASCII value of G = 71
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d",ch,ch);

	return EXIT_SUCCESS;
}
