#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<dos.h>
#include<time.h>
int  main()
{
 float start,end;

 int i,n,j,temp,k;
 printf("\nEnter No of elements in the array:");
 scanf("%d",&n);
 start = clock();
 int *p=(int*) malloc(n*sizeof(int));
 for(i=0;i<n;i++)
	 {
	  *(p+i)=rand();
	 }

 for(i=0;i<n;i++)
	 {
	  for(j=0;j<n;j++)
		  {
			if(*(p+j)>*(p+j+1))
			  {
				temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			  }

		  }
	  }

  end = clock();
 printf("\nThe time for the event was: %f",(end-start)/CLK_TCK);
 }
