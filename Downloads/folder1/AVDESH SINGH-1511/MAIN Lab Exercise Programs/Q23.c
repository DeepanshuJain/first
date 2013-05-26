#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100];
    int sum=0,t,n,i,j;
    printf("Enter the total number of numbers:\t");
    scanf("%d",&n);
    printf("\nNow entre the numbers:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    a[i]='\0';
    printf("\nThe number you entered are:\n");
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("The sum of nymbers is %d",sum);
    for(j=0;j<n-1;j++)
    for(i=0;i<n-1;i++)
    if(a[i]>a[i+1])
    {
                   t=a[i];
                   a[i]=a[i+1];
                   a[i+1]=t;
    }
    printf("\nThe lowestn umber you enterd is: %d",a[0]);
    printf("\nThe highest number you enterd is:  %d",a[n-1]);
    getch();
}
