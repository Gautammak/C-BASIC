#include<stdio.h>
int main(){
	
	int i, sum=0,start , end;
	scanf("%d",&start);
	scanf("%d",&end);
	
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	
	printf("%d",sum);
	
	return 0;
	
}
