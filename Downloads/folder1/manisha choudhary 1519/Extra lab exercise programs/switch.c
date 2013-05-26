#include<stdio.h>
#include<conio.h>
int main()
{
    int adigit=0,bdigit=0,cdigit=0;
    int ch;
    while( (ch=getchar()) != EOF )
    {
           switch(ch){
                      case 'A': case 'a':
                           ++adigit;
                           break;
                                                      
                           case 'B': case 'b':
                                ++bdigit;
                                break;
                                
                                case 'C': case 'c':
                                     ++cdigit;
                                     break;
                                     
                                     case '\n': case ' ':
                                     break;
                                     
                                     default:
                                          printf("wrong character entered");
                                          break;
                      }
    }
                      
                      printf("a=%d \n",adigit);
                      printf("b=%d \n",bdigit);
                      printf("c=%d \n",cdigit);
                      
    
getch();

}
