#include<stdio.h>
main()
{
int i,a=0,b=1,fibo=0,n;
printf("enter the value of n");
scanf("%d",&n);
printf("%d \n %d",a,b);
for(i=0;i<n-2;i++)
{
fibo=a+b;
a=b;
b=fibo;
printf("\n%d\n",fibo);
}
}

