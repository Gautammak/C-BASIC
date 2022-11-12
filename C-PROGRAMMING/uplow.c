#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf(" enter any character value");
	ch = getchar();
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
	}
	
	else if(ch>='a' && ch<='z')
	{
		ch=ch-32;
	}
	
	else
	{
		printf("wrong input");
	
	}
	
	printf("\n the given input character is:");
	
	putchar(ch);
	
	return 0;
	
	
}
