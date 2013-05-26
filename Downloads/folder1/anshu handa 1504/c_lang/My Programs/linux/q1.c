#include<stdio.h>
#define L 0
#define U 300
#define STEP 20
void main()
{
	int f,c;
	f=L;
	while(f<=U)
	{c=5*(f-32)/9;
	printf("%40d\t%100d\n",f,c);
	f+=STEP;
	}
	}

