#include<stdio.h>
#include<conio.h>
int main()
{	
	int n,i,flag;
	printf("\nEnter the number you want to check : ");
	scanf("%d",&n);
	i=n/2;
	while(i>=1)
	{	if(n%i != 0)
		{	flag=1;
			i--;
		}
		else
		{	if(i==1)
				flag=1;
			else
				flag=0;
			break;
		}
	}
	if(flag==1)
		printf("\nYou entered a prime number !!");
	else
		printf("\nThe number you entered is not prime !!");
		
		getch();
	
}
