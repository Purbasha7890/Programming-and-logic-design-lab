#include<stdio.h>
int main()
{
	int f=1,i,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=6;i++)
	{
		f*=i;
	}
	printf("Factorial of %d is %d",n,f);
	return 0;
}
