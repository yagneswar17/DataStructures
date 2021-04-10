/* Merge Sort. */

#include<stdio.h>

void Merge(int A[100],int low,int mid,int high)
{
	int n1,n2,i,j,k,L[100],R[100];
	n1=mid-low+1;
	n2=high-mid;
	for(i=0;i<n1;i++)
		L[i]=A[low+i];
	for(j=0;j<n2;j++)
		R[j]=A[mid+1+j];
	i=j=0;
	k=low;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		A[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		A[k]=R[j];
		j++;
		k++;
	}
}

void MergeSort(int A[100],int Low,int High)
{
	int Mid;
	if(Low<High)
	{
		Mid=(Low+High)/2;
		MergeSort(A,Low,Mid);
		MergeSort(A,Mid+1,High);
		Merge(A,Low,Mid,High);
	}
}

void Display(int A[100],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf(" %d ",A[i]);
}

int main()
{
	int n,i,arr[100];
	printf("\n Enter Size : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\n Array Before Sorting : ");
	Display(arr,n);
	MergeSort(arr,0,n-1);
	printf("\n Array After  Sorting : ");
	Display(arr,n);
	return 0;
}
