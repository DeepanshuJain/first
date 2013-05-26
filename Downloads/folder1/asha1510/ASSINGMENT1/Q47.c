#include<stdio.h>
#include<conio.h>

main()
{ 	clrscr();
	FILE *fp,*fp1;
	char c;
	fp1=fopen("sin.c","w");
	if((fp=fopen("nis.c","r"))== NULL)
	{
		printf("\nCan't open the file");
	}

	else
	{
		while((c= fgetc(fp))!=EOF)
			fputc(c,fp1);
		while( (c=fgetc(fp1))!=EOF)
			printf("%c", c);
		fclose(fp1);
		fclose(fp);
	}
	getch();
}

/*main( int argc, char argv[])
{
  FILE *fp;

if(argc==1)
 filecopy(stdin,stdout);
else
while(--argc >0)
++argv;

if((fp=fopen("nis.c","w"))==NULL)
printf(" file cannot b open");

else
{
 filecopy(fp,stdout);
fclose(fp);
}
return 0;
}*/

