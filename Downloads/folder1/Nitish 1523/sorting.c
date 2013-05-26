
#include<stdio.h>
void sort(int []);
void swap(int *,int *);
main()
{
	int i,a[5];
	printf("enter 5 numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a);
	 for(i=0;i<5;i++)
	 {
		 printf("%d",a[i]);
	 }
}

void sort(int b[])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[j]>=b[j+1])
			swap(&b[j],&b[j+1]);
		}
	}
}

void swap(int*p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
