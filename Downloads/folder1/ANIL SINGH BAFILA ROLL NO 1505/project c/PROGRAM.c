#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
struct emp{
unsigned eno;
char enamef[12];
char enamel[12];
int department;
char edob[12]     ;
char edoj[12];
float salary;
char address[52];
};
int SetColor ( int Color );
 
int SetColor ( int Color )
{
    HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    return SetConsoleTextAttribute ( hConsole, Color );
}

void addrec();

void serdisp(struct emp *s)
{
printf("\nEmploy Number\t\t\t: %d",s->eno);
printf("\n\nEmploy first name\t\t: %s",s->enamef);
printf("\n\nEmploy last  name\t\t: %s ",s->enamel);
printf("\n\nDepartment Code\t\t\t: %d",s->department);
printf("\n\nDate of birth(DD\\MM\\YYYY)\t: ");puts(s->edob);
printf("\nDate of joining(DD\\MM\\YYYY)\t: ");puts(s->edoj);
printf("\nSalary\t\t\t\t: %f",s->salary);
printf("\n\nAddress \t\t\t: %s ",s->address);
}


struct emp input(int t)
{system("cls");
struct emp s;s.eno=t;
printf("\nEmploy Number\t\t\t: %d",s.eno);
printf("\n\nEmploy first name\t\t: ") ;fflush(stdin);
gets(s.enamef);
printf("\nEmploy last  name\t\t: ")  ;
gets(s.enamel);
printf("\nDepartment Code\t\t\t: ");
fflush(stdin);scanf(" %d",&s.department);
printf("\nDate of birth(DD\\MM\\YYYY)\t: ");
fflush(stdin);gets(s.edob);
printf("\nDate of joining(DD\\MM\\YYYY)\t: ");
fflush(stdin);gets(s.edoj);
printf("\nSalary\t\t\t\t: ");
fflush(stdin);scanf("%f",&s.salary);
printf("\nAddress\t\t\t\t: ");
fflush(stdin);
gets(s.address);
return s;
}

void output(struct emp *s)
{SetColor(14);
   printf("\n%-5d  %10s  %10s  %6d        %5.1f\t%9s",s->eno,s->enamef,s->enamel,s->department,s->salary,s->edoj);
}
void deleter();
void search();
void edit();
void disprec(char *);
void seedel();

int main()
{ 

   system("cls");
   int ch,em;
    do
    { 
   system("cls");SetColor(11);
   printf("MAIN MENU\n");SetColor(10);
    printf("\n1.ADD RECORD");
    printf("\n2.DISPLAY ALL RECORDS");
    printf("\n3.SEARCH RECORD");
    printf("\n4.DELETE RECORD");
    printf("\n5.EDIT RECORD");
    printf("\n6.SEE DELETED RECORDS");
    printf("\n7.EXIT");
    printf("\n\nENTER YOUR SELECTION (1-7)");SetColor(14);
    scanf("%d",&ch);SetColor(10);
    switch(ch)
    {case 1:SetColor(11);
          addrec();
              break;
    case 2:system("cls");SetColor(43);
    printf("EMP NO.\tFIRST NAME\tLAST NAME  DEPT NO.  SALARY\tJOINING DATE");
             disprec("Emp.dat");
             printf("\n\nPRESS ANY KEY TO CONTINUE");
             getch();
             break;
    case 3:    search();
           break;
    case 4:deleter();
         break;
    case 5:edit();
         break;
    case 6:system("cls");
    printf("EMP NO.\tFIRST NAME\tLAST NAME  DEPT NO.  SALARY\tJOINING DATE");
             disprec("DelEmp.dat");
             printf("\n\nPRESS ANY KEY TO CONTINUE");
             getch();
         break;
    case 7:exit(0);
    default :SetColor(12);
             printf("INVALID CHOISE RE ENTER YOUR CHOISE (press any key to continue)");
              getch();
}
}while(ch!=7);   
return 0;
}
void addrec()
{long i;
  FILE *fp;
  struct emp e;
     fp=fopen("Emp.dat","a+b");
     if(fp==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     if(fseek(fp,0,SEEK_END)==0)
     {
          i=ftell(fp);
          if(!i)
          {e.eno=10000;}
          else{
               fseek(fp,-(sizeof(e)),SEEK_END);
               fread(&e,sizeof(e),1,fp);
               e.eno+=1;
               }
               }
     e=input(e.eno);
     fseek(fp,0,SEEK_END);
     fwrite(&e,sizeof(e),1,fp);
     fclose(fp);
     SetColor(12);
printf("\nRECORD ADDED SUCESS FULY");
printf("\npress any key to continue");
getch();return;
}
void disprec(char *name)
{
     FILE *fp;
     struct emp e;
     fp=fopen(name,"rb");
     if(fp==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     while(fread(&e,sizeof(e),1,fp)==1)
     {     
     output(&e);
     }
     fclose(fp);
     return;
     }
void search()
{
     system("cls");
     unsigned s;int count=0;
     printf("Enter the employ no\t: ");SetColor(14);
     scanf(" %d",&s);
     FILE *fp;
     struct emp e;
     fp=fopen("Emp.dat","rb");
     if(fp==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     while(fread(&e,sizeof(e),1,fp)==1)
     {     
          if(e.eno==s)
          {serdisp(&e);
          count++;
           printf("\n\nPress any key to continue"); 
           getch() ;
          break;
          }
     }          
 if(!count)
           {SetColor(12);
                printf("INVALID EMPLOY NUMBER");
           printf("\n\nPress any key to continue"); getch(); }
           fclose(fp);return;

   }       
void deleter()
{
     system("cls");
     unsigned s=0;int count=0;char c;
     printf("Enter the employ no to delete\t\t: ");SetColor(14);
     scanf(" %d",&s);
     FILE *fr,*fdel,*temp;
     struct emp e;
     fr=fopen("Emp.dat","rb");
     if(fr==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     temp=fopen("Temp.dat","wb");
     if(temp==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     fdel=fopen("DelEmp.dat","ab");
     if(fdel==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     while(fread(&e,sizeof(e),1,fr)==1)
     {     
          if(e.eno!=s)
          {fwrite(&e,sizeof(e),1,temp);
          }
          else
          {count++;SetColor(12);
              printf("\nARE YOU SURE YOU WANT TO DELETE RECORD");
           serdisp(&e);SetColor(11);
           printf("\nPress (y\\n)");
           scanf(" %c",&c);
            if(c=='y'||c=='Y')
             {
              fwrite(&e,sizeof(e),1,fdel);
            printf("\nRECORD DELETED SUCESS FULLY");
            printf("\npress any key to go to main menu");
             getch();
            }
            else{fwrite(&e,sizeof(e),1,temp);SetColor(10);
            printf("\nRECORD NOT DELETED ");
             printf("\npress any key to go to main menu");
             getch();
            }
            }
            
     }          
 if(!count)
           {SetColor(12);
                printf("\nINVALID EMPLOY NUMBER");
           printf("\n\npress any key to continue");
           fclose(fr);
           fclose(temp);
           fclose(fdel);getch(); 
           remove("Temp.dat");}
else
{   fclose(fr);
    fclose(temp);
    fclose(fdel);
    remove("Emp.dat");
    rename("Temp.dat","Emp.dat");
  } 
  return;
   }    
     
void edit()
{
     system("cls");
     unsigned s;int count=0;char c;
     printf("Enter the employ no to Edit\t\t: ");
     scanf(" %d",&s);
      FILE *fp;
     struct emp e;
     fp=fopen("Emp.dat","r+b");
     if(fp==NULL)
     {printf("UNABLE TO OPEN FILE");
     printf("\npress any key to go to main menu");
     getch();
     return;
     }
     while(fread(&e,sizeof(e),1,fp)==1)
     {     
          if(e.eno==s)
          {printf("\nARE YOU SURE YOU WANT TO EDIT RECORD");
           serdisp(&e);count++;
           printf("\nPress (y\\n)");
           scanf(" %c",&c);
            if(c=='y'||c=='Y')
             {
                 e=input(s);  
                 fseek(fp,-(sizeof(e)),SEEK_CUR);           
              fwrite(&e,sizeof(e),1,fp);
            printf("\nRECORD UPDATED SUCESS FULLY");
             printf("\n\nPress any key to continue"); 
           getch(); break;
             }
            else{printf("\nRECORD NOT NOT MODIFIED ");
             printf("\npress any key to go to main menu");
             getch();
          break;
          }
     }  }        
 if(!count)
           {printf("INVALID EMPLOY NUMBER");
           printf("\n\nPress any key to continue"); getch(); 
           }
           fclose(fp);
           return;

   } 
     
