#include<stdio.h>
void main()
{
	
	char arr[50];
 int strlen(arr);
int len; 
 printf(" enter string\n");
 scanf("%s",arr);
len= strlen(arr);
printf("\n string= %s length of string is=%d",arr,len);
}


int strlen(char *s)
{
	int length=0;
	while(*s!='\0')
	{
	length++;
	s++;
	}
	return(length);
}

