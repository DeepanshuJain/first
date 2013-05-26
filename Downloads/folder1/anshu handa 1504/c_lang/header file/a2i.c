/* atoi: convert s to integer */



int atoi(char s[])
{
int i, n;
//Chapter 2 - Types, Operators and Expressions
n = 0;
for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
{ 
  n = 10 * n + (s[i] - '0');
   printf("\n%d",(s[i] - '0'));
}
return n;
}
int main()
{
    int n;
    char s[]="12345";
    n=atoi(s);
    printf("the no is %d",n);
    getch();
}
