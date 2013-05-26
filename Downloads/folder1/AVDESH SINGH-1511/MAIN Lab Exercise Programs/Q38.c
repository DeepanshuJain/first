#include<stdio.h>
#include<conio.h>
void str(char *,char*);
int main()
{
    
    char a[100];
    char b[100];
    printf("Enter string 1:\t");
    gets(a);
    printf("Enter string 2:\t");
    gets(b);
    str(a,b);

    getch();
}
void str(char *a,char *b)
{ 
     char h[100];
     int i=0;
     while((*a) != '\0')
     {
                    h[i]=*a;
               i++;
                      ++a;
     }
while( *b != '\0')
{
       h[i]=*b;
       i++;
       ++b;
       }
       h[i]='\0';
     puts(h);
}
