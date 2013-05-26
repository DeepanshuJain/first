#include<stdio.h>
#include<string.h>
main()
{
char c[20];
int j,i,h=0;
printf("enter a letter in lower case:");


gets(c);

h=strlen(c);

for(i=0;i<h;i++)
{
if(c[i]>=97&&c[i]<=122)

c[i]=c[i]-32;
}




printf("%s",c);
}

