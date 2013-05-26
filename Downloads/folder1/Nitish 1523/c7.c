// WAP for tolower

#include<stdio.h>

int main()
{
	char ch;
	printf("\n Enter the character:");
	scanf("%c",&ch);
	if(ch>=97 && ch<= 122)
	 printf("\n Character is in lowercase: %c",ch);
	else
	{
		ch=(ch+32);
		printf("\n The character in lower is:%c",ch);
	
	}
	return 0;
}

