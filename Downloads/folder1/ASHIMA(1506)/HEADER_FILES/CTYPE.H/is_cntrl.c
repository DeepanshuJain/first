#include<stdio.h>

int iscntrl(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=iscntrl(c);
if(res==0)
printf("It's not a control character ..\n");

else
printf("It's a control character .. \n");

}

int iscntrl(int y)
{
if((y>=0 && y<=31)|| (y==127))
return 1;

else
return 0;
}
