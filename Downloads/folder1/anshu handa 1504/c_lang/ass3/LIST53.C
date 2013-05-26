#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 100
main()
{ clrscr();
  int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX],o,i,j,k,m,n,p,q;

printf(" enter the number of rows of the matrix 1 \n");
scanf("%d",&m);

printf(" enter the number of columns of the matrix 1 \n");
scanf("%d",&n);

printf("enter elements of the first matrix \n");

for(i=0;i<m;i++)
   for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);

 
printf(" enter the number of rows of the matrix 2 \n");
scanf("%d",&p);

printf(" enter the number of columns of the matrix 2 \n");
scanf("%d",&q);
printf("enter elements of the second matrix \n");

for(i=0;i<p;i++)
   for(j=0;j<q;j++)
	scanf("%d",&b[i][j]);

printf(" enter 1 for  multiplication or 2 for addition of the two matrix \n");

printf(" what u want to enter .....? \n");

scanf("%d",&o);

switch(o)
{

case 1:{ if(n!=p)
	 {	printf("\nMatrices cannot be multiplied !! ");
		getch();
		exit(0);
	 }
	else
	{
		for(i=0;i<m;i++)
		    for(j=0;j<q;j++)
		    {	c[i][j]=0;
			for(k=0;k<n;k++)
			    c[i][j]+=a[i][k]*b[k][j];
		    }
		printf("\nThe first matrix is :\n");
		for(i=0;i<m;i++)
		{	for(j=0;j<n;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		printf("\nThe second matrix is :\n");
		for(i=0;i<p;i++)
		{	for(j=0;j<q;j++)
				printf("%d ",b[i][j]);
			printf("\n");
		}
		printf("\nThe matrix after multiplication is :\n");
		for(i=0;i<m;i++)
		{	for(j=0;j<q;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}
		break;

	}

case 2:{  if(m!=p || n!=q)
	 {	printf("\nMatrices cannot be added !! ");
		getch();
		exit(0);
	 }

	  for(i=0;i<m;i++)
	     for(j=0;j<n;j++)
		 c[i][j]=a[i][j]+b[i][j];
	  printf("\nThe first matrix is :\n");
		for(i=0;i<m;i++)
		{	for(j=0;j<n;j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		printf("\nThe second matrix is :\n");
		for(i=0;i<p;i++)
		{	for(j=0;j<q;j++)
				printf("%d ",b[i][j]);
			printf("\n");
		}
		printf("\nThe matrix after addition is :\n");
		for(i=0;i<m;i++)
		{	for(j=0;j<q;j++)
				printf("%d ",c[i][j]);
			printf("\n");
		}

	  }

} }
 getch();

}