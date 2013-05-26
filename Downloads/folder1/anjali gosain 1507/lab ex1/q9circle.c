#include<stdio.h>
main()
{
int r, h,k,x,y,dist=0;
printf("enter the coordinates of the centre of the circle:");
scanf("%d %d",&h,&k);
printf("the radius of the circle");
scanf("%d",&r);
printf("enter coordinates of the point whose position is to be determined:");
scanf("%d %d",&x,&y);
dist=(x-h)*(x-h)+(y-k)*(y-k)-r*r;
if(dist==0)
printf("the point lies on the circle");
else if(dist<0)
printf("the point lies inside the circle");
else
printf("the point lies oustdie the circle");
}



