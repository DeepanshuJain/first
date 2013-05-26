
#include<stdio.h>
#include<conio.h>
int mystrrev(char*);
int main()
{   int l;
    char s[1000];
    gets(s);
l=mystrrev(s);
puts(l);
    
getch();
}


int mystrrev(char* a)
{
             int i=0,j=0;
             char new[1000];
    while( *(a+i) != '\0')
    i++;
    i--;
while( i>=0)
{
       *(new+j++)=a[i--];
       
       }
*(new+j)='\0';
//    or   puts(new);
  return new;
  }
