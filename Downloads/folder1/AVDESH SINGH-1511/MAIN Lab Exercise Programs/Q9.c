// program to find whether the coordinate is inside the given circle or not...??
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x,y,m,n,r;
    float d;
    printf("Enter the x,y coordinate of the center of the circle:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\nEnter the x,y coordinate of your point\n");
    scanf("%d",&m);
    scanf("%d",&n);
    printf("Enter the radius of the circle:\n");
    scanf("%d",&r);
    d=sqrt((m-x)*(m-x) + (n-y)*(n-y));
    if(r==d)
    printf("\nThe point is on the circle");
    else if(d<r)
    printf("\nThe point is inside the circle");
    else if(d>r)
    printf("\nThe point is outside the circle");
    
    getch();}
