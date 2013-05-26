#include<stdio.h>
void bubblesort(int[5],int);
void swaps(int*,int*);
void main()
{
	int a[5],i;
	printf("Enter an array\n");
	for(i=0;i<=5;i++)
	{
		scanf("%d",&a[i]);
	}
 bubblesort (a,6);
}





void bubblesort(int b[],int size)
{ int pass,n;
	for (pass=size-1;pass>=2;pass--)
	{
	int i=1;
		for (;i<=size;i++)
		{
			if (b[i]>b[i+1])
				swaps (&b[i],&b[i+1]);
		}
	}int i;
	for(i=0;i<=5;i++)
	{
		printf("%d",b[i]);}
}





void swaps(int *xptr,int *yptr)
{
	int temp;
	temp=*xptr;
	*xptr=*yptr;
	*yptr=temp;
}

