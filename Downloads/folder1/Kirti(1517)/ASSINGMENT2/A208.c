#include<stdio.h>
#include<math.h>
int main()
{
    int m=0,h=0,a=0,x=0;
    printf("Enter the hour\t\t: ");
    scanf("%d",&h);
    printf("\nEnter the minutes\t:  ");
    scanf("%d",&m);
    if(h!=12)
                 printf("The angel between %d hours & %d minutes is (clockwise)\t %d degree",h,m,abs((h*5-m)*6));
    else
         printf("The angel between %d hours & %d minutes is (clockwise)\t %d degree ",h,m,(m*6));
         
getchar();
getchar();
getchar();}
