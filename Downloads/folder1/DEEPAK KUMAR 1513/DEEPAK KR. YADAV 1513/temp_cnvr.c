/*conversion of temperature from fahrenheit to centrigrade*/
#include<stdio.h>
int main()
{
	float fr,cent;
	printf("enter the temperature in fahrenheit");
	scanf("%f\n",&fr);
	cent=5.0/9.0*(fr-32);
	printf("temperature in centrigrade=%f",cent);
	return 0;
}
