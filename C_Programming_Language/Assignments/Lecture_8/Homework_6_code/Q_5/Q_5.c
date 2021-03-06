/*
 ============================================================================
 Name        : Q_5.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : Q5 in Pointers in C.
 ============================================================================
 */

/*
 * Write a program in C to show a pointer to an array which contents are pointer to structure.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct emp
{
	char name[50];
	int id;
}emp;

	emp em[3]={{"ali",50},{"omar",60},{"ahmed",70}};

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	emp *ptr[3]={&em[0],&em[1],&em[2]};
	emp *(*pointer)[3]=&ptr;

	printf("Second employee name: %s\n",(*(*pointer+1))->name);
	printf("Second employee id: %d",(*(*pointer+1))->id);

}
