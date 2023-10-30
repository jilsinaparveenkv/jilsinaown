/*searching of an array*/
#include<stdio.h>
int main()
{
	int a[5],i,key=0,flag=0;
	printf("enter the element of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value you want search:");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
	if (a[i]==key)
		{
			printf("element is found in %d location",i);
			flag=1;		
		}
	}
	
	if(flag==0)
		{
		printf("%d element is not found ",key);
		
		}
	
return(0);
}
