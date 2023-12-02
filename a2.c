void delete(int item)
{
	struct bstnode *ptr=root;struct bstnode *ptr1;
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
			
			flag=1;
			
		}
	}
}
//case 1:no child nodes
if((ptr->lchild==NULL)&&(ptr->rchild==NULL))
{
if(ptr==ptr1->lchild)ptr1->lchild=NULL;
else
ptr1->rchild=NULL;
free(ptr);
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
