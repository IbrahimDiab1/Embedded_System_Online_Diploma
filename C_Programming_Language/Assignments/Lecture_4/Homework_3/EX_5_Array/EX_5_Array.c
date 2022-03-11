/*
 ============================================================================
 Name        : EX_5_Array.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_5 in Array in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to Search an element in Array
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[100];
	int no,s;
	char counter=0;
	printf("Enter number of elemnts :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&no);
	for(char i=0;i<no;i++)
		scanf("%d",&arr[i]);
	fflush(stdout);fflush(stdin);
	printf("Enter the element to be searched :");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s);
	//fflush(stdout);fflush(stdin);
	for( counter=0;counter<no;counter++)
		if(s==arr[counter])
		{
			printf("Number foundat location =%d",counter+1);
			break;
		}
	if(counter ==no)
		printf("Number is not in the array");

	return 0;
}
