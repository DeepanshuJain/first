#include<stdio.h>
int main()
{
int num,sum=0,p;
printf("enter the number:");
scanf("%d",&num);
p=num;
while(num>0)
{
sum=sum+(num%10);
num=num/10;
}
printf("\nthe sum of digits is:%d",sum);
}


