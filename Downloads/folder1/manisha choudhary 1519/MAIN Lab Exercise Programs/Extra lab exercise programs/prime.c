#include<stdio.h>
int main()
{
     int k=2;
     int a,b,i,j;
     scanf("%d",&a);
     i=a-1;
     while(k<=i)
     {
               j=a%k;
               if (j==0)
               {
                        printf("This is not a prime number\n");
                     break;
                        }
                        ++k;
                        }
      if(j!=0)
      {
              printf("this is a prime number");
              }
      scanf("%d",b);
      }
                        
