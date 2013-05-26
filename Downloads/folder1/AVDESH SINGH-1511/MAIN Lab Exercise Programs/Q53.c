#include<stdio.h>
#include<conio.h>
main()
{
      int x[10][10], y[10][10],i,j,a,b,c,d;
      printf("enter the no. of rows & columns of first matrix\n");
      scanf("%d%d",&a,&b);
      printf("enter the elements of first matrix\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      scanf("%d",&x[i][j]);
      }
      
        printf("enter the no. of rows & columns of second matrix\n");
      scanf("%d%d",&c,&d);               
       printf("enter the elements of second matrix\n");
      for(i=0;i<c;i++)
      {
                      for(j=0;j<d;j++)
                      scanf("%d",&y[i][j]);
      }
      printf("the matrix are\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      printf("%10d",x[i][j]);
                      printf("\n");
      }
      printf("\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      printf("%10d",y[i][j]);
                      printf("\n");
      }
      if((a!=c)&&(b!=d))
      {
                        printf("u can not add the two matrix u entered\n");
                        getch();
                        return 0;
      }
      printf("after addition the matrix is\n");
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      {
                                      x[i][j]+=y[i][j];
                      }
      }
      
      for(i=0;i<a;i++)
      {
                      for(j=0;j<b;j++)
                      printf("%10d",x[i][j]);
                      printf("\n");
      }
      
      
      getch();
     
}

