#include<stdio.h>
#include<conio.h>


int expo(int x,int y,int z)
{
	if(x==0)
	  return 0;
	if(y==0)
	  return 1;
	  
	long n;
	if(y%2==0){
		
	n=expo(x,y/2,z);
	n=(n*n)%z;
    }
    else
    {
    n=x%z;
	n=(n*expo(x,y-1,z)%z)%z;	
	}
	return (int)((n+z)%z);
}
int main(void)
{
	int a,b,c,res;
	printf("enter the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	res=expo(a,b,c);
	printf("%d",res);
	return 0;
	
}
