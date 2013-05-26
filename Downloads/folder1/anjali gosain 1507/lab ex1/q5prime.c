#include<stdio.h>
main()
{
int i=2,num;
printf("enter the number:");
scanf("%d",&num);
while(i<num)

{
if(num%i==0)
{
printf("the number is not prime");
break;
}


i++;
}


if(i==num)
printf("the number is prime");
}



