#include<stdio.h>

main()
{
	int n,sum,rem;
	printf("\nArmstrong numbers from 0 to 500 :");
	for(int i=0;i<=500;i++)
	{       n=i;
		sum=0;
		while(n>0)
		{	rem=n%10;
			n/=10;
			sum+=rem*rem*rem;
		}
		if(sum==i)
			printf(" %d ",i);
	}

}