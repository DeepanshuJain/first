                                                                                                                                                                                                                                                                                                                                                   #include<stdio.h>
main()
{
  static int ar[16];
 int no,base,i=15;
	
  printf("enter any integer no");
  scanf("%d",&no);

  printf("enter base no");
  scanf("%d",&base);

   while(no > 0)
   {
      ar[i--]= no % base;
      no/=base;
   }
   printf("the binary equivalent is\n");
   for( ;i<=15;i++)
	   printf("%d",ar[i]);

}
	
