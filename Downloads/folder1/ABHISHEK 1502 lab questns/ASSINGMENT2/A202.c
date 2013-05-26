#include<stdio.h>
int main()
{
    int x,y,r,a=0,i;
    printf("Enter the Divident\t: ");
    scanf("%d",&x);
    printf("Enter the Divisor\t: ");
    scanf("%d",&y);a=y;
    for(i=0;a<x;i++)
    a+=y;
    if(a==x)
    printf("The Quatent is %d and remainder is %d",i+1,0);
    else
    {
      printf("The Quatent is %d and remainder is %d",i,x-a+y);
        }
        getchar();
        getchar();
    }
