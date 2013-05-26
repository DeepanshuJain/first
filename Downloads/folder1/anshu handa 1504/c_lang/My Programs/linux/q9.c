#include<stdio.h>
void main()
{
	int power(int n,int p);
	int q=0,num,powe;
	printf("enter the number :\n");
	scanf("%d",&num);
	printf("enter the power :");
	scanf("%d",&powe);
	q=power(num,powe);
	printf("\nthe %d power of %d is %d\n",powe,num,q); 
}
int power(int n,int p)
{int i=1,res=1;
	for(;i<=p;i++)
	res*= n;
	return res;
}


