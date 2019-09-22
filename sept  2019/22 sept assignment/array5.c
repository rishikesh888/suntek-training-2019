#include<stdio.h>

  

int getMissingNo(int a[], int n) 
{ 
    int i, total; 
    total = (n + 1) * (n + 2) / 2; 
    for (i = 0; i < n; i++) 
        total -= a[i]; 
    return total; 
} 
  int findRepeatingElement(int arr[], int low, int high) 
{ 
     
    if (low > high) 
        return -1; 
  
    int mid = (low + high) / 2; 
  
    
    if (arr[mid] != mid + 1) 
    { 
        if (mid > 0 && arr[mid]==arr[mid-1]) 
            return mid; 
  
       
        return  findRepeatingElement(arr, low, mid-1); 
    } 
  

    return findRepeatingElement(arr, mid+1, high); 
} 

int main()
{
	int arr[100];
	int i,j,miss,n,temp ,repeat;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
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
	miss=findRepeatingElement(arr,0,n-1);
	printf("%d",miss);
	repeat=findRepeatingElement(arr,0,n);
	printf("%d",repeat);
	
	return 0;
}
