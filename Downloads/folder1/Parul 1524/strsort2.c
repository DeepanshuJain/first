#include<stdio.h>
#include<string.h>
main()
{
	char arr[5][30],a[1][30];
	int i,j,m,k,l;
	printf("enter names to be sorted ");
	for(i=0;i<5;i++)
	{
		gets(&arr[i][30]);
		
	}

	
	for(l=0;l<5;l++)
	{
		for(j=0;j<4;j++)
		{

		m=strcmp(&arr[j][30],&arr[j+1][30]);
		if(m>0)
		{
			strcpy(&a[0][30],&arr[j][30]);
			strcpy(&arr[j][30],&arr[j+1][30]);
			strcpy(&arr[j+1][30],&a[0][30]);


		}
	}
	}
	for(k=0;k<5;k++)
		puts(&arr[k][30]);
}

				


