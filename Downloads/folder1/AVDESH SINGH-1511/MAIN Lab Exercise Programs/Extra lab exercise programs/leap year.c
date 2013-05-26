#include<stdio.h>
#include<conio.h>
int main()
{   int a,year;
    printf("Enter the year:    ");
    scanf("%d",&year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    printf("Yes, %d is Leap year",year);
    else printf("No,%d is not a Leap year",year);
    getch();}
