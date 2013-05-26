#include<string.h>
#include <stdio.h>
void main()
{
  void strcmp1(char[], char[]);
	char s1[20];
	char s2[20];
	int s;
	printf("enter first string\n");
	scanf("%s", s1);
	printf("enter second string\n");
	 scanf("%s", s2);
         strcmp1(s1,s2);
       }
void  strcmp1(char str1[], char str2[])

{   int a,b,i,j=0;
	a=strlen(str1);
	b=strlen(str2);
	if(a!=b)
	printf("strings(length) are not equal\n");
	else
	{
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]!=str2[i])
		{	j=1;
			break;
		}
		else
		j=0;}
		if(j==1)
		    printf("strings are not equal \n");
                else
			printf("strings are equal\n");
	}
}

