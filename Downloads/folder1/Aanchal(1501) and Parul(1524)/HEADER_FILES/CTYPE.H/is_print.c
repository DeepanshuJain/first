#include<stdio.h>

int isprint(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isprint(c);
if(res==0)
printf("It's not a printable character ..\n");

else
printf("It's a printable character.. \n");

}

int isprint(int y)
{
if(y>=32 && y<=126)
return 1;

else
return 0;
}
