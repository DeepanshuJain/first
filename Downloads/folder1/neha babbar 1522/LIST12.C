#include<stdio.h>

main()
{
	char ch;
	printf("\nEnter a uppercase character : ");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
		printf("\n%c in lowercase is %c",ch,ch+32);
	else
		printf("\n%c is not a uppercase character !!",ch);

}