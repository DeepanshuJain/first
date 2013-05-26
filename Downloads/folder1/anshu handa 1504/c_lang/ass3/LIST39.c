#include<stdio.h>
int mystrcmp(char*a,char*b);
main()
{
 char a[100],b[100];
 int p;
 printf("enter the first string\n");
 gets(a);
 printf("enter the second string\n");
 gets(b);
p=mystrcmp(a,b);
if(p==0)
printf("strings not equal\n");
else
printf("strings are equal\n");
}
int mystrcmp(char*a,char*b)
{
 int l1,l2,p;
 for(l1=0;*a!='\0';l1++)
   a++;
a=a-l1;
 for(l2=0;*b!='\0';l2++)
  b++;
b=b-l2;
 if(l1!=l2)
  {return 0;}
 else
{
  while(*a!='\0')
  { 
    if(*a!=*b)
       return 0;
    else
     { 
       a++;
       b++;
     }
  }
}
return 1;
}
