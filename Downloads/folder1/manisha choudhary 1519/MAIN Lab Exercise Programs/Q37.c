#include<stdio.h>
void cpystr(char*,char*);
int main()
{
int k;
char a[100],b[100];
printf("string1:");
gets(a);
printf("\n");
printf("string2:");
gets(b);
printf("\n");
cpystr(a,b);
printf("string1:");
puts(a);
scanf("%d",&k);
}

void cpystr(char*a,char*b)
{
 while((*b)!='\0')
{
 (*a)=(*b);
  ++a;
  ++b;
}
*a='\0';

}
