#include<stdio.h>
#include<conio.h>
main()
{
	 int i,n,sum=0;
	 float avg;
	 
	 
	 
	 printf("enter n");
	 scanf("%d",&n);
	 
	 
	 for(i=1;i<=n;i++)
	 
	 {
	 	printf("\n %d",i);
	 	
	 	sum = sum+i;
	 }
	 
	 printf("\n sum %d",sum);
	 avg= (float)(sum/n);
	 printf("\n your average = %f",avg);
}
