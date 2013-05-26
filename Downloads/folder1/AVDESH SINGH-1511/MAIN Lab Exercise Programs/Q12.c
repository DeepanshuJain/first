#include<stdio.h>
#include<conio.h>
int tolower(int );
int main()
{
    int z;
    int c,d;
    printf("Enter an upper case letter:\t");
    c=getchar();
    d=tolower(c);
    printf("RESULT:\t");
    putchar(d);
    getch();
}
int tolower(int x)
{
     if(( x>= 65) && (x<=90))
     x=x+32;
     return x;
     }
