#include<stdio.h>

int slength(char []);
main()
{
char arr[25];
int len;
printf("Enter a string\n");
scanf("%s",arr);
len=slength(arr);
printf("The length of the string is %d \n",len);
}

int slength(char a[])
{
int l=0,i;
for(i=0;a[i]!='\0';i++)
    l++;

return l;

}
