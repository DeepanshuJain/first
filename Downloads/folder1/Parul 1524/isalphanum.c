#include<stdio.h>
void issalnum(char);
main()
{
	char a;
	printf("enter a character");
	scanf("%c",&a);
	issalnum(a);
}

void issalnum(char b)
{
	((b>=48&&b<=57)||(b>=65&&b<=90)||(b>=97&&b<=122)) ? printf("number or alphabet"):printf("other");
}


