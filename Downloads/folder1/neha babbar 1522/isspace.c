#include<stdio.h>
int space(int);
	main()
{
	int a, b;
	printf("enter any character\n");
	scanf("%c", &a);
	b=space(a);
		printf("%d\n",b);
}
int space(int x)
{
	
	if((x=='\t')||(x=='\r')||(x=='\v')||(x==' ')||(x=='\n'))
	{
		printf("it is space\n");
		return 1;
	}
	return 0;
}

