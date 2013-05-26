#include<stdio.h>

void main()
{
	int n;
	printf("\nEnter a number : ");
	scanf("%d",&n);
	if(n%2==0)
		printf("\nYou entered an even number.");
	else
		printf("\nYou entered an odd number.");

}