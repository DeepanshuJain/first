#include<stdio.h>
#include<string.h>
void swap(int *,int*);
int xstrcmp(char *,char *);
main()
{
	int k,j,b, i,m;
	char *a;
	char *ptr[]={"abhishek","tanu","divya","sid"};
	for(k=0;k<3;k++)
	{
		m=xstrcmp(ptr[k],ptr[k+1]);
		if(m>0)
		{
			swap(&ptr[k],&ptr[k+1]);
			/*a=ptr[k];
			ptr[k]=ptr[k+1];
			ptr[k+1]=a;*/
		}
	}


	for(i=0;i<=3;i++)
	{
		for(j=0;( *(ptr[i]+j))!='\0' ;j++)
		{
	//		if(*(ptr[i]+j)=='\0')
	//			break;

		printf("%c",*(ptr[i]+j));
		}
		printf("\n");
	}
}
int xstrcmp(char*str1,char*str2)
{
	        int c;
		 while((*str1!='\0')||(*str2!='\0'))
				{
				       	c=*str1-*str2;
					 if(c!=0)
						 break;
						 str1++;
						 str2++;
				 }
			        return c;
}

	
void swap(int *sstr1,int *sstr2)
{
	int temp;
	temp=*sstr1;
	*sstr1=*sstr2;
	*sstr2=temp;
}

