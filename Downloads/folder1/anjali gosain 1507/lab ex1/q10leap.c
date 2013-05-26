#include<stdio.h>
main()
{
int year;
printf("enter the year ");
scanf("%d",&year);



if(((year%4==0)&&(year%100!=0))||((year%4==0)&&(year%400==0)&&(year%100!=0)))
printf("the year is a leap year");
else
printf("not a leap year");
}


