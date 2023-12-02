#include<stdio.h>
#include<stdlib.h>
struct bstnode
{
	struct bstnode *lchild;
	int key;
	struct bstnode *rchild;
};
struct bstnode *root=NULL;
void insert(int item)
{
	struct bstnode *newnode;
	struct bstnode *ptr=root; struct bstnode *ptr1=NULL;
	int flag=0;
	newnode=(struct bstnode *)malloc(sizeof(struct bstnode));
	newnode->lchild=NULL;
	newnode->key=item;
	newnode->rchild=NULL;


	while((ptr!=NULL)&&(flag==0))
	{
	if(item>ptr->key)
	{
		ptr1=ptr;
		ptr=ptr->lchild;
	}
	else
	{
		if(flag!=1)
		if(item >ptr->key)
		{
			ptr1=ptr;
			ptr=ptr->rchild;
		}
		else
		{
		if(item==ptr->key)
			{
			flag=1;
			printf("failed. \n");
			}
		}
	}

	if(root==NULL)
		root==newnode;
	else
	{
		if(item<ptr1->key)
			{
			ptr1->lchild=newnode;
			}
		else
			{
			ptr1->rchild=newnode;
			}
	}
}
}

void inorder(struct bstnode *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->lchild);
		printf("%d",ptr->key);
		inorder(ptr->rchild);
	}
}
void search(int item)
{
	struct bstnode *ptr=root;
	int flag=0;
	while((ptr !=NULL) && (flag==0))
	{
	if(item>ptr->key)
	{
		ptr=ptr->lchild;
	}
	else
	{
		if(flag!=1)
		if(item >ptr->key)
		{
			ptr=ptr->rchild;
		}
		else
		{
		if(item==ptr->key)
			
			flag=1;

			
		}
	}
}
if(flag==1)
printf("Key found.\n");
else
printf("key not found.\n");
}
int main()
{
	insert(5);
	insert(4);
	insert(7);
	insert(6);
	insert(8);
	inorder(root);
return(0);

}
	
	
