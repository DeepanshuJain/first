#include<stdio.h>

main()
{
	int n;
	printf("\nEnter a 5 digit number : ");
	scanf("%d",&n);
	printf("\nThe reversed number is : ");
	for(int i=0;i<5;i++)
	{	printf("%d\n\n",n%10);
		n/=10;
	}

}