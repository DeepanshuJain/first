#include<stdio.h>
int main()
{
	int i;
	printf("enter a character");
	scanf("%c",&i);
	if(i>=97&&i<=122)
		printf("character is in lower case");
	else
		printf("character is in upper case");
	return 0;
}

