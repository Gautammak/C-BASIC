#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,c,max;
	printf("enter a =\n enter=b \n enter c=");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		{
		
		max =a;
	}
	
	else
	{
		max=c;
	}
	
}



else
{
	
	if(b>c)
	{
		max =b;
	}
	
	else
	{
		max=c;
	}
}

printf(" \n max=%f",max);

}


