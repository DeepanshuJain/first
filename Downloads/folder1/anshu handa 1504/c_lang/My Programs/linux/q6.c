#include<stdio.h>
void main()
{
	int x=1;
	for(;x<10;x++)
	{
		if(x==5)
			break;
		printf("%d\n",x);
	}
	printf("value of x after loop %d\n",x);
}

