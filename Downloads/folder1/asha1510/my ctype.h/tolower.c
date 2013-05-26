#include<stdio.h>
int tolower(int );
int main()
{
    int z;
    int c,d;
    printf("Enter a upper case:\t");
    c=getchar();
    d=tolower(c);
    printf("RESULT:\t");
    putchar(d);
    scanf("%d",&z);
}
int tolower(int x)
{
     if(( x>= 65) && (x<=90))
     x=x+32;
     return(x);}
