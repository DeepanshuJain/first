#include<stdio.h>
char cpystr(char*,char*);
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

char cpystr(char*c,char*d)
{
 while((*d)!='\0')
{
 (*c)=(*d);
  ++c;
  ++d;
}
*c='\0';

}
