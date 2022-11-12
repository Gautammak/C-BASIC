#include<stdio.h>
#include<conio.h>
main()
{
	float marks;
	printf("enter your marks");
	scanf("%f",&marks);
	if(marks>=80 && marks <=100)
	{
		printf("grade = distintict ");
		
	}
	
	else if(marks >=60 && marks <=79)
	
	{
		printf(" grade = first class");
	}
	
	else if(marks >= 35 && marks <= 59)
	{
		printf("\n grade = second class");
	}
	
	else if (marks >=0  && marks<=34)
	{
		printf("\n grade= fail");
	}
	
	else {
		printf("\n invalid marks");
	}
	
	return 0;
}
