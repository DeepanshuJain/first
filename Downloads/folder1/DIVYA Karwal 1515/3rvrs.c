//if a five number digit is input through the keyboard,write a program to reverse the number
#include<stdio.h>
main()
{
	int n,a,b=0,c;
	printf("enter any 5 digit number\n");
	scanf("%d",&n);
	
	for(a=0;a<5;a++)
	{
		c=n%10;
	b=b*10+c;
	n=n/10;
	}
printf("reversed no. is %d",b);
}


