//AVDESH KUMAR SINGH
#include<stdio.h>
void islower(int );
int main()
{
    int z;
    int c;
    c=getchar();
    islower(c);
    scanf("%d",&z);
}
void islower(int a)
{
     if(a>=97 && a<=122)
     
                       printf("\nit is lowercase");
                       else 
                       printf("\nit is not lowercase");
}
