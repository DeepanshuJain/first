#include<stdio.h>
#include"myctype.h"
main()
{
	char a[30],b;
	printf("enter a string");
	gets(a);
	printf("enter the character to be removed");
	scanf("%c",&b);
	squeeze(a,b);
	puts(a);
}

/*void squeeze(char *p,char a)
{
	        
		        char *k;
			        for(;*p!='\0';p++)
					        {
							                if(*p==a)
										                {
													                        for(k=p;*k!='\0';k++)
																	                        {
																					                                *k=*(k+1);
																									                        }
																                }
									        }
}*/

