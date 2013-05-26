#include<stdio.h>

main()
{
	long count=0;
	printf("\nEnter character you want to count : ");
	while(getchar() != EOF)
		count++;
	printf("\nYou entered %d characters.",count);

}