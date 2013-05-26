#include<stdio.h>
int main(void)
{
	int blanks=0,tabs=0,newlines=0;
	int c;
	while((c=getchar())!= EOF)
	{
	
		if (c==' ')
			++blanks;
		if (c=='\t')
			++tabs;
		if (c=='\n')
			++newlines;
			}
	printf("Blanks:%d\n Lines:%d\n Tabs:%d\n",blanks,newlines,tabs);
	getchar();
}
