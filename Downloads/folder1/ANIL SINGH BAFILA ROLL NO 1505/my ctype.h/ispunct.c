//AVDESH KUMAR SINGH
#include<stdio.h>
void ispunct(int );
int main()
{
    int z;
    int c;
    c=getchar();
    ispunct(c);
    scanf("%d",&z);
}
void ispunct(int a)
{
     if((a>=33 && a<=47) || (a>=58 && a<=63) || (a>=91 && a<=96))
     
                       printf("\nit is punctuation");
                       else 
                       printf("\nit is not puntuation");
}
