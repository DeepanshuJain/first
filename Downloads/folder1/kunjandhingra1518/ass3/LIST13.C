#include<stdio.h>

main()
{
	float fahr,cels,lower=0,upper=300,step=20;
	fahr=lower;
	printf("\nFahrenheit  Celcius\n");
	while(fahr<=upper)
	{	cels=(5.0/9.0)*(fahr-32);
		printf("\n   %3.0f \t    %6.1f",fahr,cels);
		fahr+=step;
	}

}