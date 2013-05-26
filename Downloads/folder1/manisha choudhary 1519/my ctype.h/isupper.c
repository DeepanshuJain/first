#include<stdio.h>
void isupper(int );
int main()
{
    int z;
    int c;
    c=getchar();
    isupper(c);
    scanf("%d",&z);
}
void isupper(int a)
{
     if(a>=65 && a<=90)
     
                       printf("\nit is uppercase");
                       else 
                       printf("\nit is not uppercase");
}
