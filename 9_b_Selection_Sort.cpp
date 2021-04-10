/* Selection Sort.	*/

#include<stdio.h>

int main()
{
	int n,i,j,A[100],temp,min,pos;
	printf("\n Enter Array Size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("\n Sorted Array is : ");
	for(i=0;i<n-1;i++)
	{
		min=A[i];
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<min)
			{
				min=A[j];
				pos=j;
			}
		}
		temp=A[i];
		A[i]=A[pos];
		A[pos]=temp;
	}
	for(i=0;i<n;i++)
		printf(" %d",A[i]);
	return 0;
}
