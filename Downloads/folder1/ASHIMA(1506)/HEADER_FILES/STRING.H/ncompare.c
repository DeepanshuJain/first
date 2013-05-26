#include<stdio.h>

int sncompare(char [],char [],int);
main()
{
int c,n;
char src[25],dest[25];
printf("Enter first string \n");
scanf("%s",dest);
printf("Enter second string \n");
scanf("%s",src);

printf("Enter the number till you want to compare the string \n");
scanf("%d",&n);

printf("On calling compare_function\n");
c=sncompare(dest,src,n);
if(c==0)
printf("The two strings are equal.. %d \n",c);
else
printf("The two strings are unequal.. %d \n",c);

}

int sncompare(char d[],char s[],int n)
{
int i,j,flag=0;
for(i=0,j=0;i<n;)
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
