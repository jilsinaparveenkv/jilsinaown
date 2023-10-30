/*merge and sort array*/
#include<stdio.h>
void mergearray(int a[],int s1,int b[],int s2,int merge[])
{
	int i=0;
	for(i=0;i<s1;i++)
	    merge[i]=a[i];
	for(i=0;i<s2;i++)
	    merge[i+s1]=b[i];
}
void sortarray(int merge[],int s)
   {
	int temp,i,j;
	  for(i=0;i<s;i++)
	   {
	     for(j=i+1;j<s;j++)
		{
		   if(merge[i]>merge[j])
		     {
			temp=merge[i];
			merge[i]=merge[j];
			merge[j]=temp;
		     }
		}
	   }
    }
int main()
{
	int s1,s2,s,i;
	printf("enter size of the first array");
	scanf("%d",&s1);
	int a[s1];

	printf("enter the element of the first array");
	for( i=0;i<s1;i++)
	   {
	    scanf("%d",&a[i]);
	   }
	printf("enter the size of the second array:");
	scanf("%d",&s2);
	int b[s2];
	printf("enter the elements of the second array:");
	
	for( i=0;i<s2;i++)
		{
	  		scanf("%d",&b[i]);
		}
	
	int merge[s1+s2];
	s=s1+s2;
	mergearray(a,s1,b,s2,merge);
	sortarray(merge,s);
	printf("merged and sorted array:");
	for(i=0;i<s;i++)
		{
			printf("%d\n",merge[i]);
		}
	
return(0);
}
	




	
