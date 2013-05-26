//To display: ABCDEFEDCBA
  //          ABCDE EDCBA
    //        ABCD   DCBA
      //      ABC     CBA
        //    AB       BA
          //  A         A
#include<stdio.h>
int main()
{
    int z;
    
    int n,j=0,s=0,x;
    printf("Enter the no. of lines upto which you have to display:\t");
    scanf("%d",&n);
    printf("\n");
    while( j<n )
{
    int i=65,l=0;

    while ( i<((65+n)-j))
    {
          printf("%c",i);
     i++;     
    }
        if ( j!=0)
    {
         l=0;
    while ( l<s)
        {
       printf(" ");
        l++;
        }
    } 
    if ( j==0 )
     i=i-2;
     else
     i=i-1;      
    while ( 65 <= i )
          {
          printf("%c",i);
          i--;
          }
    
    printf("\n");
    if ( j==0 )
    s=s+1;
    else s=s+2;
    j++;
}




    scanf("%d",&z);
}
