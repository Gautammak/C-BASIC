#include<stdio.h>
int main(){
	
	int num;
	printf("enter num :");
	scanf("%d",&num);
	
	if(num > 0)
	   printf("the number is positive");
	   else  if(num <0)
	   printf("number is negative");
	   else
	   printf("zero");
	   
	   return 0;
}
