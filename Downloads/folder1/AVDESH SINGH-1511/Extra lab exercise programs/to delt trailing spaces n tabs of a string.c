// to delete the trailing spaces and tabs after a string... and print the new string
// will work in linux

#include<stdio.h>
#define MAXLINE 1000
int getline (char line []);
int main()
{
                 int z;
                 int len,i=0;
                 //char s[]="24785";
                 char line [MAXLINE];
                 while ( len = (getline ( line)) > 0)
               {
                         while ( line [i] !='\n')
                 ++i;
                 --i;
                 while ( (line [i] == ' ') || (line [i] == '\t') )
                 --i;
                 ++i;
                 line [i] = '\0';
                 puts(line);
                 printf("%d",i);
                 }
                 //scanf("%d",&z);
}

int getline (char s[])
{
    int c,i;
    for (i=0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
               s[i] =c;
    }
    if ( c=='\n')
    {
       s[i]=c;
     ++i;
    }
    s[i] = '\0';
    printf("\n%d\n",i);
return i;
}
