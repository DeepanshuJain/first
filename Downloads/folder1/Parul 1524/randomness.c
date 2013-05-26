#include<stdio.h>
int rand1(int n)
{
	return(1+(rand()%n));
}
main()
{
	int h,n1;
	printf("enter the value of n");
	scanf("%d",&n1);
	h=rand1(n1);
	printf("the random number generated is :%d",h);
}

