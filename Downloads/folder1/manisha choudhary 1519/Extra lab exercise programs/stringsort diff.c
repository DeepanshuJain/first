#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{     int z;
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
			strcpy(&z,&arr[j][30]);
			strcpy(&arr[j][30],&arr[j+1][30]);
			strcpy(&arr[j+1][30],&z);


		}
	}
	}
	for(k=0;k<5;k++)
		puts(&arr[k][30]);
		getch();
}
