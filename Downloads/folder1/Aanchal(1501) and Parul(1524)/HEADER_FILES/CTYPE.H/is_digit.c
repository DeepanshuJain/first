#include<stdio.h>

int isdigit(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isdigit(c);
if(res==0)
printf("It's not a digit ..\n");

else
printf("It's a digit .. \n");

}

int isdigit(int y)
{
if(y>='0'&& y<='9')
return 1;

else
return 0;
}
