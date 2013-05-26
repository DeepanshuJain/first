
#include<stdio.h>
void main()
{ 
	int c;
	int d=0;
	printf ("enter string \n");
	c=getchar();
       while(c!=EOF)
       {
	       c=getchar();
	       if (c=='\n')
		       d++;
       }
       printf ("%d",d);
}



