#include<stdio.h>
int add(int a[50],int m)
{
int total=0;

for(int i=0;i<m;i++)
{
	total=total+a[i];
}

return(total);
}
int main()
{
	int i,sum=0,a[50],n;	
	printf("enter the value of n");
	scanf("%d",&n);
	if(n>0&&n<=50)
	{
		printf("enter the element of array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		}
	sum=(add(a,n));
	printf("sum of numbers:%d",sum);
	}
	else if(n<0)
	{
		printf("\n enter atleast one element");
	}
	else
	{
		printf("entered limit is out of limit");
	}
	return(0);
}


