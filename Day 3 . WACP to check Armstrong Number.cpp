#include<stdio.h>
int main()
{
	int n,s=0,r,p;
	printf("enter a number");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		r=n%10;
		s=s+(r*r*r);
		n=n/10;
	}
	if(p==s)
	{
	printf("Armstrong number");
	}
	else
	{
		printf("not Armstrong number");
	}
	return 0;
}
