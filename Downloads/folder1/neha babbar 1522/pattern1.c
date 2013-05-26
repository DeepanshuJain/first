#include<stdio.h>
main()
{
	int x=0,p,q,n,i,b=0;
	n=9; p=1;
	for(i=0;i!=n&&n!=0;i++)
	{
		{
			while(x!=n)
			{
				x++;
				printf("%d",x);
			}
			--x;
			while(x!=0)
			{
				printf("%d",x);
				x--;
			}
			--n;
		}
		printf("\n");
	//	for(q=0;q!=p;q++)
	//	{
	//		printf(" ");
	//	}
	//	p++;
	}return 0;
}

