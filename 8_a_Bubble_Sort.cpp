/* Bubble Sort.	*/

#include<stdio.h>

int main()
{
	int n,i,j,A[100],temp;
	printf("\n Enter Array Size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("\n Sorted Array is : ");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
		printf(" %d",A[i]);
	return 0;
}
