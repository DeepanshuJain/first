#include<stdio.h>
main()
{
	int xstrlen(char[]);
	char arr[]="abhishek";
	int len1,len2;
	len1=xstrlen(arr);
	len2=xstrlen("kapoor");
	printf("\nstring=%s    length=%d",arr,len1);
	printf("\nstring=%s    length=%d","kapoor",len2);
}
int xstrlen(char b[])
{
        int length=0;
        int i=0;
	for(;b[i]!='\0';)
	{
		length++;
		i++;
	}
	return (length);
}


