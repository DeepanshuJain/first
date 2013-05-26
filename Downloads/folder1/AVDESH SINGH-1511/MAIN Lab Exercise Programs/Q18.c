#include<stdio.h>
#include<conio.h>
int main()
{  
    unsigned long int n,a,b,sum=0;
    printf("Enter the number: ");
    scanf("%ld",&n);
    b=n;
   
    while(n!=0)
    {
               a=n%10;
               sum= sum*10 + a;
              
               n=n/10;
    }
    if(b==sum)
    printf("\nYes it is a palindrome number");
    else
    printf("\n No, It is not a palindrome number");
    getch();}
