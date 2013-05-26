// answer to dennis richir page-60, Q-3.2
#include<stdio.h>
void escape(char*,char []);
int main()
{
    int i=0;
    char str[100];
    char newstr[100];
    printf("Enter the string containing tab or anter:");
    gets(str);
    escape(newstr,str);
    printf("The new string is:   ");
    puts(newstr);
    scanf("%d",&i);
    getchar();
}

void escape(char* s,char t[100])
{
     int i,j=0;
     for( i=0; t[i] != '\0'; i++)
     {
         switch(t[i]) {
                       case '\n':
                            *(s++)='\\';
                            *(s++)='n';
                            break; 
                       case '\t':
                            *(s++)='\\';
                            *(s++)='t';
                       break;
                       default:
                               *(s++)=t[i];
                               break;
                       }
     }
     *(s++)='\0';
     
}
