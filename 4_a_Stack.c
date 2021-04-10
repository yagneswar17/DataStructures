/* Implementation of Stack. */

#include<stdio.h>

void push(int A[100],int i)
{
	printf("\n Enter data : ");
	scanf("%d",&A[i]);
}

void pop(int A[100],int i)
{
	printf("\n Element %d popped!!! \n",A[i]);
}

void Display(int A[100],int n)
{
	int i;
	printf("\n Stack contains : \n");
	for(i=n;i>=0;i--)
		printf(" %d \n",A[i]);
}
int main()
{
	int arr[100],i,opt;
	i=-1;
	do
	{
		printf("\n Choose any option:- ");
		printf("\n 1. Push ");
		printf("\n 2. Pop ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("\n Enter your option : ");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				i++;
				push(arr,i);
				break;
			case 2:
				if(i==-1)
					printf("\n Stack is Empty!!! \n");
				else
				{
					pop(arr,i);
					i--;
				}
				break;
			case 3:
				if(i==-1)
					printf("\n Stack is Empty!!! \n");
				else
				{
					Display(arr,i);
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
