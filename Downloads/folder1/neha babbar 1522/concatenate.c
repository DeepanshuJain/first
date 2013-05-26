#include<stdio.h>
void strcate(char*s1,char*s2);
void main()
{
	char s1[20];
	char s2[20];
	printf("enter string 1");
	gets(s1);
	printf("enter stringf 2");
	gets(s2);
	strcate(s1, s2);
	puts(s1);
}
	
		void strcate(char *str1, char *str2)
		{
		      while(*str1!='\0')
		      str1++;
		      while(*str2!='\0')
		      {

			      *str1=*str2;
			      str1++;
			      str2++;
		      }
		      *str1='\0';
		}

	
