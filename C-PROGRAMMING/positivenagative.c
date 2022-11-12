#include<stdio.h>
#include<conio.h>
main(){
	
	float no;
	
	printf("\n enter number");
	scanf("%f",&no);
	
	if(no>0)
	{
		printf("\n number is positive");
	}
	
	else if(no<0)
	{
		printf("\n number is negative");
	}
	
	else if(no==0)
	{
		printf(" \n number is zero");
		
	}
	else
	{
	
	printf("\n wrong input");
}  

   return 0;
}


