#include<stdio.h>

int toupper(int);
main()
{
char c;
int res;
printf("Enter an alphabet \n");
scanf("%c",&c);
res=toupper(c);
printf("The alphabet is %c \n",res);

}

int toupper(int y)
{
if(y>='a' && y<='z')
{
y=y-32;
return y;
}

else
return y;
}
