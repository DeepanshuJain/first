//AVDESH KUMAR SINGH
#include<stdio.h>
void isblank1(int );
int main()
{
    int z;
    int c;
    c=getchar();
    isblank1(c);
    scanf("%d",&z);
}
void isblank1(int a)
{
     if(a==9 || a==32)
     
                       printf("\nit is blank");
                       else 
                       printf("\nit is not blank");
}
