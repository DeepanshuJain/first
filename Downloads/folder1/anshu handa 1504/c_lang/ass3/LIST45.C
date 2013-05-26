#include<stdio.h>
#include<conio.h>
int mystrrev(char*a);
main()
{
	clrscr();
	char a[100];
	int p;
	printf("\nEnter the string : ");
	gets(a);
	p=mystrrev(a);
	printf("\n");
	getch();
}

int mystrrev(char*a)
{
	int i=0;
	for(i=0;*a!='\0';i++)
		a++;
	a=a-1;
	printf("\nThe reversed string is : ");
	while(i>0)
	{
		printf("%c",*a);
		a--;
		i--;
	}
	return 0;
}
