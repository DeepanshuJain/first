#include<stdio.h>
main()
{
int h,count=0;
h=getchar();
while(h!=EOF)
{
if(h=='\n')
count++;
}
printf("the number of lines are %d",count);
}
