# include <stdio.h>
main()
{
 char a;

	a=-128;
	while(a<=126)
	{	a=a+1;
		printf("%d \t\t%c\n",a,a);
	}
return 0;
}
