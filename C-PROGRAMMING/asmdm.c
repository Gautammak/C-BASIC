#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,choice;
	float ans;
	
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	printf("menu of operation \n");
	printf("==========\n");
	printf("\n 1.addition:");
	printf("\n 2.substaction:");
	printf("\n 3.multiplication");
	printf("\n 4.division");
	printf("\n 5.module division");
	printf("==========\n");
	printf("\n give your choice :");
	scanf("%d",&choice);
	//printf("\n give two number");
	//scanf("%d%d",&x,&y);
		

	switch(choice)
	{
		case 1:
		ans=x+y;
		break;
		case 2:
		ans=x-y;
		break;
		case 3:
		ans=x*y;
		break;
		case 4:
			
			if(y==0)
			  printf("division  not posible\n");
			else
		ans=x/y;
		break;
		case 5:
		ans=x%y;
		break;
		
		
		
		default:
			printf("wrong choice\n");
			break;
	}
	
	if((choice  != 4) && (y != 0))
   
	printf("answer = %f\n",ans);
	
	return 0;
}
