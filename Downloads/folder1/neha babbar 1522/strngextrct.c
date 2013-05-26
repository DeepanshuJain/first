
#include<stdio.h>
#include<string.h>
int main ()
{
char str[20],news[20];
char *s,*t;
int pos,n,i;
printf("enter string\n");
scanf("%S",str);
printf("enter position n no of chars\n");
 scanf("%D,%d",&pos,&n);
 s=str;
 t=news;
 if (n==0)
 n=strlen(str);
 s=s+pos-1;
 for(i=0;i<n;i++)
 {
 *t=*s;
 s++;
 t++;
 }
 *t='\0';
 printf("\n substring is %S\n",news);
 return 0;
 }

