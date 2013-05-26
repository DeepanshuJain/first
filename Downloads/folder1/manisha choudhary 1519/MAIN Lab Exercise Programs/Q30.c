#include<stdio.h>
#include<conio.h>
main()
{
    int a[100],i,n,ele,loc;
    printf("Enter Size");
    scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("The array elements");
    for(i=0;i<n;i++)
    printf("%4d",a[i]);
    printf("\nEnter element to search");
    scanf("%d",&ele);
loc=lin_search(a,n,ele);
printf("the element is at %d position",loc);
getch();
        }   



int lin_search(int x[100],int n,int ele)
{
    if(n<=0)
    return -1;
    if(x[n]==ele)
    return n;
    else
    return lin_search(x,n-1,ele);
}
