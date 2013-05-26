#include<stdio.h>

int array(int a[],int count,int j,int min);
main()
{

	int a[50],count=0,i,n,j=0,min=0,min1=0;
	printf("\nEnter the number of elements in the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array : ");
	for(i=0;i<n ;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	j=0;
	min=a[j];
	min1= array(a,count,j,min);
	printf("\nMinimum element of the input array is %d.",min1);

}


int array(int a[],int count,int j,int min)
{
	if(j==count)
		return min;
	else if(min>=a[j])
	{
		min=a[j];
		j++;
		array(a,count,j,min);
	}
	else
	{
		j++;
		array(a,count,j,min);
	}
}
