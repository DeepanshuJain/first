#include<stdio.h>
void main()
{
	char s[20];
	char ch;int x=0;
	printf("enter a string \n");
	scanf("%s",s);
	
	printf("enter the character ");
scanf("%c",&ch);	
	int i=0,pos=0;
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch)
	         {
	     		 pos=i+1;
			 break;
		 }
	}
	if(pos>0)
		printf("the character is present at position %d\n",pos);
	else
		printf("character not found...");
}

	

