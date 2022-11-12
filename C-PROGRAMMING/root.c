#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,del;
	float root1,root2;
	 printf("\n enter a,b,c = ");
	 scanf("%d %d %d",&a,&b,&c);
	 
	 
	 del = (b*b)-(4*a*c);
	 if(del>0)
	 {
	 	root1 = ((c-1)*b) + (sqrt(del))/(2*a);
	 	root2 = ((c-1)*b) + (sqrt(del))/(2*a); 	
	 
	 
	 printf("\n roots are real and distinct");
	 printf("\n root1=%f and root2=%f",root1,root2);
}
	 
	 else if(del==0)
	 {
	 	root1 = root2 = ((c-1)*b)/(2*b);
	 	printf("\n root are real and equal");
	 	printf("\n root1=%f  and root2=%f",root1,root2);
	 }
	 
	 else if(del< 0)
	 {
	 	printf("\n root are imaginary");
	 }
}
