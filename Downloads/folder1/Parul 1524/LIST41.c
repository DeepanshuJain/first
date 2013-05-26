#include<stdio.h>
int mystrncat(char*a,char*b);
main()
{
 char a[100],b[100];
 int p;
 printf("enter the first string\n");
gets(a);
printf("enter the second string\n");
gets(b);
p=mystrncat(a,b);
}
int mystrncat(char*a,char*b)
{
 int i,l,j,n;
 printf("enter the numbers of characters to be concatenated\n");
 scanf("%d",&n);
 for(l=0;*a!='\0';l++)
  a++;
i=0;
while(i<n)
{
 *a=*b;
 a++;
 b++;
 i++;
}
*a='\0';
a=a-l-i;
puts(a);
return 1;
}


