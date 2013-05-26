//to check the number is prime or not
#include<stdio.h>
int main()
{
 int z;
 int i,num,j=0;
 printf("Enter a number :\t");
 scanf("%d",&num);
 for ( i=2; i<=(num-1); i++)
 {
     if ((num%i) == 0)
     {
     j=1;
     break;
     }
 }
     if (j==1)
     printf("\nThis is not a prime number");
     else
     printf("\nThis is a prime number"); 
 
 scanf("%d",&z);
 }
