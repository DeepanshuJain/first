#include<stdio.h>
#include<conio.h>
struct complex add(struct complex p1,struct complex p2);
struct complex mul(struct complex p1,struct complex p2);

struct complex
{

 	float a1;
	float a2;
};

main()
{ 	clrscr();
	struct complex v1,v2,v3,v4;
	printf("enter the float values for first variable \n");
	scanf("%f%f",v1.a1,v2.a2);
	printf("enter the float values for the second variable \n");
	scanf(" %f%f",v2.a1,v2.a2);
	printf(" result of addition is  : ");
	v3= add(v1,v2);
	printf(" %f , %f",v3.a1,v3.a2);
	printf("\n result of multiplication is  :");
	v4= mul(v1,v2);
	printf("%f , %f",v4.a1,v4.a2);
	printf(" \n \n");
	getch();
}

struct complex add(struct complex p1,struct complex p2)
{
	struct complex i;
	i.a1 = p1.a1 + p2.a1;
	i.a2 = p1.a2 + p2.a2;
	return i;
}

struct complex mul(struct complex p1,struct complex p2)
{
	struct complex j;
	j.a1 = p1.a1 * p2.a1;
	j.a2 = p1.a2 * p2.a2;
	return j;
}
