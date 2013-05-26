#include<stdio.h>
#include<string.h>
int array(char a[],int count,int j,int len);

main()
{

	char a[50];
	int flag,count=0,len,i,n,j=0;
	printf("\nEnter your string : ");
	scanf("%s",a);
	count=strlen(a);
	j=0;
	len=count;
	flag=array(a,count,j,(len-1));
	if(flag==1)
		printf("\nThe entered string is a palindrome.");

}


int array(char a[],int count,int j,int len)
{
	if(j==count)
		return 1;
	else if(a[j]!=a[len])
	{
		printf("\nThe entered input is not a palindrome.");
		return 0;
	}
	else
	{
		len--;
		j++;
		array(a,count,j,len);
	}
}
