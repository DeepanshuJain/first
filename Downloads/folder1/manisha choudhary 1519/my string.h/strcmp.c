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
     int k;
      while((*c) != '\0')
      {
                 if ((*c) != (*d))                 
                          k=0;
                          else
                          k=1;
                 ++c;
                 ++d;
      }
        if (k==0)
        printf("strings are not same");
        else
         printf("strings are same");
}
        
      
