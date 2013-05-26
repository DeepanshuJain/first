#include<stdio.h>
#define PRINTARRAY(a,n) for(i=0;i<(n);i++) printf("%d",a[i])

int main()
{
	int i;
	int b[10] = {2,4,6,8,10,12,14,16,18,20};
	printf("Array values are \n");
	PRINTARRAY(b,10);
	return 0;
}

