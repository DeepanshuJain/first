#include<stdio.h>

void sconcate(char[],char[]);
int slength(char []);
main()
{
char src[25],dest[50];
printf("Enter the first string \n");
scanf("%s",dest);

printf("Enter the second string \n");
scanf("%s",src);

printf("On concatinating the secong string to the first we get ... \n");
sconcate(dest,src);
}

int slength(char a[])
{
int l=0,i;
for(i=0;a[i]!='\0';i++)
    l++;

return l;
}


void sconcate(char d[],char s[])
{
int n,i,j;
n=slength(d);

for(i=n,j=0;s[j]!='\0';i++,j++)
{
d[i]=s[j];
}
d[i]='\0';

printf("%s \n",d);
}
