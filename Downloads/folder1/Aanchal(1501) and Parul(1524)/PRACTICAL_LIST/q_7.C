#include<stdio.h>

main()
{
	int n,fact=1;
	printf("\nEnter the number whose factorial you want to calculate : ");
	scanf("%d",&n);
	if(n==0 || n==1);
	else
		for( ;n>0;n--)
			fact*=n;
	printf("\nThe factorial is : %d",fact);

}