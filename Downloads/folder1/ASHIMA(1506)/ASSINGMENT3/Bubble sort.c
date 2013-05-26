#include<stdio.h>
void bsort(int [],int);
int main()
{   int s=0,ar[10],i,z;
    printf("Enter the no of elements in array");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {printf("Enter the element no %d:",i+1);
    scanf("%d",&ar[i]);
    }
    for(z=0;z<s;z++)
        printf("%d\t",ar[z]);
    bsort(ar,s);
    getche();
    }
    
    void bsort(int a[],int s)
    {
        int temp=0,i=0,j=0,z;
        for(i=0;i<s;i++)
        {
            for(j=0;j<(s-1)-i;j++)
        {
        if(a[j]>a[j+1])
        {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
        }
        }
        printf("\nArray after pass %d is",i+1);
        for(z=0;z<s;z++)
        printf("%d\t",a[z]);
        }
   }
