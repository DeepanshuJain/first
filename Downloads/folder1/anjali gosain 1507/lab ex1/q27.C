#include<stdio.h>
int array(int a[],int count,int j);

main()
{
	int a[50],count=0,i,n,j=0;
	printf("\nEnter the number of elements of the array : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n ;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	j=0;
	printf("\nThe array you entered is : ");
	array(a,count,j);

}


int array(int a[],int count,int j)
{
	if(j==count)
		return 0;
	else
	{
		printf(" %d ",a[j]);
		j++;
		array(a,count,j);
	}
}
