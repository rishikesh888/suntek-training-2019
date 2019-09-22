#include<stdio.h>
#include<stdlib.h>


int fact(int n)
{
	int i,re=1;
	for(i=1;i<=n;i++)
	{
		re*=i;
		
	}
	return re;
}
int main(void)
{
	int n,res;
	printf("enter the number");
	scanf("%d",&n);
	res=fact(n);
	printf("the factorial of %d is %d",n,res);
	return 0;
}
