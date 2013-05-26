//to change a hexadecimal string into a its integer valve

#include<stdio.h>
int main()
{
    char s[5];
    gets(s);
    int i=0;
    int n=0,hex,t=1;
    if (s[i]=='0')
    {
                  ++i;
                  if( s[i]=='x' || s[i]=='X')
                  ++i;
    }
              for(;t==1;i++)
              {
              if ( s[i]>= '0' && s[i] <='9')
              hex=s[i]-'0';
              else if (s[i]>='a' && s[i]<='f')  
              hex=s[i]-'a'+10;
              else if( s[i]>='A' && s[i]<='F')  
              hex=s[i]-'A'+10;
              else
              t=0;
              if(t==1)
              n=16*n + hex;
              }
              printf("\n%d",n);
scanf("%d",&n);
}
