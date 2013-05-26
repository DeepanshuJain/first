#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
    int i,f;
    printf("Enter the number:\t");
    scanf("%d",&i); 
   f= factorial(i);   
    
    printf("\nThe factorial of %d is %d",i,f);
    
    
    getch();}
    
 int   factorial(int n)
 {
             int a,fact=1;     
                  
                  for (a=n;a>=1;a--)
    {
                fact=a*fact;     
                     }
                  
                  return fact;
 }
