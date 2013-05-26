#include<stdio.h>

int isupper(int);
main()
{
char c;
int res;
printf("Enter an alphabet \n");
scanf("%c",&c);
res=isupper(c);
if(res==0)
printf("It's not a uppercase letter ..\n");

else
printf("It's a uppercase letter .. \n");

}

int isupper(int y)
{
if(y>='A' && y<='Z')
return 1;

else
return 0;
}
