#include<stdio.h>
int main(){
	
	
	int x,y,p=1,i;
	printf("enter x and y");
	scanf("%d %d ",&x ,&y);
	
	for(i=1;i<=y;i++)
	
	p=p*x;
	
	printf("result is %d",p);
	
	return 0;
}
