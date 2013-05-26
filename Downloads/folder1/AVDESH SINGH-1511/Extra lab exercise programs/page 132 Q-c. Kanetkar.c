// page 132 Q-c, Kanetkar 
//To find the sum of 1/1! + 2/2! + 3/3! ..... upto 7/7!

#include<stdio.h>
float fact(int);
int main()
{
    int z;
int a=1;
float sum=0,b;
    while ( a<=7)
    {
    b= fact(a);
    sum=sum + a/b;
    a++;
    }
    printf("%f",sum);
    scanf("%d",&z);
}   

float fact(int d)
{
      float f=1;
      while ( d >= 1)
      {
            f=f*d;
            d--;
            }
            return (f);
}
