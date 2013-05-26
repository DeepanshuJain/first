#include<stdio.h>
#include<conio.h>
int main()
{   char c;
char line[100];
    FILE *fp;
    FILE *fp2;
    fp=fopen("org.txt","r");
    fp2=fopen("cpy.txt","w");
    
  /*  while (fgets(line,sizeof(line),fp) != NULL);
  {
    
    fputs(line, fp2);
    printf(line);
 
  }*/
  
  
  
    
  /*while((c=getc(fp))!= EOF) {
    //fprintf(fp2,"%c",c);
    putc(c,fp2);
    printf("hi");
}*/



   fscanf(fp,"%c",&c);
    while(!feof(fp))
    {
                    fprintf(fp2,"%c",c);
                        fscanf(fp,"%c",&c);
}
    fclose(fp);
    fclose(fp2);
    
    getch();}
