#include<stdio.h>

main()
{
	long count=1;
	char ch;
	printf("\nEnter your data : \n");
	while((ch=getchar()) != EOF)
	{       if(ch=='\n')
			count++;
	}
	printf("\nYour data has %d lines.",count);

}