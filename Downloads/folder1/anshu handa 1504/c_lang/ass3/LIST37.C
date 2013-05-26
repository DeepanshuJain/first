#include<stdio.h>
#include<conio.h>
void mystrcpy(char*a,char*b);
main()
{clrscr();
 char a[100];
 char b[100]="hello";
 int l;
 printf("%s",b);
 printf("enter the string\n");
 gets(a);
mystrcpy(a,b);
getch();
}
void mystrcpy(char*a,char*b)
{
 printf("entering into the function\n");
  int j,i;
 i=0;
while(*a!='\0')
{
  *b=*a;
   a++;
  b++;
 i++;
}
b=b-i;
printf("the copied string is\n");
for(j=0;*b!='\0';i++)
{  
printf("%c",*b);
b++;
}
return; 
}



