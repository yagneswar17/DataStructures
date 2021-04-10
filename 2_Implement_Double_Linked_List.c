/* Implement Double Linked List	*/

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
	int i,x,pos,count=0,opt=0,cho=0;
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
				printf("\n 1. Insertion at Beginning");
				printf("\n 2. Insertion at Middle/Position");
				printf("\n 3. Insertion at Ending");
				printf("\n Enter Your Choice : ");
				scanf("%d",&opt);
				printf("\n Enter data : ");
				scanf("%d",&x);
				newptr=Create_New_Node(x);
				if(start==NULL)
				{
					start=newptr;
					printf("\n Data Inserted \n");
					count++;
				}
				else if(opt==1)
				{
					newptr->next=start;
					start->prev=newptr;
					start=newptr;
					count++;
					printf("\n Data Inserted \n");
				}
				else if(opt==2)
				{
					printf("\n Enter Position : ");
					scanf("%d",&pos);
					if(pos>count)
					{
						printf("\n Invalid Position!!! \n");
						break;
					}
					ptr=start;
					for(i=1;i<pos-1;i++)
					{
						ptr=ptr->next;
					}
					newptr->prev=ptr;
					newptr->next=ptr->next;
					ptr->next->prev=newptr;
					ptr->next=newptr;
					count++;
					printf("\n Data Inserted \n");
				}
				else if(opt==3)
				{
					ptr=start;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=newptr;
					newptr->prev=ptr;
					count++;
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
					printf("\n List is Empty!!! \n");
					break;
				}
				printf("\n 1. Deletion from Beginning");
				printf("\n 2. Deletion from Middle/Position");
				printf("\n 3. Deletion from Ending");
				printf("\n Enter Your Choice : ");
				scanf("%d",&opt);
				if(start->next==NULL)
				{
					temp=start;
					start=NULL;
					printf("\n %d Data Deleted \n",temp->data);
					free(temp);
					count--;
				}
				else if(opt==1)
				{
					temp=start;
					start=start->next;
					start->prev=NULL;
					printf("\n %d Data Deleted \n",temp->data);
					free (temp);
					count--;
				}
				else if(opt==2)
				{
					printf("\n Enter Position : ");
					scanf("%d",&pos);
					if(pos>count)
					{
						printf("\n Invalid Position!!! \n");
						break;
					}
					temp=start;
					for(i=0;i<pos-1;i++)
					{
						temp=temp->next;
					}
					temp->next->prev=temp->prev;
					temp->prev->next=temp->next;
					printf("\n %d Data Deleted \n",temp->data);
					free (temp);
					count--;
				}
				else if(opt==3)
				{
					temp=start;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					temp->prev->next=NULL;
					printf("\n %d Data Deleted \n",temp->data);
					free (temp);
					count--;
				}
				else
				{
					printf("\n Invalid Choice!!! \n");
				}
				break;
			case 3:
				if(start==NULL)
					printf("\n List is Empty!!! \n");
				else
				{
					printf("\n List :  ");
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
