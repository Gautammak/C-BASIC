#include<stdio.h>
int main(){
	
	int i,num1,num2,sum =0;
	
	printf("enter num1");
	scanf("%d",&num1);
	
	printf("enter num2");
	scanf("%d",&num2);
	
	for(i=num1;i<=num2; i++)
	 sum = sum+i;
	 
	 printf("sum is %d",sum);
	 
	 
	 return 0;
	
}
