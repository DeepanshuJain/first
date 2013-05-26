#include<stdio.h>

void slower(char []);
main()
{
char arr[25];
printf("Enter a string\n");
scanf("%s",arr);
slower(arr);
}

void slower(char a[])
{
int i;
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='A' && a[i]<='Z')
{
a[i]+=32;
}
}
printf("The lowercase string is %s \n",a);
}
