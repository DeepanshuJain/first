#include<stdio.h>
long factorial(int p);

void main()
{
	int n;
	long fact;
	printf("\nEnter the number whose factorial has to be calculated : ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("\nFactorial of %d is %ld.",n,fact);

}

long factorial(int p)
{	long fact1;
	if(p==1 || p==0)
		return 1;
	else
		fact1=p*factorial((p)-1) ;
	return fact1;
}