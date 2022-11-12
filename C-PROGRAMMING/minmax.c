#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,max,min;
	
	printf("\n enter a =");
	scanf("%d",&a);
	printf("\n enter b = ");
	scanf("%d",&b);
	if(a>b)
	{
		max =a;
		min =b;
	}
	 else{
	 	max=b;
	 	min = a;
	 }
	 
	 printf("\n maximum = %d",max);
	 printf("\n minimum = %d",min);
	 
	 return 0;
}
