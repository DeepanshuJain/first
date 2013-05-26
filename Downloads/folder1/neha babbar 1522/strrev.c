#include<stdio.h>
void reverse(char s[]);
void main()
{
	char s[20];
	printf("enter a string :\n");
	scanf("%s",s);
	reverse(s);
}
void reverse(char s[])
{
	int i,j=0;
	char r[20];
	for(i=0;s[i]!='\0';i++);
	i--;
	while(i>=0)
		r[j++]=s[i--];
	printf("the reversed string is :\n%s\n",r);
}





