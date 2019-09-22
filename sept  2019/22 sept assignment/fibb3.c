#include<stdio.h>
#include<stdlib.h>
int F[51];
int fib(int n)
{
	if(n<=1)
	{
		return n;
	}
	if(F[n]!=-1)
	{
		return F[n];
	}
	return fib(n-1)+fib(n-2);
	return F[n];
}



int  main(void)
{
	int n,res,i;
	printf("enter the number");
	scanf("%d",n);
	for(i-0;i<51;i++)
	{
		F[i]=-1;
	}
	res=fib(n-1)+fib(n-2);
	printf("&d",res);
}
