#include<stdio.h>
#include<conio.h>
#define PI 3.14159
int main()
{
 float r,area;
   printf("Enter the Radius of the Disk:  ");
   scanf("%f",&r);
   area=PI*r*r;
   printf("The surface of the Disk is %f sq. unit",area);
    
    getch();
}
