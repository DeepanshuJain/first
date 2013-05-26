#include<stdio.h>
#include<conio.h>
main()
{
      int x[10][10], y[10][10],i,j,r,c,a,b,d;
      printf("enter the no. of rows & columns of matrix\n");
      scanf("%d%d",&r,&c);
      printf("enter the elements of the matrix\n");
      for(i=0;i<r;i++)
      {
                      for(j=0;j<c;j++)
                      scanf("%d",&x[i][j]);
      }
      
      printf("the matrix you entered is\n");
      for(i=0;i<r;i++)
         {
                      for(j=0;j<c;j++)
                      printf("%10d",x[i][j]);
                      printf("\n");
      }
      
      
  printf("the transpose of the matrix is\n");
  
  for(i=0;i<c;i++)
         {
                      for(j=0;j<r;j++)
                      printf("%10d",x[j][i]);
                      printf("\n");
      }
      
      
      getch();
     
}
