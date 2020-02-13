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
int mini;

   for(i=0;i<n-1;i++){
        mini=i;
    for( j=i+1;j<n;j++){
       if(*(p+mini)>*(p+j)){
        mini=j;
       }
    }

    temp=*(p+mini);
	*(p+mini)=*(p+i);
    *(p+i)=temp;
   }


  end = clock();
 printf("\nThe time for the event was: %f",(end-start)/CLK_TCK);
 }
