#include<stdio.h>

int prime(int n,int i)
{
	 if(i == 1)
          return(1);
          else
          {
          if(n % i == 0)
          return(0);
          prime(n, i-1);
          }
}

int main(void)
{
	int n,res;
	printf("enter the number");
	scanf("%d",&n);
	res=prime(n,n/2);
	if(res==1)
	{
		printf("the number is prime");
	}
	else
	{
		printf("the number is not prime");
	}
	return 0;
}

