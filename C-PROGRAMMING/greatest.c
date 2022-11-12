#include<stdio.h>
int main(){
	
	int num1,num2;
	printf("enter num1");
	scanf("%d",&num1);
	
	printf("enter num2");
	scanf("%d",&num2);
	
	if(num1==num2)
	printf("both are equal");
	
	else if(num1>num2)
	printf(" %d num1 is greatest ",num1);
	else
	printf("num2 is greatest",num2);
	
	return 0;
	
}
