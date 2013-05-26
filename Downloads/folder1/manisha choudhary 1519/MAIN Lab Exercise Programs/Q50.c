#include<stdio.h>
#include<conio.h>
#define SMALLEST(a,b,c) { int t;\
                          if( a<b )\
                          ;\
                          else\
                          {t=a;\
                          a=b;\
                          b=t;}\
                          if(a<c)\
                          printf("the smallest number is %d",a);\
                          else\
                          {t=a;\
                          a=c;\
                          c=t;}\
                          printf("the smallest number is %d",a);} 
int main()
{
    int x,y,z;
    printf("Enter thr 3 numbers\n");
    scanf("%d%d%d",&x,&y,&z);
    SMALLEST(x,y,z);
    
    
    
    
    getch();
}
