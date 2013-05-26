#include<stdio.h>
int main(int argc,char *argv[])
{
    struct x{int a;
    int b;
     int c;
    int d;};
    struct x anil={.a=1,.c=3,.b=2,.d=0},* sunil;
    //anil=;
    /*anil.a=10;
    anil.b=5;
    */sunil=&anil;
    printf("%d\n%d\t%d\t%d\t%d\t\n",sizeof(struct x),(anil.a),(anil.b),(anil.c),(anil.d));
    printf("%d",sizeof(sunil));
    getchar();}
