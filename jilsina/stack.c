/*stack operations*/
#include<stdio.h>
int stack[1000];
int choice,n,top,i,size,x;
void push(int x)
{
	
	 if(top>=n-1)
	 {
	   printf("\n the stack is overflow");
	 }
	else
	 {
	  top=top+1;
	  stack[top]=x;
	  printf(" the element to be added %d",stack[top]);
	 }
}
void pop()
{
  	if(top<=-1)
	{
	  printf("\n the stack is underflow");
	}
 	else
	{
	  printf("\n celeted element is:%d",stack[top]);
	  top=top-1;
	}
}
void display()
{
	if(top>=0)
		{
	  	   printf("\n the stack element is \n");
		   for(int i=top;i>=0;i--)
			{
			  printf("%d\n",stack[i]);
			}
		   printf("\n press next choice");
		}
		else
		{
			printf("\n the stack is empty:");
		}
}
int main()
{
	int x;
	top=-1;
	printf("\n enter the size of stack:");
	scanf("%d",&n);
	printf(" stack operations\n 1.push\n2.pop\n3.display\n4.exit");
	 
	do
	{
	printf("\n enter the choice");
	scanf("%d",&choice);
	switch(choice)
	  {
	     case 1:
		printf("\n enter the value to be added:");
		scanf("%d",&x);
		push(x);
		break;
	     case 2:
		pop();
		break;
	    case 3:
		display();				
		break;
	    case 4:
		printf("\n exited");
		break;
	    default:
		printf("\n enter a valid choice");
	  }
	}while(choice!=4);
      return(0);
}
		
