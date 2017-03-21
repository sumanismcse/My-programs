#include<iostream>
using namespace std;
int main()
	{
		int a[100],i,loc,n;
		cout<<"Enter position to be deleted"<<endl;
		cin>>loc;
		cout<<"Enter no. of elements of array"<<endl;
		cin>>n;
		cout<<"Enter Array"<<endl;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=loc;i<n;i++)
		{
			a[i-1]=a[i];
		}
		cout<<"New Array=\n ";
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<"\n";
	}
	return 0;
	}

