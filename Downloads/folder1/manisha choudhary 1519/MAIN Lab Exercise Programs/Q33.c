#include<stdio.h>
#include<conio.h>
int sum(int []);
int main()
{
    int a[100];
    int ans,i,n;
    printf("Enter thr number of elements to be added\n");
    scanf("%d",&n);
    for(i=0;i<n; i++)
    scanf("%d",&a[i]);
    a[i]='\0';
    ans=sum(a);
       printf("\n the answer is %d",ans);
    
    getch();
}
    
    
    int sum(int *n)
    
    {
        static i;
        static s=0;
        //printf("%d\n",*n);
        if(*n=='\0')
        return 0;
        
        else
       {
        s=s + sum((n++));
        i=*n;
        return i;
        }
        
                
        
        
        }
