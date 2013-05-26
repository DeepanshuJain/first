#include<stdio.h>
main()
{
	printf("\nEnter a lowercase character : ");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
		printf("\n%c in uppercase is %c",ch,ch-32);
	else
		printf("\n%c is not a lowercase character !!",ch);

}