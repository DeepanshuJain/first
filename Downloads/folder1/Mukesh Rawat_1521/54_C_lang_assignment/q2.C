#include<stdio.h>
#include<conio.h>
main()
{
	int n,sum=0;
	printf("\nEnter a 5 digit number : ");
	scanf("%d",&n);
	for(int i=0;i<5;i++)
	{
            	sum+=n%10;
		n/=10;
	}
	printf("\nSum of the digits is : %d\n\n",sum);
                  getch();
}
