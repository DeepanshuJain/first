#include<stdio.h>
#include<conio.h>
int mystrcmpi(char*a,char*b);
main()
{
	char a[100],b[100];
	int p;
	printf("\nEnter the first string : ");
	gets(a);
	printf("\nEnter the second string : ");
	gets(b);
	p=mystrcmpi(a,b);
	if(p!=0)
		printf("\nStrings are equal\n");
	else
		printf("\nStrings not equal\n");

getch();
}
int mystrcmpi(char*a,char*b)
{
	int i,l1,l2;
	char c1,c2;
	for(l1=0;*a!='\0';l1++)
		a++;
	for(l2=0;*b!='\0';l2++)
		b++;
	if(l1!=l2)
		return 0;
	a=a-l1;
	printf("\nThe value in a is %s\n",a);
	b=b-l2;
	printf("\nThe value in b is %s\n",b);
	while(*a!='\0')
	{
		c1=*b-32;
		c2=*b+32;
		if((*a==*b)||(*a==c1)||(*a==c2))
		{
			a++;
			b++;
		}
	else
		return 0;
	}
	return 1;
}
