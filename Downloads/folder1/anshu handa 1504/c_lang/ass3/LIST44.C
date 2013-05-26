#include<stdio.h>
int mystrstr(char*a,char*b);

main()
{
	char a[100],str[100];
	int p;
	printf("\nEnter the string : ");
	gets(a);
	printf("\nEnter the string to be searched : ");
	gets(str);
	p=mystrstr(a,str);
	if(p>=0)
		printf("\nString found at position %d \n",p+1);
	else
		printf("\nString not found\n");

}

int mystrstr(char*a,char*b)
{
	int i,l,pos;
	l=0;
	pos=0;
	while(*a!='\0')
	{ 	i=0;
		if(*a==*b)
		{	pos=l;
			while(*b!='\0')
			{
				if(*a==*b)
				{	a++;
					b++;
					i++;
					l++;
				}
				else
					break;
			}
		}
		if(*b=='\0')
			return pos;
		else
			b=b-i;
		a++;
		l++;
	}
	return -1;
}

