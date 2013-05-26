#include<stdio.h>
void search(char[],char);
main()
{
      int z;
	char a[100],b;
	printf("Enter a string:\t");
	gets(a);
	printf("Enter the charcter to be counted:\t");
	scanf("%c",&b);
	search(a,b);
	scanf("%d",&z);
}
void search(char c[],char d)
{
	int i;
    int j=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==d)
    ++j;
    }
    printf("\n%c is present at %d different places",d,j);
}

