#include<stdio.h>
int strln(char *);
void strcopy(char *, char*);
void strconcat(char*,char*);
main()
{
	char str1[200];
	char str2[200];
	printf("enter the 2 strings to be appended");
	gets(str1);
	gets(str2);
	strconcat(str1[200],str2[200]);
	puts(str1);
}
int strln(char *a)
{
	int length=0;
	while(*a!='\0')
	{
		length++;
		a++;
	}
	return length;
}

void strcopy(char *trgt, char *src)
{
	while(*src!='\0')
	{
		*trgt=*src;
		src++;
		trgt++;
	}
	*trgt='\0';
}
void strconcat(char *str01,char *str02)
{
	int i,j,k;
	while(*str01!='\0')

		str01++;
		

	while(*str02!='\0')
	{
		*str01=*str02;
		str01++;
		str02++;
	}
	*str01='\0';
	/*k=str01;
	str01=str01-k+1;
	for(;*str01!='\0';)
		printf("%c",*str01);*/
}


	

	







