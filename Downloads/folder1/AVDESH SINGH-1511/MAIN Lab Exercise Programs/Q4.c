//to interchnance numbers input to C and D
#include<stdio.h>
int main()
{
 int z;
 int t,C,D;
 printf("Enter the number in C:\t");
 scanf("%d",&C);
  printf("\nEnter the number in D:\t");
  scanf("%d",&D);
 t=C;
 C=D;
 D=t;
 printf("\nThe number in C is %d:\t",C);
 printf("\nThe number in D is %d:\t",D);

 scanf("%d",&z);
 }
