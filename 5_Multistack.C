//Implementation of Multi Stack
#include<stdio.h>
#define MAX 100
struct s
{
 int stack[100];
 int top;
}red,green,blue;

void push(int no)
{
 int item;
  if(no==1)
  {
  	if(red.top==MAX-1)
   		printf("\n Overflow");
  	else
  	{
   		printf("\n Enter the value ");
   		scanf("%d",&item);
   		red.top++;
   		red.stack[red.top]=item;
  	}
  }
  if(no==2)
  {
  	if(green.top==MAX-1)
   		printf("\n overflow");
  	else
  	{
   		printf("\n Enter the value ");
   		scanf("%d",&item);
   		green.top++;
   		green.stack[green.top]=item;
  	}
  }
  if(no==3)
  {
  	if(blue.top==MAX-1)
   		printf("\n overflow");
  	else
  	{
   		printf("\n Enter the value ");
   		scanf("%d",&item);
   		blue.top++;
   		blue.stack[blue.top]=item;
  	}
  }
}

void pop(int no)
{
 int item;
 if(no==4)
 {
  	if(red.top==-1)
   		printf("\n Underflow");
  	else
  	{
   		item=red.stack[red.top];
   		printf("\n Deleted element is %d",item);
   		red.top--;
  	}
 }
 if(no==5)
 {
  	if(green.top==-1)
   		printf("\n Underflow");
  	else
  	{
   		item=green.stack[green.top];
   		printf("\n Deleted element is %d",item);
   		green.top--;
  	}
 }
 if(no==6)
 {
  	if(blue.top==-1)
   		printf("\n Underflow");
  	else
  	{
   		item=blue.stack[blue.top];
   		printf("\n Deleted element is %d",item);
   		blue.top--;
  	}
 }
}

void show()
{
 int i;
 if(red.top==-1)
  printf("\n red stack is empty");
 else
 {
  printf("\n Elements of Red stack are: ");
  for(i=0;i<=red.top;i++)
  {
   printf("%d\t",red.stack[i]);
  }
 }

 if(green.top==-1)
  printf("\n green stack is empty");
 else
 {
  printf("\n Elements of green stack are: ");
  for(i=0;i<=green.top;i++)
  {
   printf("%d\t",green.stack[i]);
  }
 }

 if(blue.top==-1)
  printf("\n blue stack is empty");
 else
 {
  printf("\n Elements of blue stack are: ");
  for(i=0;i<=blue.top;i++)
  {
   printf("%d\t",blue.stack[i]);
  }
 }
}
int main()
{
 int ch;
 red.top=green.top=blue.top=-1;
 int temp;
 do
 {
  printf("\n\t Main menu");
  printf("\n 1:Push red");
  printf("\n 2:Push green");
  printf("\n 3:Push blue");
  printf("\n 4:Pop red");
  printf("\n 5:Pop green");
  printf("\n 6:Pop blue");
  printf("\n 7:Display");
  printf("\n 8:Exit");
  printf("\n Enter Your Choice ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: push(1); break;
   case 2: push(2); break;
   case 3: push(3); break;
   case 4: pop(4); break;
   case 5: pop(5); break;
   case 6: pop(6); break;
   case 7: show(); break;
   case 8: temp=1; break;
   default: printf("\n Invalid choice!");
  }
 }while(ch!=8 && temp!=1);
 return 0;
}
