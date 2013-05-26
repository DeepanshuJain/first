#include<stdio.h>
void main()
{
	int n,i,p;
	printf("enter no\n");
	scanf("%d", &n);
	if (n==0)
	printf("1");
	else
	{
		for(i=n;i>=1;i--)
		{
			p=p*i;
		}
	}
	
