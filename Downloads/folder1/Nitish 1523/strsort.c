#include<stdio.h>
#include<string.h>
main()
{
	char arr[5][30],a[1][30];
	int i,j,k,l,m;
	printf("enter 5 names to be sorted");
	for(i=0;i<5;i++)
		gets(&arr[i][30]);
	for(k=0;k<4;k++)
	{
		m=strcmp(&arr[k][30],&arr[k+1][30]);
			if(m>1)
			{
				strcpy(&a[0][30],&arr[k][30]);
				strcpy(&arr[k][30],&arr[k+1][30]);
				strcpy(&arr[k+1],&a[0][30]);
			}
	}
	for(k=0;k<5;k++)
		puts(&arr[k][30]);
}


