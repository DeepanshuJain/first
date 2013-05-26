#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

main()
{
	int i;
	srand(time(NULL));
	for(i=1;i<=50;i++)
	{
		printf("%10d", 1+rand()%10);
		if(i%5==0)
			printf("\n\n");
	}
	getch();
}
