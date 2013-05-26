#include<stdio.h>
void copy(char s[],char t[]);
void main()
{
	char s[20],t[20];
	printf("enter a string :\n");
	scanf("%s",s);
	copy(s,t);
}

void copy(char s[],char t[])
{
	t=s;
	printf("copied string is :%s\n",t);
}


