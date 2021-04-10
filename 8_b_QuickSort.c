/* Quick Sort */

#include<stdio.h>

int Divide(int A[100],int low,int high)
{
	int pivot,i,j,temp;
	pivot=A[high];
	i=low;
	for(j=low;j<high;j++)
	{
		if(A[j]<pivot)
		{
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
			i++;
		}
	}
	temp=A[i];
	A[i]=A[high];
	A[high]=temp;
	return i;
}

void QuickSort(int A[100],int Low,int High)
{
	int P;
	if(Low<High)
	{
		P=Divide(A,Low,High);
		QuickSort(A,Low,P-1);
		QuickSort(A,P+1,High);
	}
}

void Display(int A[100],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("\t %d",A[i]);
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
	QuickSort(arr,0,n-1);
	printf("\n Array After Sorting : ");
	Display(arr,n);
	return 0;
}
