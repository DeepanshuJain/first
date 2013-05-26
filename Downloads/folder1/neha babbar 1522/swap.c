#include<stdio.h>
void swap(int*,int*);
main()
{
	int a,b,c;
	a=5;
	b=9;
	swap(&a,&b);
	printf("the swapped values are a = %d, b = %d",a,b);
}

void swap(int *t,int *u)
{
	int c;
	c=*t;
	*t=*u;
	*u=c;
}
