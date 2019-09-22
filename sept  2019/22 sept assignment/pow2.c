#include<stdio.h>

int power(int a,int b)
{
	int i,pow=1;
	for(i=0;i<b;i++)
	{
		pow=pow*a;
	}
	return pow;
}



int main(void)
{
	int x,n,res;
	printf("enter the numbers");
	scanf("%d %d",&x,&n);
	res=power(x,n);
	printf("%d",res);
	return 0;
}
