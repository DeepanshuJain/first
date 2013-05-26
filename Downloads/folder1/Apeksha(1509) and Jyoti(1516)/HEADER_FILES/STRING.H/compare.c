#include<stdio.h>

int scompare(char [],char []);
main()
{
int c;
char src[25],dest[25];
printf("Enter first string \n");
scanf("%s",dest);
printf("Enter second string \n");
scanf("%s",src);

printf("On calling compare_function\n");
c=scompare(dest,src);
if(c==0)
printf("The two strings are equal.. %d \n",c);
else
printf("The two strings are unequal.. %d \n",c);

}

int scompare(char d[],char s[])
{
int i,j,flag=0;
for(i=0,j=0;d[i]!='\0';)
{
if(d[i]==s[j])
{
i++;
j++;
}

else
{
flag=1;
break;
}
}

if(flag==0)
return 0;

else
{
if(d[i]>s[j])
return 1;

else
return -1;
}
}
