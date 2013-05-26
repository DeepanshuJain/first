#include<stdio.h>
#include<math.h>
#define pi 3.14
main()
{
	int r;
	float ar1,ar2;
	printf("\nEnter the radius of the disk : ");
	scanf("%d",&r);
	ar1=pi*r*r;
	ar2=M_PI*r*r;
	printf("\nArea by method 1 : %f",ar1);
	printf("\nArea by method 2 : %f",ar2);

}
