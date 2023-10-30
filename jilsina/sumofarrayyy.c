#include<stdio.h>
int add(int n1,int n2);
int main()
{
	int i,sum;
	int a[5]={10,20,30,40,50};
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	printf("sum of number=%d\n",sum);
	}
	
	return(0);
}
