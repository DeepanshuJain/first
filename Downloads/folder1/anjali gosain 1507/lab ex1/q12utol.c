#include<stdio.h>
main()
{
char c;
printf("enter the character ");
scanf("%c",&c);
if(c>=65&&c<=97)
{
c=c+32;
printf("lower case%c",c);
}
else 
printf("character entered is in lower case");
}
