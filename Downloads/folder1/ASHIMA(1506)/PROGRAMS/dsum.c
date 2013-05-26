#include<stdio.h>

main()
{
int num;
int sum=0;
int a;
int rem;
printf("Enter a 5 digit number\n");
scanf("%d",&num);
a=num;
while(a>0)
{
rem=a%10;
sum=sum+rem;
a=a/10;


}
printf("The sum of digits of %d  is = %d\n",num,sum);

}
