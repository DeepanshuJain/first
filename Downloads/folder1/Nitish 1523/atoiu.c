
#include<stdio.h>
int main ()
{
	char str[7];
int num=0,i;
printf("string:");
scanf("%S",str);
for (i=0; str[i]!='\0';i++)
{
	if (str[i]>=48 && str[i]<=57)
		num=num*10+(str[i]-48);
	else
	{
		printf("not valid");
		return 1;
	}}
return 0;
printf ("num is %d \n", num);
}


