/*
 ============================================================================
 Name        : Q_2.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : Q2 in Pointers in C.
 ============================================================================
 */

/*
 *  Write a program in C to print all the alphabets using a pointer.
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char alpha[26];
	char *ptr=alpha;
	char i=0;
	for(;i<26;i++)
		alpha[i]='A'+i;

	printf("The alphabets are :\n");

	for(i=0;i<26;i++)
	{
		printf("%c ",*ptr);
		ptr++;
	}
}
