#include<stdio.h>

main()
{
	int nb=0,nt=0,nl=1;
	char ch;
	printf("\nEnter your data : \n");
	while((ch=getchar()) != EOF)
	{	if(ch==' ')
			nb++;
		else if(ch=='\t')
			nt++;
		else if(ch=='\n')
			nl++;
	}
	printf("\nYou %d blanks %d tabs and %d lines.",nb,nt,nl);

}