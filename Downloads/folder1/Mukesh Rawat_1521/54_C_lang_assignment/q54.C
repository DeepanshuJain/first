#include<stdio.h>

enum months
{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};

main()
{
	int days;
	enum months month;
	const char*monthname[]={"","January","February","March","April","May","June","July","August",
				"September","October","November","December"};
	for(month=jan;month<=dec; month++)
	{       if(month%2==0)
		{	days=30;
			if(month==2)
				days=28;
		}
		else days = 31;
		printf("%3d  %9s has %d days \n",month,monthname[month],days);
	}

}
