#include<stdio.h>
#include<ctype.h>
int mystrwr(char*a);
main()
{
 char a[100];
int p;
 printf("enter the string\n");
 gets(a);
 printf("the string in lowercase is\n");
 p=mystrwr(a);
}
int mystrwr(char*a)
{
 int i=0;
 while(*a!='\0')
 {
  if(isupper(*a))
    *a=tolower(*a);
  a++;
   i++;
 }
a=a-i;
puts(a);
return 1;
}
