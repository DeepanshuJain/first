#include<stdio.h>

int isspace(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isspace(c);
if(res==0)
printf("It's not white space character ..\n");

else
printf("It's a white space character  .. \n");

}

int isspace(int y)
{
if(y==' '||y=='\n'||y=='\t'||y=='\f'||y=='\r'||y=='\v')
return 1;

else
return 0;
}
