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
	int i,j,e=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==d)
		{
          //         j=0;
                   e=i+1;
		}
		//else
		//j=1;
	
    }
    if (e==0)
    printf("\nSearch not found");
    else 
    printf("The last position of %c is %d",d,e);
}
