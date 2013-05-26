#include<stdio.h>
void main()
{
	int blank=0,tab=0,newline=0;
	int c,done=0,lastchar=0;
	while(done==0)
	{
		c=getchar();
		if(c=' ')
			blank++;
		if(c='\t')
			tab++;
		if(c='\n')
			newline++;
		if(c==EOF)
		{
			if(lastchar!='\n')
			{
				++newline;
			}
			done=1;
		}
		lastchar=c;
	}
	printf("blanks = %d\ntabs =%d\nlines =%d\n",blank,tab,newline);
}

