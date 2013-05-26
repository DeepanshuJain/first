#include<stdio.h>
void sum(int,int);
void sub(int,int);
int main()
{
    void (*fp)(int,int);
    fp=sum;
    fp(5,2);
    fp=sub;
    fp(5,2);
    getche();
    return 0;
    }
    void sum(int a,int b)
    {
         printf("The sum of digit is %d",a+b);
         return;}
         void sub(int a,int b)
    {
         printf("The sum of digit is %d",a-b);
         return;}
