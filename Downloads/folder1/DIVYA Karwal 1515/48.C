#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define MAX 100
#define array(s) printf(" the values of array are %s \n",s);

main()
{
 clrscr();
 char ch[MAX];
 printf("enter the values for the array \n");
 gets(ch);
 array(ch);
 getch();
}
