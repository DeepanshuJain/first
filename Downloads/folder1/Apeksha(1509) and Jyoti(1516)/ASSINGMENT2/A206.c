#include<stdio.h>
struct foo 
{
char a;
char* b;
};

int main()
{struct foo a;
printf("The size of struct is \t: %d",sizeof(a));
getchar();
    }
