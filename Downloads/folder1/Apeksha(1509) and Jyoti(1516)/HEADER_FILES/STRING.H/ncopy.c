#include<stdio.h>

void sncopy(char[],char[],int);
main()
{
int n;
char src[25],dest[25];
printf("Enter a string you want to copy \n");
scanf("%s",src);
printf("Enter the number till you want to copy the string \n");
scanf("%d",&n);

printf("copy_function is called ... \n");
sncopy(dest,src,n);
}


void sncopy(char d[],char s[],int n)
{
int i;
for(i=0;i<n;i++)
{
d[i]=s[i];
}
d[i]='\0';
printf("The copied string is %s \n",d);
}
