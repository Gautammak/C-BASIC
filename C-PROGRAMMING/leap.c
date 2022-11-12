#include<stdio.h>
#include<conio.h>
main()
{
	int year;
	
	printf(" year enter");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("year is leap ");
	}
		else 
		{
			
			printf("year is not leap ");
		}
	
	
	return 0;
}
