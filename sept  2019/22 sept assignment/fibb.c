#include<stdio.h>
#include<stdlib.h>


void printfib(int n)
{
   static	int n1=0,n2=1,n3;
	if(n>0)
	{
	
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("%d",n3);
	printfib(n-1);
   }
	
}
int main(void)
{
	int n;
	printf("enter thr number");
	scanf("%d",&n);
	printf("%d %d",0,1);
	printfib(n-2);
	return 0;
	
}

