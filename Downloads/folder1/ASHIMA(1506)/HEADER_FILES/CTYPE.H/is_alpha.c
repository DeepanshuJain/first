#include<stdio.h>

int isalpha(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isalpha(c);
if(res==0)
printf("It's not an alphabet ..\n");

else
printf("It's an alphabet .. \n");

}

int isalpha(int y)
{
if((y>='A' && y<='Z')||(y>='a'&& y<='z'))
return 1;

else
return 0;
}
