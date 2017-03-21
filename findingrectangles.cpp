#include<iostream>
using namespace std;
int main()
	{
	int q;
	cin>>q;
	for(int i=1;i<=q;i++)
	{
	int n;
	cin>>n; 
	int a[n][1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(((a[i][0]-a[i+1][0])==(a[i+b][0]-a[i+b+1][0]) && (a[i][1]-a[i+1][1])==(a[i+b][1]-a[i+b+1][1])) && (a[i][0]-a[i+1][0])==(a[i+b][0]-a[i+b+1][0] && (a[i][1]-a[i+1][1])==(a[i+b][1]-a[i+b+2][1])))
			{
				j=1;
			}
			else
				j=0;
		}
	}
}
	
	return 0;
	}

