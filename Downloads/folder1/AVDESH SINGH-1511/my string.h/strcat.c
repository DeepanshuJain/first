#include<stdio.h>
void str(char *,char*);
int main()
{
    int z;
    char a[100];
    char b[100];
    printf("Enter string 1:\t");
    gets(a);
    printf("Enter string 2:\t");
    gets(b);
    str(a,b);

    scanf("%d",&z);
}
void str(char *c,char *d)
{ 
     char h[100];
     int i=0;
     while((*c) != '\0')
     {
                    h[i]=*c;
               i++;
                      ++c;
     }
while( *d != '\0')
{
       h[i]=*d;
       i++;
       ++d;
       }
       h[i]='\0';
     puts(h);
}
