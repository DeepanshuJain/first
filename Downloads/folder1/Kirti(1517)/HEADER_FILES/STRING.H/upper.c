#include<stdio.h>

void supper(char []);
main()
{
char arr[25];
printf("Enter a string\n");
scanf("%s",arr);
supper(arr);
}

void supper(char a[])
{
int i;
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a' && a[i]<='z')
{
a[i]-=32;
}
}
printf("The uppercase string is %s \n",a);
}
