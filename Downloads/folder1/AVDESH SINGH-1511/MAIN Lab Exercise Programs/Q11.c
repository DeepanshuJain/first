#include<stdio.h>
int toupper(int );
int main()
{
    int z;
    int c,d;
    printf("Enter a lower case:\t");
    c=getchar();
    d=toupper(c);
    printf("RESULT:\t");
    putchar(d);
    scanf("%d",&z);
}
int toupper(int x)
{
     if(( x>= 97) && (x<=122))
     x=x-32;
     return(x);}
