#include<stdio.h>
main()
{
	int a=200;
	int b=100;
	a^=b^=a^=b;
	printf("%d %d",a,b);
}
