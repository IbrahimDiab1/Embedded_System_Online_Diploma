/*
 ============================================================================
 Name        : Q_3.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : Q3 in Pointers in C.
 ============================================================================
 */

/*
 *  Write a program in C to print a string in reverse using a pointer.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char string[50];

		printf("Input a string : ");
		gets(string);
		printf("Reverse of the string is : ");
		for(char i=strlen(string);i>=0;i--)
			printf("%c",string[i]);
}
