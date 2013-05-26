#include<stdio.h>
void main()
{
	int c,i;
	int nwhite, noother, ndigit;
		nwhite=noother=ndigit=0;
	while((c=getchar())!=EOF)
	{
		switch(c)
		{
			  case'0':case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':
				  ndigit++;
				  break;
			  case' ': case'\n':case'\t':
				  nwhite++;
				  break;
			  default:
				  noother++;
				  break;
		  }
	}
	printf("ndigits=%d,white space=%d,other=%d",ndigit, nwhite,noother);
}

