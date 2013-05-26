#include<stdio.h>

main()
{
int num1,num2;//to take input of two numbers
int temp;//to interchange the values of the two numbers
printf("Enter the 1st number\n");
scanf("%d",&num1);
printf("Enter the 2nd number\n");
scanf("%d",&num2);

printf("The first number is c=%d\n",num1);
printf("The second  number is d=%d\n",num2);

temp=num1;
num1=num2;
num2=temp;
printf("On swapping\n");
printf("The first number becomes c=%d\n",num1);
printf("The second  number becomes d=%d\n",num2);







}
