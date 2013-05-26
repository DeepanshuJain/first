#include<stdio.h>
int mystrlen(char*a);
main()
{  
	int len;
	char a[100];
	printf("\nEnter the string\n");
	gets(a);
	len=mystrlen(a);
	printf("\nThe length of the string is %d\n",len);

}

int mystrlen(char*a)
{
	int i=0;
	while(*a!='\0')
	{
		i++;
		a++;
	}
	return i;
}
