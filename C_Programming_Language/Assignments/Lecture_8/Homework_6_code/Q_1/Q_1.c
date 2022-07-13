/*
 ============================================================================
 Name        : Q_1.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : Q1 in Pointers in C.
 ============================================================================
 */

/*
 *  Write a program in C to demonstrate how to handle the pointers  in the program.
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int m =29;
	int *pm=&m;
	printf("Address of m :0x%x\nValue of m : %d",&m,m);

	printf("\nNow ab is assigned with the address of m.\nAddress of pointer ab : 0x%x\nContent of pointer ab : %d",pm,*pm);

	m=34;

	printf("\nThe value of m assigned to 34 now.\nAddress of pointer ab : 0x%x\nContent of pointer ab : %d",pm,*pm);

	*pm=7;

	printf("\nThe pointer variable ab is assigned with the  value 7 now.\nAddress of pointer ab : 0x%x\nContent of pointer ab : %d",pm,*pm);

}
