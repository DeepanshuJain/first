//WAP for isblank
#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter the character:");
	scanf("%c",&ch);
	if(ch==32)
		printf(" \n Character is a blank.\n");
	else
		printf("\n Other character.\n");

	return 0;
}

