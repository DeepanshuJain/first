#include <stdlib.h>
#include <stdio.h>
#include<time.h>
/* function main begins program execution */
int main() {
 int   i=10,j=20;srand(time(NULL));
while(j!=0){
//	printf("%d", RAND_MAX);

	i=rand();
	printf("\n%d\t%d",i,time(NULL));
 j--;
	 }getchar();return 0;/* indicates successful termination */
} /* end main */
