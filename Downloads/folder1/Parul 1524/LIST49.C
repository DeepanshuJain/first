#include<stdio.h>
#include<conio.h>
#define argument(x,y) printf(" the arguments passed to this macro are %d %d \n",x,y);

main()
{clrscr();
 int a,b; 
printf(" enter the arguments \n");

scanf(" %d %d",&a,&b);

argument(a,b);
 getch();
}
