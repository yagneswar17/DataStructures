#include<stdio.h>

void QS(int low,int high,int A[100],int Pivot,int N)
{
	int i,j,temp;
	i=low;
	j=high;
	lb:
	while(A[i]<=A[Pivot])
	{
		i++;
	}
	while(A[j]>A[Pivot])
	{
		j--;
	}
	if(i<j)
	{
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
		goto lb;
	}
	else if(j<i)
	{
		temp=A[Pivot];
		A[Pivot]=A[j];
		A[j]=temp;
		QS(0,j-1,A,0,N);
		QS(j+1,N-1,A,j+1,N);
	}
	printf("\n Sorted Array Elements : ");
	for(i=0;i<N;i++)
		printf("%d ",A[i]);
}

int main()
{
	int i,n,arr[100];
	printf("\n Enter Array Size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	QS(0,n-1,arr,0,n);
	printf("\n Sorted Array Elements : ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
