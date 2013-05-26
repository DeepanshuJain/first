//my string sort
/*#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    //scanf("%d",&m); char a[3][10]={0};
    int i,j;
    for(i=0;i<3;i++)
    {for(j=0;a[i][j-1] != '\n';j++)
    scanf("%c",&a[i][j]);
    a[i][j]='\0';
    }
    
  for(i=0;i<3;i++)
    
    printf("%s",a[i]);
    
    
    
    
  
    
    getch();
    }
*/


#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
    int x,y;
    int m;
    int k,z;
    char *a[10];
    char s[10][50];
    int i,j;
    printf("enter thr number of strings to sort\n");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
                    scanf("%s",s[i]);
                    a[i]=s[i];
                    }


for(k=0;k<m-1;k++)
for(i=0;i<m-1;i++)
{
         for(j=0; ((*(a[i]+j)) != '\0') || ((*(a[i+1]+j)) != '\0');j++)
                  {
                  
                  x=*(a[i]+j);
                  y=*(a[i+1]+j);
                  if (x>y)
                 
                {
                  //or we can do swap(&a[i],&a[i+1]);
                  z=a[i];
                  a[i]=a[i+1];
                  a[i+1]=z;
                  break;
                                    }
                                    else if(x<y)
                                      break; 
                                  
                 }
                
}


printf("\nThe sorted strings are:\n\n");
//to get output
for(i=0;i<m;i++)
//printf("\n%s\n",a[i]);
puts(a[i]);
getch();
}


void swap(int *a,int *b)
{
     int t;
printf("hi");
t=*a;
*a=*b;
*b=t;
printf("hi");
}
