// WAP for islower()

#include<stdio.h>

int main()
{
	char ch;
	printf("\n Enter the character: ");
	scanf("%c", &ch);

	if(ch>=97 && ch<=122)
		printf("\n Lower case Alphabet.\n");
	else
		printf("\n Not in lower case.\n");

	return 0;
}


