#include<stdio.h>
int main()
{
	int i;
	int avg[4],sum[4];
	
	int sub1[4],sub2[4],sub3[4],sub4[4];
	 
        
	for(i=0;i<=4;i++)
	{
		printf("enter the marks of sub1,sub2,sub3,sub4\n");
		


scanf("%d %d %d %d",&sub1[i],&sub2[i],&sub3[i],&sub4[i]);
	
	
		sum[i]=(sub1[i]+sub2[i]+sub3[i]+sub4[i]);

	avg[i]=(sum[i]/4);
		printf("sum marks=%d\n, average marks=%d\n",sum[i],avg[i]);
	}
	return 0;
}
