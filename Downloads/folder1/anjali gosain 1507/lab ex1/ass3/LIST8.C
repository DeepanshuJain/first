#include<stdio.h>

void main()
{
	int n,a=0,b=1,count=2,nterm;
	printf("\nEnter 'n' : ");
	scanf("%d",&n);
	printf("\nThe fibonacci sequence till %d terms is : %d %d ",n,a,b);
	while(count != n)
	{	nterm=a+b;
		a=b;
		b=nterm;
		count++;
		printf("%d ",nterm);
	}

}