/*
 ============================================================================
 Name        : EX_2_Structure.c
 Author      : Ibrahim_Diab
 Version     : First one
 Copyright   : Available
 Description : EX_2 in macro & structure in C, Ansi-style
 ============================================================================
 */

/*
 *  Program to Add Two Distances (in inch-feet) System Using Structures
 */

#include <stdio.h>
#include <stdlib.h>

	struct dis
	{
		int feet;
		float inch;
	};


	struct dis sum_dis(struct dis d1,struct dis d2)
	{
		struct dis temp;
		temp.inch=d1.inch+d2.inch;
		if(temp.inch>12)
		{
			temp.inch-=12;
			temp.feet=1+d1.feet+d2.feet;
		}
		else
		temp.feet=d1.feet+d2.feet;

		return temp;
	}

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	struct dis dis1,dis2,temp;

	printf("Enter information of 1st distance\n\n");
	printf("Enter feet: ");
	scanf("%d",&dis1.feet);
	printf("Enter inch: ");
	scanf("%f",&dis1.inch);
	printf("\n\nEnter information of 2nd distance\n\n");
	printf("Enter feet: ");
	scanf("%d",&dis2.feet);
	printf("Enter inch: ");
	scanf("%f",&dis2.inch);

	temp = sum_dis(dis1,dis2);
	printf("\nSum of distance: %d feet  %g inch",temp.feet,temp.inch);

	return 0;
}

