#include<stdio.h>
void leftrotatebyone(int a[],int n);
void leftrotate(int a[],int d,int n)
{
	int i;
	for(i=0;i<d;i++)
	{
		leftrotatebyone(a,n);
	}
}
void leftrotatebyone(int a[],int n)
{
	int i,temp;
	temp=a[0];
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
		a[i]=temp;
	}
}
void printarray(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
int main()
	{
	int a[]={5,6,7,3,2,1,0};
	leftrotate(a,2,7);
	printarray(a,7);
	return 0;
	}

