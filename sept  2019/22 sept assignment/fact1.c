#include<stdio.h>


int fact(int n)
{
	if(n==0)
	{
		return 1;
		
	}
	return n*fact(n-1);
}
int main(void)
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("factorial of %d is %d",n,fact(n));
	return 0;
}
