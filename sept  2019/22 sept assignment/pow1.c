#include<stdio.h>
#include<stdlib.h>

int power(int x,int y)
{
	if(y==0)
	  return 1;
	else if(y%2==0)
	    return(power(x,y/2)*power(x,y/2));
	else
	    return (x*power(x,y/2)*power(x,y/2));  
}


int main(void)
{
	int x,res,n;
	
	printf("enter the numbers");
	scanf("%d %d",&x,&n);
	res=power(x,n);
	printf("%d",res);
	return 0;
}
