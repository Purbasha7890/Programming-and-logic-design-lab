#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter a number");
	scanf("%d",&n);
	if(n<0&&n==0)
	{
		count =1;
	}
	else
	{
		while(n>0)
		{
			n=n/10;
			count++;
		}
	}
	printf("number of digits : %d \n",count);
	return 0;
}
