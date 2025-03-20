#include<stdio.h>
int binarysearch(int ar[],int x,int low,int high)
{
if(high>=low)
{
	int mid=low+(high-low)/2;
	if(x==ar[mid])
	{
		return mid;
	}
	if(x>ar[mid])
	{
		return binarysearch(ar,x,mid+1,high);
	}
	else
	{
		return binarysearch(ar,x,low,mid-1);
	}
	return -1;
}
}
int main()
{
	int ar[]={3,4,5,6,7,8,9};
	int n=sizeof(ar)/sizeof(ar[0]);
	int x=4;
	int result=binarysearch(ar,x,0,n-1);
	if(result==-1)
	{
	printf("not found");
	}
	else
	{
		printf("element is found at index %d");
	}
}





