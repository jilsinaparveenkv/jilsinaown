#include<stdio.h>
int main()
{	
	int n,rem=0;
	printf("Enter decimal number:");
	scanf("%d\n",&n);
	while(n>0)
	{
		rem=n%2;
		n=n/2;
		printf("%d",rem);
	}
	return(0);
}
		
