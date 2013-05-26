//incomplete
#include<stdio.h>
#include<conio.h>
unsigned long int next = 5;
int rand (void);
int main()
{   int i;
    unsigned long int a;
    for (i=0;i<5;i++)
    {
        a=rand;
    printf("%ld\t",a);
}
    
    
    
    getch();}


int rand(void)
{   //unsigned long int next = 1;
    next=next * 1103515245+12345;
    return (unsigned int)((next/65536)%32768);
    
    
    }
