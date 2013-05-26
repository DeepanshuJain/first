#include<stdio.h>
void ishex(char);
main()
{
      int z;
	char a;
	printf("enter a character:\t");
	scanf("%c",&a);
	ishex(a);
scanf("%d",&z);
}
void ishex(char b)
{
	((b>=48&&b<=57)||(b>=65&&b<=70)||(b>=97&&b<=105))?printf("it is hex"):printf("it ia not hex");
}
