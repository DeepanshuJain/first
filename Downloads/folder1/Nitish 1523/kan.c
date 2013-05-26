#include<stdio.h>
main()
{
	int i=4,*j,*k;
	j=&i;
	printf("%d\n",j);
	j=j+1;
	 printf("%d\n",j);

	j=j+9;
	 printf("%d\n",j);

	k=j+3;
	 printf("%d\n",k);
}
