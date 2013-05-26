#include<stdio.h>
void swap (int *a, int*b);

main()
{
	int a[5], i, p=0, q=4,j;
	printf("enter any five numbers\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
        while(p<2)
	{
	swap(&a[p], &a[q]);
        p++; q--;
	}
	printf("reverse order is:\n");
	for(j=0;j<5;j++)
	printf("%d\n",a[j]);
}
void swap (int *a, int*b)
{
	        int temp;
		        temp=*a;
			        *a=*b;
				        *b=temp;
}

