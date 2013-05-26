#include<stdio.h>

int array(int a[],int count,int j,int x);
main()
{
	int a[50],count=0,i,n,j=0,f,x;
	printf("\nEnter the number of elements of the array : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n ;i++)
	{
		scanf("%d",&a[i]);
		count++;
	}
	printf("\nEnter the number you want to search : ");
	scanf(" %d",&x);
	j=0;
	f= array(a,count,j,x);
	if(f==0)
		printf("\n%d is not found in the array.",x);

}

int array(int a[],int count,int j,int x)
{
	int flag=0,index;
	if(j==count)
		return 0;
	else if(a[j]==x)
	{
		flag=1;
		index=++j;
		printf("\n%d is present at position %d in the array.",x,index);
		return flag;
	}
	else
	{
		j++;
		array(a,count,j,x);
	}
}
