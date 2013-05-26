#include<stdio.h>
int main()
{

   int i,j;
   printf("enter the character");
   scanf("%c",&i);
   if(i>=97&&i<=122)
   {     j=i-32;
	  printf("LOWER converts to UPPER=%c,%c",i,j);
   }
   else if(i>=65&&i<=90)
	   printf("%c",i);
    else 
	    printf("unmatched");
    return 0;}

