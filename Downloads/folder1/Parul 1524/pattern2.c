#include<stdio.h>
main()
{
	int a=0,b=8,i,j,k;
	for(i=1;i<=9;++i)
	{
		printf("%d",i);
		if(b==i)
		{
			for(;b>0;b--)
				printf("%d",b);
		}

	}
}
