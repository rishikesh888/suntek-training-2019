#include<stdio.h>

int fibnocci(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fibnocci(n-1)+fibnocci(n-2);
	
}



int main(void)
{
	int n,res;
	printf("entewr the number");
	scanf("%d",&n);
	res=fibnocci(n);
	printf("%d",res);
	return 0;
}
