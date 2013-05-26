#include<stdio.h>

int main()
{
	char ch;
	printf("\n Enter the character: ");
	scanf("%c", &ch);

	if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
		printf("\n Character is alphabet.");
	else
		printf("\n Character is not alphabet.");

	return 0;
}

