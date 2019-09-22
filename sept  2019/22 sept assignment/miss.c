#include<stdio.h>
#include<conio.h>

int getMissingNo(int a[], int n) 
{ 
    int i, total; 
    total = (n + 1) * (n + 2) / 2; 
    for (i = 0; i < n; i++) 
        total -= a[i]; 
    return total; 
} 
 
int main(void)
{
	int arr[50];
	int n,i,j,temp,total=1,miss;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
           if(arr[i]>arr[j])
           {
           	temp=arr[i];
           	arr[i]=arr[j];
           	arr[j]=temp;
		   }
		}
	}
	 miss=getMissingNO(arr,n);
        
    printf("the missing number is %d",miss);
	return 0;
}
