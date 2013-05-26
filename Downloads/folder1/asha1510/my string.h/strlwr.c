//converts the string to lower case...
#include<stdio.h>
void strlwr(char b[]);
int main()
{
int k;
char a[100];
printf("Enter the string:");
gets(a);
printf("\n");
//printf("string2:");
//gets(b);
//printf("\n");
strlwr(a);
//printf("string1:");
//puts(a);
scanf("%d",&k);
}

void strlwr(char b[100])
{
              int i=0,j;
 while(b[i]!='\0')
{
                  j=b[i];
                  if ( j>=65 && j<=90) 
                       {
                             j=j+32;
                       b[i]=j;
                       }
                        
                       i++;
}
printf("\nThe string in lowercase is:\t");
puts(b);
}
