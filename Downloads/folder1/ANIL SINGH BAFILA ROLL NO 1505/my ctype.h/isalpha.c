//AVDESH KUMAR SINGH
#include<stdio.h>
void isalpha(int );
int main()
{
    int z;
    int c;
    c=getchar();
    isalpha(c);
    scanf("%d",&z);
}
void isalpha(int a)
{
     if((a>=65&&a<=90) || (a>=97 && a<=122))
     
                       printf("\nit is alphabet");
                       else 
                       printf("\nit is not alphabet");
}
