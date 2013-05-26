#include<stdio.h>
int cube(int num)
{
int pow=1,i;
for(i=1;i<=3;i++)
pow=pow*num;
return pow;
}
main()
{
int y,x,c,i,k=0;
for(i=1;i<=500;i++)
{
c=i;
y=0;
while(c>0)
{
x=c%10;


c=c/10;
y=y+cube(x);



}
if(y==i)
{
printf("\n%d\n",y);
k++;}
}
printf("total number to armstrongs =%d",k);


}
