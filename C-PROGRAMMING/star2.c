#include<stdio.h>
#include<conio.h>
main()
{
	
	int n,i,j;
	
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
