//AVDESH KUMAR SINGH
#include<stdio.h>
void alnum1(int );
int main()
{
    int z;
    int c;
    c=getchar();
    alnum1(c);
    scanf("%d",&z);
}
void alnum1(int a)
{
     if((a>=65&&a<=90) || (a>=97 && a<=122) || (a>=48 && a<=57))
     
                       printf("\nit is alphanum");
                       else printf("\nit is not alphanum");
}
