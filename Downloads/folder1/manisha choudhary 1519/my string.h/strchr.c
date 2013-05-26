#include<stdio.h>
void search(char[],char);
main()
{
      int z;
	char a[100],b;
	printf("Enter a string:\t");
	gets(a);
	printf("Enter the charcter to be searched:\t");
	scanf("%c",&b);
	search(a,b);
	scanf("%d",&z);
}
void search(char c[],char d)
{
	int i,j;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==d)
		{
                   j=0;
			printf("%c found at position %d",d,i+1);
			break;
		}
		else
		j=1;
	
    }
    if (j==1)
    printf("\nSearch not found");
}

