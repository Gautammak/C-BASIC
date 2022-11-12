#include<stdio.h>
#include<conio.h>
main()
{
	int n,r;
	printf(" enter n");
	scanf("%d",&n);
	while(n>0)
	{
		r = n%10;
		if(r!=0 && r!=1)
		{
			printf("num is not binary");
			break;
		}
		n=n/10;
		if(n==0)
		{
			printf("num is binary");
		}
	}
	
	 return 0;

}
