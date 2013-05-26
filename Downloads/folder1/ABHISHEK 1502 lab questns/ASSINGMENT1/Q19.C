#include<stdio.h>

main()
{
	int i,j,s=7,t=0;
	char ch;
	for(i=0;i<7;i++)
	{      	ch='A';
		for(j=1;j<=13;j++)
		{	if(j<=i+s)
			{	printf("%c",ch);
				if(j<i+s)
					ch++;
				if(i==0 && j==i+s)
					ch--;
			}
			if(i!=0)
			{	if(j>i+s && j<=i+s+t)
					printf(" ");
			}
			if(j>i+s+t)
			{	printf("%c",ch);
				ch--;
			}

		}
		if(i==0)
			t++;
		else
			t+=2;
		s-=2;
		printf("\n");
	}

}