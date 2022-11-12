#include<stdio.h>
int main(){
	
	int n,f=1,i;
	
	printf(" enter n");
	scanf("%d",&n);
	
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			++f;
		}
	}
		
		printf("count %d \n ",f);
		
		return 0;
		
	}
	

