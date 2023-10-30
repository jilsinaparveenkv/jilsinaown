#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
	sum=sum+i;
	}
	printf("sum is %d/n",sum);
	return 0;
}

