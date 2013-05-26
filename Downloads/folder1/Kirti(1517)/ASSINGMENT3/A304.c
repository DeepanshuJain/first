#include<stdio.h>
int main()
{int *f,*l,A[50],i=0,n=0,temp=0;
    printf("Enter the value of n\t: ");
    scanf("%d",&n);
    printf("\nEntet the binary sequence");
    for(i=0;i<(n*n);i++)
    {
    printf("Enter the bit no %d \t: ",i);
    scanf("%d",&A[i]);
}
f=&A[0];l=&A[(n*n)-1];
    for(;f<l;f++,l--)
    {
                     temp=*f;
                     *f=*l;
                     *l=temp;
          }
          printf("\nAfter reversing the string is\n");
   for(i=0;i<n*n;i++)
    {
                      printf("%d\t",A[i]);       }
                   getchar();   
                   getchar();getchar();
                   }
