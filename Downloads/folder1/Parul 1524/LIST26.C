#include<stdio.h>
int fib(int a,int b,int n);
main()
{

	int n,a,b,k;
	a=0,b=1;
	printf("\nEnter the number of terms upto which the sequence is to be printed : ");
	scanf("%d",&n);
	printf("\nFibonacci sequence upto %d terms is : ",n);
	if(n==1)
		printf("%d",a);

	else
		printf("%d %d",a,b);
	fib(a,b,n);
	printf("\n");

}

int fib(int a,int b,int n)
{
	int c=0;
	if(n==2||n==1)
		return 0;

	else
		c=a+b;
	a=b;
	b=c;
	printf(" %d",c);
	n--;
	fib(a,b,n);
}
