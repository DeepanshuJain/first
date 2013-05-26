#include <stdio.h>

void main()
{
  float x1,x2,x3,u,f,l,v,m;int i;
  printf("Enter the lower bound\t");
  scanf("%f",&x1);
  printf("Enter the upper bound\t");
  scanf("%f",&x2);
  l=(x1*x1*x1)-(4*x1)-9;
  u=(x2*x2*x2)-(4*x2)-9;
  
  for(i=0;i<4;i++)
  {
  x3=(x1+x2)/2.0;
  printf("%f\t%f\t%f\n",x1,x2,x3);
  m=(x3*x3*x3)-(4*x3)-9;
  if(m>0)
  x2=x3;
  else
  x1=x3;
  
}scanf("%d",f);
}
