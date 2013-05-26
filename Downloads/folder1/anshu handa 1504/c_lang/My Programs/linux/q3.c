#include<stdio.h>

void main()
{
 int c;
 long nc=0;
 while((c=getchar())!=EOF)
 {
	 nc++;
	 putchar(c);
 }
	 printf("\nnc=%ld\n",nc);
 
}
