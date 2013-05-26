#include<stdio.h>
main()
{
int i,j,k;
char num='G',num1='F';
printf("\n");
for(j=0;j<=6;j++)
{
for(i='A';i<=num;i++)



printf("%c",i);

num--;
for(k=0;k<(2*j-1);k++)
printf(" ");
if(j>1)
num1--;
for(i=num1;i>='A';i--)

printf("%c",i);
printf("\n");






}}
