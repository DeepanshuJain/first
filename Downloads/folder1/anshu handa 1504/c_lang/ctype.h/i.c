#include<stdio.h>
int main()
{
	int i;
	printf("enter a digit");
	scanf("%c", &i);
	if(i>=48&&i<=57)
		printf("It is digit");
	else 
		printf("It is not digit");
	return 0;
}

