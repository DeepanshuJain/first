#include <stdio.h>
int fibbo(int, int, int, int);
main()
{
int n, f, x=0, y=1, i=3;// n=no of terms,x is first term,yis second term 
printf("Enter how many no u want to display:");
scanf("%d", &n);  //i is used to calculate the posetion of no 
printf("\n%d\t%d", x, y);
fibbo(x, y, n, i);
getch();
}
fibbo(int x, int y, int n, int i)
{
int z;
if (i <= n)
{
z = x + y;
printf("\t%d", z);
x = y;
y = z;
i++;
fibbo(x,y,n,i);
}
}

