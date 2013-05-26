#include<stdio.h>
#include<ctype.h>

main()
{

char c;
int res;
printf("Enter a value \n");
scanf( "%c", &c );
//res=isdigit(c);
  //printf( "You entered the digit %c\n", c );
res=isxdigit(c);
printf("value is %d \n",res);


}
