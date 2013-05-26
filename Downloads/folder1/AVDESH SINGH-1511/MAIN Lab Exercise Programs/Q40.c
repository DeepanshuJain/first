//converts the string to lower case...
#include<stdio.h>
#include<conio.h>
void mystrlwr(char*);
int main()
{   int k;
char a[100];
printf("Enter the string:");
gets(a);
printf("\n");

mystrlwr(a);
puts(a);
getch();
}

void mystrlwr(char* a)
{
              int i=0,j;
 while(*(a+i) != '\0')
{
                  j=*(a+i);
                  if ( j>=65 && j<=90) 
                  {
                             
                             j=j+32;
                       *(a+i)=j;
                       }
                        
i++;
}
}
