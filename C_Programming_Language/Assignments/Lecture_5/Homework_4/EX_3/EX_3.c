/*
 ============================================================================
 Name        : EX_3_Functions.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_3 in Functions in C, Ansi-style
 ============================================================================
 */

/*
 *   program to Reverse a Sentence Using Recursion
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(unsigned char [],int);

int main()
{
	unsigned char in[100],c=0;
	printf("enter a sentence:");
	fflush(stdin);fflush(stdout);
	gets(in);
	rev(in,strlen(in));
	printf("%s",in);
}

void rev(unsigned char r[],int l)  //without using temp array
{
	for(int i=0;i<(l/2);i++)
	{
		r[i]+=r[l-i-1];
		r[l-1-i]=r[i]-r[l-1-i];
		r[i]-=r[l-1-i];
	}
}
