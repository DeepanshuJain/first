#include<stdio.h>
int main(void)
{
	int lines=1;
	int c;
	while((c=getchar())!= EOF)
	{
	if(c=='\n')
		++lines;
			}
	printf("Totsl number of lines entered:\t %d\n",lines);
	getchar();
}
