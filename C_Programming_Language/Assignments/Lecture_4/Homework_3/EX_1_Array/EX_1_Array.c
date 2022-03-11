/*
 ============================================================================
 Name        : EX_1_Array.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_1 in Array in C, Ansi-style
 ============================================================================
 */

/*
 * Write a C program to find sum of two matrix of order 2*2 using
 * multidimensional arrays where, elements of matrix are entered by user.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a[2][2],b[2][2];
	printf("Enter elements of first matrix:\n");
	for(char i=0;i<2;i++)
		for(char j=0;j<2;j++)
		{
			printf("\nEnter a%d%d:",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	printf("\nEnter elements of second matrix:\n");
	for(char i=0;i<2;i++)
		for(char j=0;j<2;j++)
		{
			printf("\nEnter a%d%d:",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	printf("\nESum of matrix:\n");
	for(char i=0;i<2;i++)
	{
		for(char j=0;j<2;j++)
		{
			printf("%.2f  ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}

	return 0;
}
