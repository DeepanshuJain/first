#include<stdio.h>

int tolower(int);
main()
{
char c;
int res;
printf("Enter an alphabet \n");
scanf("%c",&c);
res=tolower(c);
printf("The alphabet is %c \n",res);

}

int tolower(int y)
{
if(y>='A' && y<='Z')
{
y=y+32;
return y;
}

else
return y;
}
