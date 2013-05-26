#include<stdio.h>
void main()
{
int a,am,k,i,temp;
printf("Enter the Decimal no	:");
scanf("%d",&a);
for(i=32;i>=0;i--)
{
	k=1<<i;
temp=a&k;
(temp==0)?printf("0"):printf("1");
}
int sq(int);

printf("The square of %d is %d",a,sq(a));

}
int sq(int b)
{
	b=b*b;
return(b);

}

