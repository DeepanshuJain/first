#include<stdio.h>

main()
{
int k,res,m;
printf("Enter a 5 digit number\n");
scanf("%d",&k);
m=k;
printf("Reverse of %d is = ",k);
while(m>0)
{

res=m%10;
printf("%d",res);
m=m/10;

}
}

