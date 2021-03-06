/*
 ============================================================================
 Name        : Q_4.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : Q4 in Pointers in C.
 ============================================================================
 */

/*
 *  Write a program in C to print the elements of an array in reverse  order.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num[15];
	char input;
	int *ptr=num;
	printf("Input the number of elements to store in the array: ");
	scanf("%d",&input);

	for(char i=0;i<input;i++)
	{
		printf("element %d :",i+1);
		scanf("%d",ptr+i);
	}

	printf("\nThe elements of array in reverse order are:\n");
	for(char i=input-1;i>=0;i--)
		printf("element %d : %d\n",i+1,*(ptr+i));

}
