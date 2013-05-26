#include<stdio.h>
#include<conio.h>

int main(void)
{
    int no,i=15;
 static int bin[15];
 int dispmask=1<<15;
    puts("enter any no");
   scanf("\n%d",&no);
    puts("the binary conversion is");
   //first method is  
  while(no>0)
  {
      bin[i--]=no%2;
      no/=2;
      
  }
      for(i=0;i<=15;i++)
      printf("%d",bin[i]);
  //second method is    
      for(i=1;i<=15;i++)
      {
                        putchar(no & dispmask ? '1' : '0');
                        no<<=1;
      }
    getch();
}
    
    
