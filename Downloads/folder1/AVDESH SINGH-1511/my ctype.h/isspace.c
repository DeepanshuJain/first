//AVDESH KUMAR SINGH
#include<stdio.h>
void space(int);
int main()
{
	int a, b,c,z;
	printf("enter any character\n");
	c=getchar();
	space(c);
	scanf("%d",&z);
}
void space(int x)
{
     	if((x==9)||(x==32))
	
		printf("it is space\n");
		//return (1);
	else 
	printf("it is not space\n");
	
}
