#include<stdio.h>
#include<conio.h>
int mystrcmp(char *,char*);
int main()
{
    int z;
    char a[100];
    char b[100];
    printf("Enter string 1:\t");
    gets(a);
    printf("Enter string 2:\t");
    gets(b);
    z=str(a,b);
    printf("\n%d",z);
    getch();
}
int str(char *a,char *b)
{   int k;
    int x,y;
      while((*a) != '\0')
      {
                 if ((*a) == (*b))                 
                          {k=0;
                           ++a;
                          ++b;}
                          else
                          {
                          x=*a;
                          y=*b;
                          return (x-y);}
                 
                 
      }
        return k;
}
