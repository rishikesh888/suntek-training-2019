#include<stdio.h>
#include<conio.h>
# define max 10
# define min 10

int main(void)
{
	int matrix[max][min ],res[10];
	int i,j,r,c,t=0;
	printf("enter no.of rows");
	scanf("%d",&r);
	printf("enter no.of columns");
	scanf("%d",&c);
	printf("enter the elements of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",matrix[i][j]);
		}
	}
	if(r==c)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				{
					res[i]=matrix[i][j];
					t++;
				}
			}
		}
	}
	printf("the  diagonal elements of matrix");
	for(i=0;i<t;i++)
	{
		printf("%d",res[i]);
	}
	
	return 0;
}

