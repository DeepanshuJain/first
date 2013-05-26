

#include<stdio.h>
#include<conio.h>
long factorial(long);
int main()
{
    long n,ans;
    printf("Enter the number:\t");
    scanf("%ld",&n);
    ans=factorial(n);
    printf("The factorial of %ld is %ld",n,ans);
    getch();
}
long factorial (long a)
{
     if (a <= 1)
     return 1;
     else
     a=a*factorial(a-1);
     return a;
     
     }
    
