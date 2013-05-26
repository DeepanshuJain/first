#include<stdio.h>
void main()
{
	char s[20],t[20],r[40];;
	printf("enter string1 :\n");
	scanf("%s",&s);
	printf("enter string2 :\n");
	scanf("%s",&t);
	int i=0,k=0;
	for(;s[i]!='\0';i++)
		  r[k++]=s[i];
	for(i=0;t[i]!='\0';i++)
		r[k++]=t[i];
	printf("the resultant string is :\n%s\n",r);
}

