#include<stdio.h>
int main()
{
	int n;
	
	printf("enter num");
	scanf("%d",&n);
	
	if(n%400 == 0)
	printf("%d is a leap year",n);
	
	else if(n%4==0  && n%100 != 0)
	printf(" %d leap year",n);
	else
	printf(" %d not leap",n);
	
	return 0;
}
