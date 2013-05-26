//recursiom fibonacci

#include<stdio.h>
#include<conio.h>
int fibonacci(int);

int main()
{
    int n,i,a;
    printf("Enter the number of elements to be printed:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {a=fibonacci(i);
printf("%d, ",a);}
getch();
}

int fibonacci(int n)
{
    //printf("hi");
    if( n==1 || n==0 )
    return n;
    else if (n==0)
    return 0;
    else
    return ((fibonacci(n-1)) + (fibonacci(n-2)));
}
