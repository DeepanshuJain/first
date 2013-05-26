#include<conio.h>
#include<stdio.h>
#include<string.h>
main()
{
      int m;
      char arr[5][30],ar[1][30];
      printf("enter 5 names to be sorted");
      for(int i=0;i<5;i++)
      {
              gets(&arr[i][30]);
      }
      for(int k=0;k<5;k++)
      {
              for(int s=0;s<4;s++)
              {
              m=strcmp(&arr[s][30],&arr[s+1][30]);
                     if(m>0)
                     {
                           strcpy(&ar[0][30],&arr[s][30]);
                           strcpy(&arr[s][30],&arr[s+1][30]);
                           strcpy(&arr[s+1][30],&ar[0][30]); 
                           
                     }
                     }
                     }
          for(int j=0;j<5;j++)
      {
              puts(&arr[j][30]);
      }                    
                            
      
      getch();
}
      
      
