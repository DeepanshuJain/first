#include<stdio.h>

void main()
{
	int a[10],i,item;
	void binary(int x[10],int beg,int end,int y);
	for(i=0;i<10;i++)
	{
		printf("\nEnter no. : ");
		scanf("%d",&a[i]);
	}
	printf("\nEnter no. to be found : ");
	scanf("%d",&item);
	binary(a,0,9,item);

}

void binary(int x[10],int beg,int end,int y)
{
	int mid,z;
	if(beg<=end)
	{
		mid=(beg+end)/2;
		if(x[mid]==y)
		{
			printf("\nNumber found");
		}
		if(y<x[mid])
		{
			end=mid-1;
			binary(x,beg,end,y);
		}
			else
		{
			beg=mid+1;
			binary(x,beg,end,y);
		}
	}
}
