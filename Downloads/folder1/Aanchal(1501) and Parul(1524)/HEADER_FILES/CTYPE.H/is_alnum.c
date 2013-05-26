#include<stdio.h>

int isalnum(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=isalnum(c);
if(res==0)
printf("It's not an alphanumeric value ..\n");

else
printf("It's an alphanumeric value .. \n");

}

int isalnum(int y)
{
if((y>='A' && y<='Z')||(y>='a'&& y<='z')||y=='0'||y=='1'||y=='2'||y=='3'||y=='4'||y=='5'||y=='6'||y=='7'||y=='8'||y=='9')

return 1;

else
return 0;

}
