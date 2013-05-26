#include<stdio.h>

main()
{
	FILE *fp;
	char c;
	int sum=0,m=0;
	if((fp=fopen("cs.c","r"))==NULL)
		printf("\nCan not open file \n");

	else
	{
		while((c=fgetc(fp))!=EOF)
		{
			if(c>='0' && c<= '9')
			{
				 m=c-'0';
				sum = sum + m;
			}
		}
	printf("\nSum of the integers present in the file is %d \n",sum);
	}

}
