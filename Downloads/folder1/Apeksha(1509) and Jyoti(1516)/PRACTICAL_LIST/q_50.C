#include<stdio.h>
#include<conio.h>
#define small(x,y,z) if(x<y) \
                     printf("smallest of the values %d %d %d is : %d \n",x,y,z,(x < z ? x : z)); \
                       else \
                       printf("smallest of the values %d %d %d is : %d \n",x,y,z,(y < z ? y : z));

main()
{ clrscr();
  int s=0, a, b,c;

  printf(" enter the three values from which smallest value has to b find out\n");

 scanf(" %d %d %d",&a,&b,&c);
small(a,b,c)
  getch();

}

