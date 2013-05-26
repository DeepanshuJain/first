#include "myctype.h"
#include<stdio.h>
int main(void)
{
    char i;
    puts("enter a character");
    scanf("%c",&i);
    up2low(i);
    getch();
}
