#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    int x,n=0;
    
    
    fp=fopen("scores.dat","r");
    fscanf(fp,"%d",&x);
    while(!feof(fp))
 {   if(x<0)
    n++;
        fscanf(fp,"%d",&x);

}
printf("There are %d negetive numbers in the file",n);
  fclose(fp);  
  
    
    getch();}
