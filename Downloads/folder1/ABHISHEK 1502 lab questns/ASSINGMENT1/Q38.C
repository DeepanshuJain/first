#include<stdio.h>

void mystrcat(char*a,char*b);
main()
{
 char a[100],b[100];
printf("enter the first string\n");
gets(a);
printf("enter the second string\n");
gets(b);
mystrcat(a,b);
}
void mystrcat(char*a,char*b)
{
 int i,l,j;
printf("the value of a u is %p\n",a);
 for(l=0;*a!='\0';l++)
    a++;
printf("the value of l is %d\n",l);
printf("the value of a is %p \n",a);
 i=0;
 while(*b!='\0')
{
*a=*b;
printf("the value of a is %p and content is %c\n",a,*a);
 b++;
 a++;
 i++;
}
printf("the value of i is%d \n",i);
*a=*b;
a=a-l-i;
printf("the value of a is %p\n",a);
printf("the value of a is %p \n",a);
printf("the concatenated string is\n");
puts(a);
printf("\n");
return;
}
