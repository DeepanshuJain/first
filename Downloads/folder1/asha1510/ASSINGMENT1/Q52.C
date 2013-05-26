#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int ai(char s[]);
double af(char s[]);

main()
{       clrscr();
	char ch[100];
	int n1;
	double n2;
	printf("\nEnter string : ");
	scanf("%s",ch);
	n1=ai(ch);
	n2=af(ch);
	printf("\nInteger value is : %d",n1);
	printf("\n\nFloat value is : %f",n2);
	getch();
}


int ai(char s[])
{
	int i, n, sign;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-') /* skip sign */
	i++;
	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');
	return sign * n;
}

double af(char s[])
{
	double val, power;
	int i, sign;
	for (i = 0; isspace(s[i]); i++) /* skip white space */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) 
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}
	return sign * val / power;
}