/* Insertion Sort.	*/

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
		temp=A[i+1];
		for(j=i;j>=0;j--)
		{
			if(temp<A[j])
			{
				A[j+1]=A[j];
			}
			else
				break;
		}
		A[j+1]=temp;
	}
	for(i=0;i<n;i++)
		printf(" %d",A[i]);
	return 0;
}
