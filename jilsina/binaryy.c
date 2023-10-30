 #include<stdio.h>
#include<math.h>
int main()
{
	int n=10,rem=0,res=0,i=0;
	
	while(n==0)
	{

		rem=n%2;
		res=res+rem*pow(10,i);
		i++;
		if(n=0)
		{
			break;
		}

	}
printf("binary of n is %d",res);
}
