#include<stdio.h>

void main()
{
int i,j,k,n,p;
printf("enter the size of pyramid");
scanf("%d",&n);

p=n;
for(i=1;i<=n;i++)
{
	for(j=1;j<p;j++)
	
	printf(" ");
	p--;
for(j=1;j<=2*i-1;j++)
	printf("*");
	printf("\n");
}
}
