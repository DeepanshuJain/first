//to calculate the sum of digits of  a 5 digit num
#include<stdio.h>
int main()
{
 int z;
 int i,sum=0,j=5,r;
 printf("Enter the 5 Digit number:\t");
 scanf("%d",&i);
 while( j>0)
 {
 r=i%10;
 i=i/10;
 sum=sum+r;
 --j;
 }
 printf("%d",sum);
 scanf("%d",&z);
 }
