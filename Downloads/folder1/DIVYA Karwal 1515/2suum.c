//if a five digit number is input through the keyboard,write to calculate the sum of digits
#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,b=0,c;
	printf("enter any 5 digit number");
	scanf("%d",&n);
	
	for(a=0;a<5;a++)
	{
		c=n%10;
	b=b+c;
	n=n/10;
	}
printf("sum is %d",b);
getch();
}

