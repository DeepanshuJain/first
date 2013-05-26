#include<stdio.h>

void scopy(char[],char[]);
main()
{
char src[25],dest[25];
printf("Enter a string you want to copy \n");
scanf("%s",src);
printf("copy_function is called ... \n");
scopy(dest,src);
}


void scopy(char d[],char s[])
{
int i;
for(i=0;s[i]!='\0';i++)
{
d[i]=s[i];
}
d[i]='\0';
printf("The copied string is %s \n",d);
}
