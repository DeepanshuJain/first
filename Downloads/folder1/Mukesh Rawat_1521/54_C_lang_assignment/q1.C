#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	printf("Printing ASCII values Table...\n\n");
	num = 0;
	while(num<=255)
	{
		printf("\nValue:%d = ASCII Character:%c", num, num); /*This change has been made as per the comment. Thank you anonymous Blog Viewer ... */
		num++;
	}
	printf("\n\nEND\n");
	getch();

}
