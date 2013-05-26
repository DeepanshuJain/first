#include<stdio.h>

main()
{
	int n[20],i=0,max,min;
	float avg=0.0;
	char ch;
	do
	{	printf("\nEnter a positive integer : ");
		scanf("%d",&n[i]);
		i++;
		printf("Do you want to enter more numbers (Y/N) : ");
		ch=getche();
	}while((ch=='Y') || (ch=='y'));
	printf("\n\nYou entered %d numbers.",i);
	min=max=n[0];
	for(int j=0;j<i;j++)
	{	if(n[j]<min)
			min=n[j];
		if(n[j]>max)
			max=n[j];
		avg+=n[j];
	}
	avg=avg/i;
	printf("\nMinimum value :  %d",min);
	printf("\nMaximum value :  %d",max);
	printf("\nAverage value :  %f",avg);

}