#include<stdio.h>
#include<string.h>
int strcmp_(char *s,char *d,int c);
void strcpy_(char *,char *,int );
int main()
{
    char string[200],word[20][10],*p,*t,*l;
    int count[50]={0},m,i,j=0,cout=0,flag=0,len;
    gets(string);p=string;/*len=strlen(string);
    string[len]=' ';string[len+1]='\n';*/
    printf("Enter the mth number : ");
    scanf("%d",&m);l=p;p++;
    
    for(i=0;*l!='\n';)
    {p--;
    if(*p=='\n')
    break;
    p++;
    t=p;
            while(*p!=' ')
            {p++;
            }j=0;
            while(j<cout)
              {                        
                        if(!(strcmp_(&word[j][0],t,p-t)))
                        {++count[j];
                        flag=1;
                             break;
                        }
                             j++;
              }    
             if(!flag)
              { strcpy_(&word[cout][0],t,p-t);
               cout++;
              }
              l=p;
              p++;                  
      }
      
     for(i=0;i<cout;i++)
      {
                     // if(count[i]==m)
                         {printf("\nThe %d th most frequent word is %s",m,&word[i][0]);
                          }
}
}



int strcmp_(char *s,char *d,int c)
{
    int count=0,i=0;
     for(i=0;i<c;i++)
     {if (*s!=*d)
     break;
     else
     
     {
        s++;d++; count++;}
                     }
     return (c-count);
     }

void strcpy_(char *d,char *s,int c)
{
            int x=0;
            while(x<c)
b            {*d=*s;
            d++;s++;
            x++;}
            *d='\0';
            }
