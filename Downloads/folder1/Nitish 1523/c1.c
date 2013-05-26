#include<stdio.h>
int main()
{
	char ch;
	printf("\n Enter the input:");
	scanf("%c",&ch);
	if((ch>=48 && ch<=57)||(ch>=65 && ch<=90)||(ch>=97 && ch<=122))
	{
		printf("\n Character is alphanumeric");}
	else
	{	printf("\n Character is not alphanumeric");}
	return 0;
}


