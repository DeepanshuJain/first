#include<stdio.h>
void main()
{
	int c,n1,n2,sum;
	sum=0;
	n1=1;
	n2=1;
	printf("%d %d",n1,n2);

	for (c=0;c<10;c++)
	{
	sum=n1+n2;
	n1=n2;
	n2=sum;
	printf("%d\n",sum);
}
}

