#include<stdio.h>
main()
{
int rev=0,rem=0,num;
printf("enter the number:");
scanf("%d",&num);

while(num>0)
{


rev=(rev*10)+(num%10);
num=num/10;

}
printf("the reverse of the number is%d : ",rev);
}
