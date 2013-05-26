#include<stdio.h>
void search(char[]);
main()
{
      int z;
	char a[100];
	printf("Enter a string:\t");
	gets(a);
	//printf("Enter the charcter to be searched:\t");
	//scanf("%c",&b);
	search(a);
	scanf("%d",&z);
}
void search(char c[])
{
	int i,e=0;
	for(i=0;c[i]!='\0';i++)
	{
		e++;
	
}
    printf("\nThere are %d characters in the string",e); 
    //printf("The last position of %c is %d",d,e);
}
