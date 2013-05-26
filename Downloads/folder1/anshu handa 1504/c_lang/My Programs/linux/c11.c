//isupper2
#include<stdio.h>
int  isupper(int);
void main()
{
	char c;
	printf("enter a character\n");
	Scanf("%c",&c);

	int collect = isupper(c);
	printf("the value returned by isupper() is %d\n", collect);
}

int isupper(int a)
{
	if(a<=90&&a>=65)
	{
		printf("it is in upper case\n");
	 	return 1;
	}

	else
	{
		printf("its not upper case\n");
		return 0;
	}
}
	
