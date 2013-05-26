#include<stdio.h>
void main()
{
	char c;
	int white=0,others=0,digits=0;
	while((c=getchar())!=EOF)
	{ 
	//	printf("%d\n",c);
		switch(c)
		{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				digits++;
				break;
			case ' ':
			case '\n':
			case '\t':white++;
				  break;
			default :others++;break;
		}
	}
		printf("no of digits are :%d\n no of white spaces are :%d\n no of other characters are :%d\n",digits,white,others);
}
