#include<stdio.h>
void length(char[]);
void main()
{
	char string[30];
	printf("enter the string whose length u want to find");
	gets(string);
	length(string);
}
void length(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	printf("the length of the string %d",i);
}

