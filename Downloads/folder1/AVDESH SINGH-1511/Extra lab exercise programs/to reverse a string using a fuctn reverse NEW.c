#include<stdio.h>
#include<conio.h>
void reverse(char [],char*);
int main()
{
    int i=0;
 char b[1000];
    char a[1000];
    gets(a);
reverse(a,b);
puts(b);
    
getch();
}

void reverse(char s[],char* new)
{
             int i=0,j=0;
             //char new[1000];
    while( s[i] != '\0')
    i++;
    i--;
while( i>=0)
{
       *(new+j++)=s[i--];
       
       }
*(new+j)='\0';
            //puts(new); 
             
             
             }
