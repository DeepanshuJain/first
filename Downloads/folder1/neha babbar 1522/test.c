#include<stdio.h>
main()
{
	int c,num=0,n;
	printf("enter a string of numbers");
	for(;(c=getchar())!=EOF;)
	{// printf("c=%c\n",c);

		n= c-'0';
	//	printf("n=%d\n",n);

		num=num*10+n;
	}
	printf("\n");
	printf("%d",num);
}


