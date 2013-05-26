#include <stdio.h>
main()
{
	int i, *j, *k;
	j=&i;
	printf("%d",j);
		j=j+9;
	printf("\n%d",j);
}
