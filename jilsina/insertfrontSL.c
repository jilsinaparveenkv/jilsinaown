#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header = NULL;
void insert_at_front(int item)
{
	//for the first node
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(header==NULL)
	{
		newnode->data=item;
		newnode->link=NULL;
	}
	else
	{
		newnode->data = item;
		newnode->link = header;
	}
	header=newnode;
}
void insert_at_end(int item)
{
	//for the first node
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	struct node *ptr;
	ptr=header;
	while(ptr->link!=NULL)
	{
	  ptr=ptr->link;
	}
		newnode->data=item;
		newnode->link=NULL;
		ptr->link=newnode;
		
		
}
void insert_at_anypos(int item,int key)
{
	//for the first node
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	struct node*ptr;
	ptr=header;
	while(ptr->data!=key && ptr->link!=NULL)
	{
	  ptr==ptr->link;
	}
	if(ptr->link==NULL)
	{
	  printf("key not found");
	}
	else
	{
	
		newnode->data=item;
		newnode->link=ptr->link;
		ptr->link=newnode;
	}
}

void traverse()
{
	struct node*ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr =ptr->link;
	}
}
int main()
{
	insert_at_front(10);
	insert_at_front(25);
	insert_at_end(27);
	insert_at_end(29);
	insert_at_anypos(28,27);
	traverse();

return(0);
}
