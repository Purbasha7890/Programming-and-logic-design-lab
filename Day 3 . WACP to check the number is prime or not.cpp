#include<stdio.h>
int main()
{
	int n,i,prime;
	printf("enter a number");
	scanf("%d",&n);
	if(n<=1)
	{
		prime=0;
	}
	else
	{
		for(i=0;i<=n/2;i++)
		{if(n%2==0)
			{
			prime=0;
			break;
			}
		}
	}
	if(prime)
	{
		printf("prime number");
	}
	else{
		printf("not prime number");
	}
	return 0;
}
