//palindrome using recursive
#include<stdio.h>
#include<conio.h>
int check(int,int);
int main()
{  
    unsigned long int n,a,sum=0;
    int b;
    printf("Enter the number: ");
    scanf("%ld",&n);
    b=check(0,n);
    if(b==n)
    printf("yes");
    else
    printf("no");
    getch();}
   
    int check(int a,int n)
    {
         if (n==0)
         return 0;
         else
         
          return (10*a+check(n%10,n/10));
          }
