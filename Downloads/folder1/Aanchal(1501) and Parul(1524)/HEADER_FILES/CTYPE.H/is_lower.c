#include<stdio.h>

int islower(int);
main()
{
char c;
int res;
printf("Enter an alphabet \n");
scanf("%c",&c);
res=islower(c);
if(res==0)
printf("It's not a lowercase letter ..\n");

else
printf("It's a lowercase letter .. \n");

}

int islower(int y)
{
if(y>='a'&& y<='z')
return 1;

else
return 0;
}
