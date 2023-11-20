#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=10;
	printf("the value of num is:%d \n",num);
	printf("the adress of num is:%p \n",&num);
	int*ptr;
	ptr=&num;
	printf("\n the value of num is:%d through pointer",*ptr);
	printf("\n the adress of num is:%p through pointer",ptr);
	
	int *q;
	q=(int *)malloc(sizeof(int));
	*q=50;
	printf("the value of num is:%d through pointer",*q);
	printf("the adress of num is:%p through pointer",q);

return(0);
}
