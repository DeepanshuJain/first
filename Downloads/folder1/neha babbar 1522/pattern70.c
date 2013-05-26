#include <stdio.h>
main()
{
      char a, b='A';
      int p,q,r,s,t,u=0,v;
      printf("enter any alphabet in caps ");
      scanf("%c", &a);

      p = (a-64);
      v=p-1;
      s=p;
      for(q=p;q>=0;q--)
      {
	      b=64;r=p;
	      if(v==p){u=1;}  
	      while(r!=0)
	      {
		      ++b;
		      printf("%c",b);		      
		      r--;
	      }
	      
	     for(r=0;r!=u;r++)
	     {
		printf(" ");
		
	     }
	     u++;
	     u++;

	     if(s==p)
	     {
		t=p-2;
   		b--;
	     }   
	    
	     else
	     {
	        t=p-1;
	     }
	     
	     while(t>=0)
	     {
		      printf("%c",b);
		      --b;
		      t--;
	     }
	      
	     printf("\n");	      
             p--;
      }

}
