/*
 ============================================================================
 Name        : EX_3_Array.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_3 in Array in C, Ansi-style
 ============================================================================
 */

/*
 * This program asks user to enter a matrix (size of matrix is specified by user)
 * and this program finds the transpose of that matrix and displays it.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int row,column;
	int a[100][100];
	int trans[100][100];
	printf("Enter rows and columns of matrix:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&row,&column);
	fflush(stdin);fflush(stdout);
	printf("Enter elemnts of matrix:\n");
	for(char i=0;i<row;i++)
		for(char j=0;j<column;j++)
		{
			printf("\nEnter elemnt a%d%d:",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&a[i][j]);
			trans[j][i]=a[i][j];
		}
	printf("Entered matrix:\n");
	for(char i=0;i<row;i++)
	{
		for(char j=0;j<column;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}
	printf("Transpose matrix:\n");
	for(char i=0;i<column;i++)
	{
		for(char j=0;j<row;j++)
			printf("%d  ",trans[i][j]);
		printf("\n");
	}
	return 0;
}
