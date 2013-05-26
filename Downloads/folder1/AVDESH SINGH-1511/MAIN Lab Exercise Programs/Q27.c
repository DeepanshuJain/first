#include<stdio.h>
#include<conio.h>
void pa(int [],int,int);
int main()
{
int a[4]={10,20,30,40};// can be taken from user
 pa(a,0,3);


getch();}
void pa(int a[],int lb,int ub)
{
       if(lb==ub)
       printf("\n%d",a[lb]);
       else
       {
           printf("\n%d",a[lb]);
           pa(a,lb+1,ub);
       }
}
