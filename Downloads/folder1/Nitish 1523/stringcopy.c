#include<stdio.h>
char *stcp(char *, const char *);
main()
{
	char a[20];
	char b[20];
	printf("enter a string a= ");
	gets(a);
	stcp(b, a);
	printf("copied string b =  %s\n", b);

}
	char *stcp(char *b, const char *a)
{
	char temp;
	for(;*a!=EOF;*b=*a,a++, b++)
	;
	*b='\0';
	return b;
}

