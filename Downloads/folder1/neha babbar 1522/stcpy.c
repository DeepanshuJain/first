#include<stdio.h>
void main()
{ char sr[20];
	char tr[20];

	printf("enter string to be copied\n");
	scanf("%s", sr);
	strgcpy(tr,sr);
                printf("\ncopied string is= %s\n",tr);


}
strgcpy(char *s1,char *s2)
{
	while(*s2!='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
}

