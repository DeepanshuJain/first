#include<stdio.h>
#include<conio.h>
int main(void)
{
    char a='\n',b=48;
    printf("a= %c\tb= %c",a,b);
   //  printf("\na= %d\tb= %d",a,b);
    a+=b;
     printf("\nafter step1 the values are\n\n");
    //  printf("\na= %d\tb= %d",a,b);
    printf("\na= %c\tb= %c",a,b);
    b=a-b;
     printf("\nafter step2 the values are\n\n");
   //   printf("\na= %d\tb= %d",a,b);
    printf("\na= %c\tb= %c",a,b);
    a=a-b;
    printf("\nafter swapping\n\n");
    printf("\na= %c\tb= %c",a,b);
    getch();
}
