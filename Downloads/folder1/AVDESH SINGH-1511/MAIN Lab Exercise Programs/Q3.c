//to reverse a 5 digit num
#include<stdio.h>
int main()
{
 int z;
 int i,rev=0,j=5,r;
 printf("Enter the 5 Digit number:\t");
 scanf("%d",&i);
 while( j>0)
 {
 r=i%10;
 i=i/10;
 rev=rev*10+r;
 --j;
 }
 printf("\nThe reversed number is:\t%d",rev);
 scanf("%d",&z);
 }
