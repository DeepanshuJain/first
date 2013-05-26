#include<stdio.h>
void ishex(char);
main()
{
	char a;
	printf("enter a character");
	scanf("%c",&a);
	ishex(a);
}
void ishex(char b)
{
	if((b>=48&&b<=57)||(b>=65&&b<=70)||(b>=97&&b<=105))
	return 0;
	return 1;
}


