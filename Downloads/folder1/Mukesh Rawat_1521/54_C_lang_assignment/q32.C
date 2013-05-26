#include<stdio.h>
#include<conio.h>
int A[50];
void printarr(int a)
{
	 int i;
	 for(i=0;i<a;i++)
	 {
		printf("%d",A[i]);
		printf("\n");
	  }
}


/* qsort: sort v[left]...v[right] into increasing order */
void quicksort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	if (left >= right) /* do nothing if array contains */
		return; /* fewer than two elements */
	swap(v, left, (left + right)/2); /* move partition elem */
	last = left; /* to v[0] */
	for (i = left + 1; i <= right; i++) /* partition */
		if (v[i] < v[left])
	swap(v, ++last, i);
	swap(v, left, last); /* restore partition elem */
	quicksort(v, left, last-1);
	quicksort(v, last+1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

main()
{	 //clrscr();
	 int i,s;
	 printf("\nEnter the number of numbers to be entered : ");
	 scanf("%d",&s);
	 for(i=0;i<s;i++)
	 {
		printf("\nEnter the number : " );
		scanf("%d",&A[i]);
	 }
	 printf("\nArray before sorting :  \n");
	 printarr(s);
	 quicksort(A,0,s-1);
	 printf("\nArray after sorting : \n");
	 printarr(s);
	 getch();
}
