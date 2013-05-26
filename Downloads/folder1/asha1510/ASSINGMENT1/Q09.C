#include<stdio.h>

void main()
{

	int s,h,k,x,y,r;
	printf("\nEnter the coordinates of  center of the circle : ");
	scanf("%d %d",&h,&k);
	printf("\nEnter the radius of the circle : ");
	scanf("%d",&r);
	printf ("\nEnter the coordinates of the point whose location is to be determined : ");
	scanf("%d %d",&x,&y);
	s=(x-h)*(x-h)+(y-k)*(y-k)-2*r*r;
	if(s==0)
		printf("\nThe point (%d,%d) lies on the circle.",x,y);

	else if(s>0)
		printf("\nPoint (%d,%d) lies outside the circle.",x,y);

	else
		printf("\nPoint (%d,%d) lies inside the circle.",x,y);


}

