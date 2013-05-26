//WAP for isdigit
#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character:");
	scanf("%c",&ch);
	if(ch>=48 && ch<=57)
		printf("\nCharacter is digit\n");
	else
		printf("\n Character is not digit\n");
	return 0;
}


