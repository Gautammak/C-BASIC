#include<stdio.h>
 main()
{
	 int a,b,L;
	printf("enter num a nad b");
	scanf("%d %d",&a,&b);
	for(L=a>b?a:b;L<=a*b;L++)
	
	if(L%a==0 && L%b==0)
	 break;
	
	
	
	printf("lcm is %d",L);
	
	return 0;
	
}
