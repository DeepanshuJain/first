#include<stdio.h>

int ispunct(int);
main()
{
char c;
int res;
printf("Enter a value \n");
scanf("%c",&c);
res=ispunct(c);
if(res==0)
printf("It's not a printable character ..\n");

else
printf("It's a printable character.. \n");

}

int ispunct(int y)
{
if((y>=33 && y<=47)||(y>=58 && y<=64) || (y>=91 && y<=96) || (y>=123 && y<=126))
return 1;

else
return 0;
}
