//AVDESH KUMAR SINGH
#include<stdio.h>
void isdigit1(int );
int main()
{
    int z;
    int c;
    c=getchar();
    isdigit1(c);
    scanf("%d",&z);
}
void isdigit1(int a)
{
     if(a>=48 && a<=57)
     
                       printf("\nit is digit");
                       else 
                       printf("\nit is not digit");
}
