#include<stdio.h>
	
void digit(int);
main()
{      	int a;
	printf("enter a charcter\n");
	scanf("%d",&a);

	digit(a);
}
void digit(int b)
{
	 (('b'>=48)&&('b'<=57)) ? printf( "\nis digit\n") : printf("\nnot a digit\n");
}
        
