//WAp for toupper
#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter the character: ");
	scanf("%c", &ch);
	if(ch>=65 && ch<=90)
		printf("\n Character is in uppercase: %c",ch);
	else
	{
		ch=ch-32;
		printf("\n Character in uppercase is:%c",ch);
	}
return 0;
}


