#include<stdio.h>
int main()
{
	int i;
	printf("enter a character");
	scanf("%c", &i);
	if(i>=65&&i<=90)
		printf("character is an alphabet and is in upper case");
	else if (i>=97&&i<=122)
		printf("character is an alphabet and is in lower case");
	else if(i>=48&&i<=57)
 		printf("It is a digit");
	else printf("unmatched");
	return 0;
}

