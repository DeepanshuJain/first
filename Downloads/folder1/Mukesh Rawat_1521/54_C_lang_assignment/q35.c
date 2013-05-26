#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(int argc,char *argv[])
{
     char temp[20];
     int i,j;
  if(argc==2)
  printf("insufficient data");
  
 else
 {
        for(i=1;i<=argc;i++)
        {
          for(j=i+1;j<=argc;j++)
          {
             if(strcmp(argv[i]>argv[j]))
             {
                  strncpy(temp,argv[i]);                      
                  strncpy(argv[i],argv[j]); 
                  strncpy(argv[j],temp,); 
             }
          }
       }
}
getch();
}
