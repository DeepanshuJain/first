#include<stdio.h>
int main()
{   int i,j;

    printf("enter the character");
    scanf("%c",&i);
    if  (i>=65&&i<=90)
    {	    j=i+32;
    printf("i converts to j=%c,%c",i,j);
    }
     else if (i>=97&&i<=122)
            printf("%c",i);
      else
	    printf("unmatched");
    return 0;
}

