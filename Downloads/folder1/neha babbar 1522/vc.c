
#include<stdio.h>
void main()
{
   char name[20];
   int i;

   printf("hello what is ur name\?");
   scanf("%s",name);
   for(i=0;i<=20;i++)
   printf("%c\n",name[i]);
}
