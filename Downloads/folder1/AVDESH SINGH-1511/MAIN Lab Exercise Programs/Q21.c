#include<stdio.h>
#include<conio.h>
int main()
{
                 int i;
                 int num,sum,a;
                 printf("The Armstrong numbers are:\n");
                 for(i=1;1<=500;i++)
                 {
                                    num=i;
                                    sum=0;
                                    while(num != 0)
                                    {
                                              a=num%10;
                                              num=num/10;
                                              a=a*a*a;
                                              sum=sum+a;
                                              
                                              }
                                    if(i==sum)
                                    printf("%d\n",i);
                                    
                                    
                                    }
                 
                 
                 
                 
                 
                 getch();}
