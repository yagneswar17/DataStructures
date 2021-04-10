/* Implement Double ended queue using a doubly linked list and an array. */

#include<stdio.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*start,*newptr,*temp,*ptr;

struct node* Create_New_Node(int n)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}

void Display(struct node* np)
{
	while(np!=NULL)
	{
		printf("%d \t",np->data);
		np=np->next;
	}
	printf("\n");
}

int main()
{
	int i,x,opt,cho=0;
	start=NULL;
	do
	{
		printf("\n 1. Insertion ");
		printf("\n 2. Deletion ");
		printf("\n 3. Display ");
		printf("\n 4. Exit ");
		printf("\n Enter Your Choice: ");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:
				printf("\n Enter data : ");
				scanf("%d",&x);
				printf("\n 1. Insertion at Front");
				printf("\n 2. Insertion at Rear");
				printf("\n Enter Your Choice : ");
				scanf("%d",&opt);
				newptr=Create_New_Node(x);
				if(start==NULL)
				{
					start=newptr;
					printf("\n Data Inserted \n");
				}
				else if(opt==1)
				{
					newptr->next=start;
					start->prev=newptr;
					start=newptr;
					printf("\n Data Inserted \n");
				}
				else if(opt==2)
				{
					ptr=start;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=newptr;
					newptr->prev=ptr;
					printf("\n Data Inserted \n");
				}
				else
				{
					printf("\n Invalid Choice!!! \n");
				}
				break;
			case 2:
				if(start==NULL)
				{
					printf("\n DEQUEUE is Empty!!! \n");
					break;
				}
				printf("\n 1. Deletion from Front");
				printf("\n 2. Deletion from Rear");
				printf("\n Enter Your Choice : ");
				scanf("%d",&opt);
				if(start->next==NULL)
				{
					temp=start;
					start=NULL;
					printf("\n %d Data Deleted \n",temp->data);
					free(temp);
				}
				else if(opt==1)
				{
					temp=start;
					start=start->next;
					start->prev=NULL;
					printf("\n %d Data Deleted \n",temp->data);
					free (temp);
				}
				else if(opt==2)
				{
					temp=start;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					temp->prev->next=NULL;
					printf("\n %d Data Deleted \n",temp->data);
					free (temp);
				}
				else
				{
					printf("\n Invalid Choice!!! \n");
				}
				break;
			case 3:
				if(start==NULL)
					printf("\n DEQUEUE is Empty!!! \n");
				else
				{
					printf("\n DEQUEUE :  ");
					Display(start);
				}
				break;
			case 4:
				break;
			default:
				printf("\n Invalid Choice!!! \n");
		}
	}while(cho!=4);
	return 0;
}
