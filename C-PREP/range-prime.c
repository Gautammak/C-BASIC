#include<stdio.h>
#include<conio.h>
main()
{
	int j,i,n1,n2;
	printf("enter n");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		for(j=2;j<=i;j++)
			{
		if(i%j==0)
			break;
		}
		
		if(i==j)
		printf("%d ",j);
		
}
  return 0;
	}
	
