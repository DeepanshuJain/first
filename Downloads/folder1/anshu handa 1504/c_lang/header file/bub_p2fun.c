#include<stdio.h>
#include<conio.h>

int ascend(int a ,int b)
{
    return b > a;
}
int descend(int a,int b)
{
      return b < a;
}

 void swap(int *element1ptr ,int *element2ptr)
 {
      int hold;
      hold=*element1ptr;
      *element1ptr=*element2ptr;
      *element2ptr=hold;
 }
void bubble_sort( int new[],const int size,int (*compare)(int a,int b))
{
     int pass;
     int count;
     
    for(pass =1 ;pass < size ;pass++)
    {
      for(count=0;count<size-1;count++)
      {
         if((*compare)(new[count],new[count+1]))
         {
             swap( &new[count],&new[count+1]);
         }
      }
     }
}
int main(void)
{
    int choice;
    int ar[10],i,n;
    
    printf("enter no. of elements between 1-10\n");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++)
    {
      printf("enter %d elemnts ",i);
       scanf("%d",&ar[i]);
    }
    
    printf("\n\nenter your choice 1. Ascending \n 2.Descending\n");
    scanf("%d",&choice);
    
    if(choice==1)
    {
       bubble_sort(ar,n,ascend);
       printf("elements after ascending sort are\n");
    }
    if(choice==2)
    {
       bubble_sort(ar,n,descend);
        printf("elements after descending sort are\n");
    }
    
     for(i=1;i<=n;i++)
    {
       printf("%d ",ar[i]);
    }
    
    getch();
} 
