#include<stdio.h>
int main(){
	
	int num1,num2,num3;
	printf("enter 3 number");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>=num2 && num1>=num3)
	 printf("%d is the gretest",num1);
	 
	 else if(num2>=num1 && num2>=num3)
	 printf("%d  is great",num2);
	 
	 
	 else if(num3>=num1 && num3>=num2)
	 printf("%d is the gretest", num3);
	 
	 return 0;
}
