#include<stdio.h>
#include<string.h>
int substr( char *,char *);
int main()
{int i=0,ss=0,l=0,j=0;
     char z[50],sub[10][20],*cptr,*cpt;
    printf("Enter the main string:\n\n");
    gets(z);cpt=z;
    printf("\nEnter the sub string you want to find (Press enter two times if you dont want to enter more substrings to find):\n");
    for(i=0;i<10;i++)
    { gets(&sub[i][0]);                              
    if(sub[i][0]=='\0')
    break;
    }
    ss=i;
    for(i=0;i<ss;i++)
    {
    cptr=strstr(z,&sub[i][0]);
    if(cptr==NULL)
    printf("\nThe Substring \" %s \" is : NOT FOUND");
    else
    printf("\nThe Substring \" %s \" is occuring at position :\t%d",&sub[i][0],(cptr-cpt)+1);}
    getchar();    
    }
