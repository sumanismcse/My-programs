#include<iostream>
using namespace std;
int main()
	{
	long int n,i,j;
	cin>>n;
	long int a[n][2];
	long int s[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<3;j++)
		{
			for(int k=j;k<3;k++)
			{
				if(a[i][j]>a[i][k])
				{
					int temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	
		s[i]=a[i][1]+a[i][2];
	
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			if(s[i]>s[j])
			{
				int tem=s[i];
				s[i]=s[j];
				s[j]=tem;
			}
		}
	}
	cout<<s[n];
	return 0;
	}
