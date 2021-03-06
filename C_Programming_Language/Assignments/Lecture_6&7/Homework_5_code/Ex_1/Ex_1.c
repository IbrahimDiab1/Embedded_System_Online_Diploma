/*
 ============================================================================
 Name        : EX_1_Structure.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_1 in macro & structure in C, Ansi-style
 ============================================================================
 */

/*
 * Program to Store Information(name, roll and marks) of a Student Using Structure
 */

#include <stdio.h>
#include <stdlib.h>

struct S_student
{
	char name[50];
	int rollNum;
	float mark;

};


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct S_student s;
	printf("enter information of student:\n");
	printf("\nEnter name: ");
	scanf("%s",&s.name);
	printf("Enter roll number: ");
	scanf("%d",&s.rollNum);
	printf("Enter marks: ");
	scanf("%f",&s.mark);
	printf("\nDisplaying information:\n");
	printf("\nname: %s",s.name);
	printf("\nRoll: %d",s.rollNum);
	printf("\nMarks: %g",s.mark);

	return 0;
}
