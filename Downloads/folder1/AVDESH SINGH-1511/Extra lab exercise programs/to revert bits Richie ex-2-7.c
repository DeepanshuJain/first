//to revert the specified bits of a given number.... 

#include<stdio.h>
void showbits(int );
int main()
{
    int e,b,z;
int p=8;
int n=4;
int x=5767;
int a=0;
a=~(~(~a<<n) << (p+1-n));
z=~a;
z=z&(~x);
showbits(x);
//printf("\n");
//showbits(a);
b=x&a;
//printf("\n");
//showbits(b);
//printf("\n");
//showbits(d);
//~(~(~a<<n) << (p+1-n));
e=z|b;
printf("\n");
showbits(e);
getchar();
}







void showbits ( int  l)
{
int i, k, andmask ;
for ( i = 15 ; i >= 0 ; i-- )
{
andmask = 1 << i ;
k = l & andmask ;
k == 0 ? printf ( "0" ) : printf ( "1" ) ;
}
}
