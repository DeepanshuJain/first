#include<stdio.h>

int array(int a[],int count,int sum,int j);
main()
{

	int a[50],count=0,i,n,j=0,sum=0,sumr=0;
	printf("\nEnter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n ;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	j=0;
	printf("\nSum of the array elements is : ");
	sumr= array(a,count,sum,j);
	printf("%d",sumr);

}


int array(int a[],int count,int sum,int j)
{
	if(j==count)
		return sum;
	else
	{
		sum=sum+a[j];
		j++;
		array(a,count,sum,j);
	}
}
