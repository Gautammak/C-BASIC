#include<stdio.h>
#include<conio.h>
 main()
{
	int i,j,k,n;
	printf("enter n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=i;k<n;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
			
		}
		printf("\n");
	}
      return 0;
}
