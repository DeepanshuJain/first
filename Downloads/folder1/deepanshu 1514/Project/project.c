#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void disp(int);
//void ret();
void add(int);
int main()
{
    int ch;
    while(1)
    {
            printf("1. available books\n");
            printf("2. issued books\n");
            printf("3. ret book\n");
            printf("4. student record\n");
            printf("5. add avilable books\n");
            printf("6. issue book to student\n");
            printf("7. add student record\n");
            printf("8. exit\n");
            printf("enter ur choice");
            scanf("%d",&ch);
            switch(ch)
            {
                      case 1:case 2:case 4:
                      {
                                  disp(ch);
                                  break;
                      }
                      case 3:
                           {
                        //    ret();
                            break;
                            }
                      case 5:case 6:case 7:
                           {
                           add(ch);
                           break;
                           }
                      case 8:
                           exit(0);
            }
    }
    getch();
    
}
void disp(int b)
{
     FILE *fp;
     char name[40],author[30],an,student[30],course[10];
                   int quan,roll;
     if(b==1)
     {
     fp=fopen("available.txt","r");
     while(fscanf(fp,"%s%s%d",name,author,&quan)!=EOF)
       {    printf("%s\t%s\t%d\n",name,author,quan);
        }   fclose(fp);
     }
     if(b==2)
     {
     fp=fopen("issue.txt","r");
     while(fscanf(fp,"%s%s%d",name,author,&quan)!=EOF)
     {
          printf("%s\t%s\t%d\n",name,author,quan);
      }    fclose(fp);
     }
     if(b==4)
     {
     fp=fopen("stduntrecord.txt","r");
     while(fscanf(fp,"%d%s%s%s",&roll,student,course,name)!=EOF)
     {
          printf("%d\t%s\t%s\t%s\n",roll,student,course,name);
      }    fclose(fp);
     }

}
void add(int b)
{
           FILE *fp;
            char name[40],author[30],an,student[30],course[10];
                   int quan,roll;
           if(b==5)
           {
                   fp=fopen("available.txt","a+");
               //    char name[40],author[30],an;
                 //  int quan;
                   do
                   {
                       printf("enter book name,author name,quantity");
                       scanf("%s%s%d",name,author,&quan);
                       fprintf(fp,"%s\t%s\t%d\n",name,author,quan);
                       printf("wanna continue:(y/n");
                       an=getche();
                   }while(an=='y');
                   fclose(fp);
           }
           if(b==6)
           {
              fp=fopen("issue.txt","a+");
               //    char name[40],author[30],an;
               //    int quan;
                   do
                   {
                       printf("enter book name,author name,quantity");
                       scanf("%s%s%d",name,author,&quan);
                       fprintf(fp,"%s\t%s\t%d\n",name,author,quan);
                       printf("wanna continue:(y/n");
                       an=getche();
                   }while(an=='y');
                   fclose(fp);      
           }
           if(b==7)
           {
                    fp=fopen("stduntrecord.txt","a+");
                 //  char name[30],book[40],an,course[20];
                 //  int roll;
                   do
                   {
                       printf("enter student roll no,student name,book name,course");
                       scanf("%d%s%s%s",&roll,student,name,course);
                       fprintf(fp,"%d\t%s\t%s\t%s\n",roll,student,name,course);
                       printf("wanna continue:(y/n");
                       an=getche();
                   }while(an=='y');
                   fclose(fp);
           
           }
           
}
