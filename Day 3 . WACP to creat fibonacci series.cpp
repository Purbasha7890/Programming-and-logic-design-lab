#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,s;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		s=a+b;
		a=b;
		b=s;
	}
	return 0;
}
