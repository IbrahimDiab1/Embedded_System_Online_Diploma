/*
 ============================================================================
 Name        : EX_2_Array.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_2 in Array in C, Ansi-style
 ============================================================================
 */

/*
 * This program takes n number of element from user(where, nis specified by user),
 * stores data in an array and calculates the average of those numbers.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float numbers[100];
	int num;
	float sum=0;
	printf("Enter the numbers of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	for (int i=0;i<num;i++)
	{
		printf("\nEnter number %d:",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&numbers[i]);
		sum+=numbers[i];
	}
	printf("\nAverage=%.2f",sum/num);
	return 0;
}


