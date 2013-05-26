// WAP for isupper

#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter the character.");
	scanf("%c", &ch);

	if(ch>=65 && ch<=90)
		printf("\n Character is in uppercase.\n");
	else
		printf("\n Not uppercase.\n");

	return 0;
}

