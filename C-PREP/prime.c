#include<stdio.h>
#include<conio.h>
main()
{
	int cnt=0,i,n;
	printf("enter n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cnt++;
			break;
		}
		
	}
	
	if(cnt = 0)
	{
	
	printf("number is prime");
}
	else{
	
	printf("number is not prime");
}
	return 0;
}
