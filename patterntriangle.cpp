#include<iostream>
using namespace std;
int main()
	{
	int row,n,i,temp;
	cout<<"Enter no. of rows for the pattern"<<endl;
	cin>>n;
	temp=n;
	for(row=1;row<=n;row++)
	{
		for(i=1;i<temp;i++)
		{
			cout<<" ";
		}
		temp--;
		for(i=1;i<=2*row-1;i++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
	}

