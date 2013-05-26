#include<stdio.h>
void sort(int *);
void swap (int *,int*);
int main()
{
    int z;
    int i;
    int a[10]={2,58,46,14,59,78,12,1,56};
    sort(a);
    for(i=0;i<=6;i++)
    printf("%d \n",a[i]);
    scanf("%d",&z);
}


void sort(int *b)
{
    int i,j;
    //for(i=0;i<=5;i++)
    for(j=0;j<=5;j++)
    if( b[j]> b[j+1])
    swap(&b[j],&b[j+1]);
    
    
    }
    
    void swap(int *a,int*b)
    {
         int t;
         t=*a;
         *a=*b;
         *b=t;
         
         
         }
