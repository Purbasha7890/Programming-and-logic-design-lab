#include<stdio.h>
int main()
{
	double*p;
	double a;
	p=&a;
	printf("size of the processor=%d bits",sizeof(p)*8);
	return 0;
}
