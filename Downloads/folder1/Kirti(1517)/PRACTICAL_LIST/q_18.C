#include<stdio.h>

void main()
{
	int a[20],i,j,n,flag;
	printf("\nEnter the number of digits : ");
	scanf("%d",&n);
	printf("\nEnter the digits of the number you want to check : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	flag=0;
	j=n-1;
	for(i=0;i<=j;i++,j--)
	{	if(a[i]==a[j])
			flag=1;
		else
			break;
	}
	if(flag==1)
		printf("\nYou entered a palindrome !!");
	else
		printf("\nYou did not enter a palindrome !!");

}