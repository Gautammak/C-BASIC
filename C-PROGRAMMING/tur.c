#include<stdio.h>
#include<conio.h>
 main()
{
	int a,b,c,d;
	a=15;
	b=10;
	c=++a -b;
	printf("\n a=%d  b=%d c=%d ",a,b,c);
	d=b++ +a;
	printf("\n a=%d b=%d d=%d",a,b,c);
	printf("\n a/b=%d",a/b);
	printf("\n a%b=%d ",a%b);
	printf("\n a*=b=%d",a*=b);
	printf("\n %d",(c>d)? 1:0 );
	printf("\n %d",(c<d)? 1:0);
	
	return 0;
	
	
}
