#include<stdio.h>

void snconcate(char[],char[],int);
int slength(char []);
main()
{
char src[25],dest[50];
int n;
printf("Enter the first string \n");
scanf("%s",dest);

printf("Enter the second string \n");
scanf("%s",src);

printf("Enter the number till you want to concatenate the string \n");
scanf("%d",&n);

printf("On concatenating the secong string to the first we get ... \n");
snconcate(dest,src,n);
}

int slength(char a[])
{
int l=0,i;
for(i=0;a[i]!='\0';i++)
    l++;

return l;
}


void snconcate(char d[],char s[],int num)
{
int n,i,j;
n=slength(d);

for(i=n,j=0;j<num;i++,j++)
{
d[i]=s[j];
}
d[i]='\0';

printf("%s \n",d);
}
