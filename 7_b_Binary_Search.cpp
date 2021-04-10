/* Binary Search.	*/

#include<stdio.h>

int main()
{
	int A[100],n,key,i,low,high,mid;
	printf("\n Enter Array Size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("\n Enter Key : ");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(key!=A[mid]&&low<high)
	{
		if(key<A[mid])
		{
			high=mid-1;
			mid=(low+high)/2;
		}
		else
		{
			low=mid+1;
			mid=(low+high)/2;
		}
	}
	if(low>=high&&key!=A[mid])
		printf("\n Key not found!!!");
	else
		printf("\n Key found at position : %d",mid+1);
	return 0;
}
