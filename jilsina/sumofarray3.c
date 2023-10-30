#include<stdio.h>
int add(int n1,int n2);
int main()
{
	int i,sum=0,a[50],n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n<=50)
	{
		printf("enter the element of array");
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	}
	else if(n<0)
	{
		printf("\n enter atleat one element");
		}
	
	}
	else
		{
			printf("enter limit is out of limit");
		}
	return(0);
}
