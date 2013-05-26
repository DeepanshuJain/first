#include<stdio.h>

main()
{
	int n,i,sp,j;
	printf("\nEnter the number of lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	sp=n-i;
		printf("\n");
		for( ;sp>0;sp--)
			printf(" ");
		for(j=(2*i-1);j>0;j--)
			printf("*");
	}

}