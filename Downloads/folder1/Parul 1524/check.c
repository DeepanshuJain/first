#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[30]="abhishek" ,b[30]="anshu";
	strcpy(a,b);
	puts(a);
	printf("\n");
	printf("%s",a);
	printf("\n");

	for(i=0;a[i]!='\0';i++)
		printf("%c",a[i]);
}
