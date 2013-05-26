#include<stdio.h>
#include<time.h>
#include<stdlib.h>
unsigned r5();
int r7();
int main()
{printf("The random no between 1-7 is \t :%d",r7());
getchar();
    }
unsigned r5()
{
       srand(time(NULL));
       return((rand()%5)+1);
       }
int r7()
{
srand(r5());
return((rand()%5)+1);
    }
