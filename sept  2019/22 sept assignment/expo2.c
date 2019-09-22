#include<stdio.h>

int pow(int x, int y ,int z)
{
	int res=1;
	x=x%z;
	while(y>0)
	{
		if(y&1)
		{
		res=(res*x)%z;	
		}
		y=y>>1;
		x=(x*x)%z;
	}
	return res;
}
int main(void)
{
	int x,y,z,res;
	printf("enter the numbers");
	scanf("%d %d %d",&x,&y,&z);
	res=pow(x,y,z);
	printf("%d",res);
	return 0;
}
