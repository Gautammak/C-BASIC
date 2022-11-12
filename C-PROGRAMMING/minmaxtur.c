#include<stdio.h>
#include<conio.h>
 main()
{
	float a,b,c,max,min;
	printf("enter a & b &c=");
	scanf("%f %f %f",&a,&b,&c);
	
	max =(a>b)?((a>c)?a:c):((b>c)?b:c);
	min =(a<b)?((a<c)?a:c):((b<c)?b:c);
	
	
	printf("\n max=%f",max);
	printf("\n min=%f",min);
	
	return 0;
	
}
