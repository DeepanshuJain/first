#include<stdio.h>

int slength(char []);
void sreverse(char []);

main()
{
char arr[25];
printf("Enter a string\n");
scanf("%s",arr);
sreverse(arr);
}


int slength(char a[])
{
int l=0,i;
for(i=0;a[i]!='\0';i++)
    l++;

return l;

}


void sreverse(char a[])
{
int i,j,l;
char temp;
l=slength(a);

for(i=0,j=l-1;i<j;i++,j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

printf("The reversed string is %s \n",a);
}
