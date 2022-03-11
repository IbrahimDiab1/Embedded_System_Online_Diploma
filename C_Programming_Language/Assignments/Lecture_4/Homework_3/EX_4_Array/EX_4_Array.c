/*
 ============================================================================
 Name        : EX_4_Array.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_4 in Array in C, Ansi-style
 ============================================================================
 */

/*
 * Program to insert an element in an array
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int no,input,location;
	int arr[100];
	printf("Enter no of elemnets:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&no);
	fflush(stdin);fflush(stdout);
	for(char i=0;i<no;i++)
		scanf("%d",&arr[i]);
	fflush(stdin);fflush(stdout);
	printf("Enter the element to be inserted :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&input);
	fflush(stdin);fflush(stdout);
	printf("Enter the location:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for(char i=no;i>location-1;i--)
		arr[i]=arr[i-1];
	arr[location-1]=input;
	no++;
	for(char i=0;i<no;i++)
		printf("%d  ",arr[i]);

	return 0;
}
