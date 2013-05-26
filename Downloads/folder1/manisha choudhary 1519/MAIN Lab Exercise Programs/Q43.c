#include<stdio.h>
#include<conio.h>
int mystrchr(char*a,char ch);
main()
{
 char str[100],ch;
 int p;
 printf("enter the string\n");
 gets(str);
 printf("enter the character to be found\n");
 scanf("%c",&ch);
 p=mystrchr(str,ch);
if(p==-1)
printf("character not found\n");
else
printf("the position of character in the string is %d\n",p+1); 
getch();}



int mystrchr(char*a,char c)
{
 int i;
i=0;
while(*a!='\0')
{
 if(*a==c)
  return i;
else
 {
   a++;
   i++;
 }
}
return -1;
}


 
