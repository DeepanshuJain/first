#include<stdio.h>
void main()
{
	int i,n[10];
	for(i=0;i<10;i++)
	n[i]=0;
	printf("%s%13s\n","elements","numbers");
	for(i=0;i<10;i++)
		printf("%8d\t%8d\n",i,n[i]);
}
	
