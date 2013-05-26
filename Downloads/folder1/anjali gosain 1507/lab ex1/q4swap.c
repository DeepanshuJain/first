#include<stdio.h>
void swap(int *a, int *b)
{

int temp;
temp=*a;

*a=*b;
*b=temp;
}
main()
{
int a1,b1;
printf("\nenter the values to be swapped :");
scanf("%d %d",&a1,&b1);


swap(&a1,&b1);
printf("\nvalues after swap a1=%d b1=%d",a1,b1);
}



