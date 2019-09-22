#include<stdio.h>
#include<conio.h>



	

int main(void)
{
	int n,res,i,ff;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			ff=1;
		}
	}
	
	if(ff==1)
	{
		printf("the number %d is  prime",n);
	}
	else
	{
		printf("tne number %d is  not prime");
	}
	return 0;
}
