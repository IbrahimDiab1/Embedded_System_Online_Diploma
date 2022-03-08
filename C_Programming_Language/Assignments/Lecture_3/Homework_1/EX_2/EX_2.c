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
 * Write C Program to Print a Integer Entered by a User
 * Console-output:
 * Enter a integer: 25
 * You entered: 25
 */


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int input;
	printf("Enter a integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&input);
	printf("\nYou entered: %d",input);
	return EXIT_SUCCESS;
}
