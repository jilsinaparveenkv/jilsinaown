/*queue*/
#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,MAX;
int queue[100];
void enqueue()
{	
	int item;
	printf("\n enter the element\n");
	scanf("\n%d",&item);
	if(rear==MAX-1)
	{
		printf("\n overflow\n");
		return;
	}
	if(front==-1&&rear==-1)
	{
	  front=0;
	  rear=0;
	}
	else
	{
	  rear=rear+1;
	}
	queue[rear]=item;
	printf("\n value inserted is %d",queue[rear]);
}
void dequeue()
{
	int item;
	if(front==-1)
	{
	  printf("\n underflow\n");
	  return;
	}
	else
	{
	  item=queue[front];
	if(front==rear)
		{
		front=-1;
		rear=-1;
		}
	else
		{
		front=front+1;
		}
		printf("\ndeleted element in queue ");
	}
}
void display()
{
int i;
if(rear==-1)
	{
	  printf("\n empty queue\n");
	}
	else
	{
	  printf("\n element in the queue are\n");
		for(i=front;i<=rear;i++)
		{
		  printf("\n%d",queue[i]);
		}
	}
}
int main()
{
int choice;
printf("\n enter the size of queue:");
scanf("%d",&MAX);
printf("queue operations using array");
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
while(choice!=4)
  {
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		  enqueue();
		  break;
		case 2:
		  dequeue();
		  break;
		case 3:
		  display();
		  break;
		case 4:
		  printf("\nexisted");
		  break;
		defualt:
		  printf("\nenter valid choice\n");
	}
  }
return(0);
}


	
	

	
