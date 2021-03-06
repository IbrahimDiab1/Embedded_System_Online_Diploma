/*
 ============================================================================
 Name        : EX_4_Structure.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_4 in macro & structure in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to Store Information of Students Using Structure
 */

#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[50];
	int roll;
	int mark;
}s[10];

int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("Enter information of students:\n");
	for (char i=1;i<11;i++)
	{
		s[i].roll=i;
		printf("\nFor roll number %d\n",i);
		printf("Enter name: ");
		scanf("%s",&s[i].name);
		printf("Enter marks:");
		scanf("%d",&s[i].mark);
	}

	printf("Displaying information of students: \n");
	for (char i=1;i<11;i++)
		{
			printf("\nInformation For roll number %d\n",i);
			printf("Name: %s\n",s[i].name);
			printf("Marks: %d\n",s[i].mark);
		}


	return 0;
}
