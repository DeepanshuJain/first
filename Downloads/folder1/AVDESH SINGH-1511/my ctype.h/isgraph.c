//AVDESH KUMAR SINGH
#include<stdio.h>
void isgraph(int );
int main()
{
    int z;
    int c;
    c=getchar();
    isgraph(c);
    scanf("%d",&z);
}
void isgraph(int a)
{
     if((a>=65&&a<=90) || (a>=97 && a<=122) || (a>=48 && a<=57) || (a>=33 && a<=47) || (a>=58 && a<=63) || (a>=91 && a<=96))
     
                       printf("\n1");
                       else printf("\n0");
}





