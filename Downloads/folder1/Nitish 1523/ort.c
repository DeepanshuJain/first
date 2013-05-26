#include<stdio.h>
void main()
{
	char a[20];
	int i;
	printf("enter a word");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("*  ");
	}
	for(i=1;a[i]!='\0';i++)
	{
		printf("\n*");
	}
}



