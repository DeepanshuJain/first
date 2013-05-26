#include<stdio.h>

void main()
{

	static int a=1,b=2,c=3,i,j,temp1,temp2;
	temp1=0,temp2=0;
	printf("\nAll possible combinations of 1,2 ,3 are : " );
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d %d %d \n\t\t\t\t\t  ",a,b,c);
			temp1=b;
			b=c;
			c=temp1;

		}
		temp2=c;
		c=a;
		a=temp2;
	}

}
