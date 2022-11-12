#include<stdio.h>
#include<conio.h>
main()
{
	int n,c,r,arm=0;
	printf("\n enter n");
	scanf("%d",&n);
	
	c=n;
	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		arm=arm+(r*r*r);
		
	}
	
	if(c==arm)
	{
		printf("\n no is arm");
	}
	
	else
	{
		printf("\n no is not arm");
	}
	
	return 0;
}
