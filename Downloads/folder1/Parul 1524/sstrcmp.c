#include<stdio.h>
#include<string.h>
int xstrcmp(char*,char*);
main()
{
	char a[50],b[50];
	printf("enter two strings");
	gets(a);
	gets(b);
	printf("%d",strcmp(a,b));
	printf("the function returns   %d",xstrcmp(a,b));
}
int xstrcmp(char*str1,char*str2)
{
	int c;
	while((*str1!='\0')||(*str2!='\0'))
	{
		c=*str1-*str2;
		if(c!=0)
		
			break;
		 printf("c=%d",c);

		++str1;
		++str2;
	}
	printf("%d",c);
	return c;
}

	
