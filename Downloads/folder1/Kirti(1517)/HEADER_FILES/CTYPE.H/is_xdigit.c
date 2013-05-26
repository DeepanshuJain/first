#include<stdio.h>

int isxdigit(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isxdigit(c);
if(res==0)
printf("It's not a hexadecimal digit ..\n");

else
printf("It's a hexadecimal digit .. \n");

}

int isxdigit(int y)
{
if((y>='0' && y<='9') || (y>='A' && y<='F') || (y>='a' && y<='f'))
return 1;

else
return 0;
}
