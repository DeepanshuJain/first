#include<stdio.h>
#include<conio.h>
int main()
{       
	int temp,c,d;
	printf("\nEnter the value of c : " );
	scanf("%d",&c);
	printf("\nEnter the value of d : ");
	scanf("%d",&d);
	temp=c;
	c=d;
	d=temp;
	printf("\nAfter swapping : c= %d     d=%d \n\n",c,d);
	getch();
	
}
