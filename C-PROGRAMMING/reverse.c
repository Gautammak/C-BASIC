#include<stdio.h>
#include<conio.h>
main()
{
	int n,r,sum=0;
	printf(" enter n=");
	scanf("%d",&n);
	
     while(n>0)
     {
     	r=n%10;
     	n=n/10;
     	sum=sum*10+r;
	 }
	 printf("\n revese no = %d",sum);
	 
	 return 0;
}
