#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,opt;
	float ans;
	
	printf("\n enter the value of a and b");
	scanf("%d%d",&a,&b);
	
	printf("\n 1.addition ");
	printf("\n 2.subtraction");
	printf("\n 3.multiplication");
	printf("\n enter option value");
	scanf("%d",&opt);
	if(opt==1)
	{
		
		ans=a+b;
	}
	else if(opt==2)
	  {
	  	ans=a-b;
	  }
	  else if(opt==3)
	  {
	  	ans=a*b;
	  }
	  	else if(opt==4)
	  
	  {
	  	  ans=(float)a/b;
	  }
	  
	  else
	  {
	  	printf("\n wrong option");
	  }
	  
	  printf("\n ans =%f",ans);
}
