#include<stdio.h>
main()
{
int i,fact=1,num;
printf("enter the number");
scanf("%d",&num);
for(i=num;i>0;i--)

fact=fact*i;
printf("the factorial is : %d",fact);
}



