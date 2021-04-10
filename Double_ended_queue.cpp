#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *prev;
}*start,*newptr,*temp,*ptr;
struct node* create_new_node(int n)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	temp->prev=NULL;
	return temp;
}
void display(struct node* np)
{
	while(np!=NULL)
	{
		printf("%d<->",np->data);
		np=np->next;
	}
	printf("\n");
}
int main()
{
	int i,x,pos,count=0,opt=0,choice=0;
	start=NULL;
	printf("\n\n 1.Enqueue at Front.");
	printf("\n\n 2.Enqueue at Rear.");
	printf("\n\n 3.Dequeue at Front.");
	printf("\n\n 4.Dequeue at Rear.");
	printf("\n\n 5.Exit");
	do
	{
    printf("\n\n Enter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1: 	printf("\n\n\t\t Enqueue at Front.");
                printf("\n\n Enter data(any integer):");
                scanf("%d",&x);
                newptr=create_new_node(x);
                if(start==NULL)
                {
                	start=newptr;
                	printf("\n Data Inserted \n");
                	count++;
				}
				else
				{
                newptr->next=start;
                start->prev=newptr;
                start=newptr;
                count++;
                printf("\n Final list is: \n");
                display(start);
                }
                break;
	                
	/*case 2:     printf("\n\n\t\t Insertion in the required position of the list:");
                printf("\n\n Enter position:");
	            scanf("%d",&pos);
	            if(pos>count)
	            {
	            	printf("\n Invalid Position!!! \n");
	            	break;
				}
                printf("\n\n Enter data(any integer):");
	            scanf("%d",&x);
                newptr=create_new_node(x);
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
				printf("\n Final list is: \n");
	            display(start); 
				break;*/
						
    case 2:		printf("\n\n\t\t Enqueue at Rear:");
	            printf("\n\n Enter data(any integer):");
	            scanf("%d",&x);
	            newptr=create_new_node(x);
	            ptr=start;
	            while(ptr->next!=NULL)
	            {
	            	ptr=ptr->next;
				}
	            ptr->next=newptr;
	            newptr->prev=ptr;
	            count++;
	            printf("\n Final list: \n");
	            display(start);
			    break;
						
	case 3:     printf("\n\n\t\t Dequeue at Front: \n");
	            temp=start;
				start=start->next;
				start->prev=NULL;
				printf("\n\n\t The Dequeue Element at Front:%d",temp->data);
				free(temp);
				count--;
				printf("\n\n Final list is:");
				display(start);
				break;
				
	/*case 5:     printf("\n\n\t\t Deletion at certain position:");
	            printf("\n\n Enter required position:");
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
				free(temp);
				count--;
				printf("\n\n Final list is: ");
				display(start);	
				break;*/
				
	case 4:     printf("\n\n\t\t Dequeue at Rear: \n");
	            temp=start;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->prev->next=NULL;
				printf("\n\n\t The Dequeue Element at Rear:%d",temp->data);
				free(temp);
				count--;
				printf("\n\n Final list is: ");
				display(start);
				break;
	case 5:     break;
	default:    printf("\n Invalid Choice!!! \n");					
			}	
		}while(choice!=7);
		
}
