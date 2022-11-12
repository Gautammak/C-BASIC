#include<stdio.h>
int main()
{
	 int n,c,s=0,r,arm;
	 
	 printf(" enter any number");
	 scanf("%d",&n);
	 
	 c=n;
	 
	 while(n>0)
	 {
	 	
	 	r = n%10;
	 	arm = r*r*r+arm;
	 	n =n/10;
	 	
	 }
	 
	 if(c==arm)
	 
	 printf("number is armstrong");
	 
	 else
	 
	 printf(" not");
	 
	 
	 return 0;
}

