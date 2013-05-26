#include<stdio.h>

void schar(char[],char);
main()
{
char arr[25],ch;
printf("Enter a string \n");
scanf("%s",arr);
printf("Enter the character whose occurence is to be checked .. \n");
scanf("%c",&ch);

schar(arr,ch);
}


void schar(char a[],char c)
{
int i,flag;
for(i=0;a[i]!='\0';)
{
if(a[i]=='c')
{
flag=1;
break;
}

else
i++;
}

if(flag==1)
printf("The character  %c  is found .. \n",c);

else
printf("The character  %c  is not found .. \n",c);
}

