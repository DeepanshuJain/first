#include<stdio.h>
# define MAXLINE 1000
void reverse(char line1[], char new1[]);
int getline (char line[]); 
int main()
{
                 int z;
                 int len;
                 char line[MAXLINE];
                 char new[MAXLINE];
                 while (( len = getline (line)) >0 )
                 {
                 reverse (line ,new);
                 puts(new);
                 }
}

int getline (char s[])
{
    int c,i,j;
    for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
               s[i] =c;
    }
    //if ( c=='\n')
    //{
      //   s[j]=c;
        // ++j;
         //++i;
    //}
    s[i] = '\0';
return i;
}
void reverse(char line1[],char new1[])
{
     int i=0,j=0;
     while ( line1[i] != '\0' )
     i++;
     i--;
     while ( i >= 0 )
     {
           new1 [j]= line1 [i];
           j++;
           i--;
     }
     new1[j]='\0';
}
