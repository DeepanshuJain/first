#include<stdio.h>

int isgraph(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isgraph(c);
if(res==0)
printf("It's not a printable character ..\n");

else
printf("It's a printable character.. \n");

}

int isgraph(int y)
{
if(y>=33 && y<=126)
return 1;

else
return 0;
}
