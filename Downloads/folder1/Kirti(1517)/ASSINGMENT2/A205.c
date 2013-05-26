#include<stdio.h>
int main()
{
    int i=0,j=0,s=0;
    int b[20],a[20];
    printf("Enter the no of elements in array");
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {printf("Enter the element no %d:",i+1);
    scanf("%d",&b[i]);
    }
    for(i=0;i<s;i++)
    {a[i]=1;
      for(j=0;j<s;j++)
      {
                      if(j!=i)
                      a[i]*=b[j];
        }
        }
         for(i=0;i<s;i++)
        printf("%d\t",a[i]);
        getchar();
        getchar();getchar();getchar();getchar();getchar();
}
