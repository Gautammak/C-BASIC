#include<stdio.h>
#include<conio.h>
main()
{
	int d,months,days;
	printf("enter  number of days");
	scanf("%d",&d);
	
	months = d/30;
	days = d%30;
	
	printf("\n  months is = %d",months);
	scanf("\n days is = %d", days);
	
	return 0;
}
