/* Implementation of Queue. */

#include<stdio.h>

void Insert(int A[100],int i)
{
	printf("\n Enter data : ");
	scanf("%d",&A[i]);
}

void Delete(int A[100],int n)
{
	int i;
	printf("\n Element %d Deleted!!! \n",A[0]);
	for(i=0;i<n;i++)
	{
		A[i]=A[i+1];
	}
}

void Display(int A[100],int n)
{
	int i;
	printf("\n Queue contains : ");
	for(i=0;i<n;i++)
		printf(" %d ",A[i]);
}
int main()
{
	int arr[100],i,opt;
	i=-1;
	do
	{
		printf("\n Choose any option:- ");
		printf("\n 1. Insert ");
		printf("\n 2. Delete ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("\n Enter your option : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				i++;
				Insert(arr,i);
				break;
			case 2:
				if(i==-1)
					printf("\n Queue is Empty!!! \n");
				else
				{
					Delete(arr,i);
					i--;
				}
				break;
			case 3:
				if(i==-1)
					printf("\n Queue is Empty!!! \n");
				else
				{
					Display(arr,i+1);
				}
				break;
			case 4:
				break;
			default :
				printf("\n Invalid Choice!!! \n");
		}
	}while(opt!=4);
	return 0;
}
