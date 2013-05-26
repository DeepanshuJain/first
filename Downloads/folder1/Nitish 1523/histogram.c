#include<stdio.h>
main()
{
	char s[60];
	int k=0;
	int i=0;
	printf("enter a string");
	gets(s);
	while(s[i]!='\0')
	{
	
		printf("%c",s[i]);
		if(s[i]==(' '||'\t'||'\0'))
		{
			
				printf("\t\t");
				while(k<i)
				{
					printf(" * ");
					k++;
				}
			
			printf("\n");
		}
			i++;
	}
}

				
