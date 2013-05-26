#include<stdio.h>
int  rande (void);


void main()
{
	int num,i;
	for ( i=0;i<=99;i++)
	{
		num=rande();
		printf("num=%d",num);
	}
}
int rande(void)
{
	               int next=1;
			                        next=next*1103515245+12345;
						                                return (unsigned int)   (next/65536)%32768;
}

