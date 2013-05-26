#include<stdio.h>
#include<conio.h>

int mystrlen(char*);
main()
{
    int l; 
	char a[100];
	printf("Enter a string:\t");
	gets(a);
	l=mystrlen(a);
	printf("The strinf length is %d  ",l);
    getch();
}


int mystrlen(char *a)
{
	int i,e=0;
	for(i=0;*(a+i)!='\0';i++)
	e++;
	return e;
}
