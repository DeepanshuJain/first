#include<stdio.h>
int q26(int);int s=0;
int main()
{int s;
    printf("Enter how many no u want to display:");
scanf("%d",&s);
printf("\nThe fibonicce series is\n");
q26(s);
getchar();
getchar();getchar();getchar();    }
int q26(int z)
{static k=0;
   if(z==1)
   return 0;
    if(z==2)
    {return 1;}
    k+=q26(z-1);
    printf("%d\t",k);
    q26(z-1);}
