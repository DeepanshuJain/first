#include <stdio.h>
void fun1();
void fun2() ;
#pragma startup fun1
#pragma  exit fun2
int main()
{
	printf ("main");
	return 0;
}
void fun1()

{
	printf("fun1");
}

void fun2()
{
	printf("fun2");
}

