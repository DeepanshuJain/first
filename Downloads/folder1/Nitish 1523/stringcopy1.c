#include<stdio.h>
char *stcp(char *, const char *, int);
main()
{
	        char a[20];
		        char b[20];
			int x;
			        printf("enter a string a= ");
				        gets(a);
					printf("enter no. of character to be copied\n");
					scanf("%d",&x);
					        stcp(b, a, x);
						        printf("copied string b =  %s\n", b);

}
        char *stcp(char *b, const char *a, int x)
{
	        char temp;
		        for(;x!=0;*b=*a,a++, b++,x--)
				        ;
			        *b='\0';
				        return b;
}

