#include<stdio.h>
int main()
{
	int i,ch,count=0;
	char a[500];
	gets(a);
/*while(( ch=getchar()) != EOF)
{
a[i]=ch	;
i++;
}
puts(a);*/

	for(i=0;a[i]!=EOF;i++)
	{
		if(a[i]=='\n')
			count++;
	}
	printf("lines are%d\n",count);
        puts(a);
}

