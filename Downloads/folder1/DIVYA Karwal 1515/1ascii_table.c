#include <stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("   ASCII TABLE\n\nVALUE\t    CHARACTER\n");
	for(i=0;i<255;i++)
	{
		printf("  %d\t\t%c\n",i,i);
	}
	getch();
}



