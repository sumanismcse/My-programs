#include<iostream>
using namespace std;
int main()
	{
	int arr[100],i,n,item;
	cout<<"enter no.of array elements"<<"\n";
	cin>>n;
	cout<<"enter array"<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(i>0)
	{
		i--;
		arr[i+1]=arr[i];
		
	}
	cout<<"Enter item to be inserted"<<endl;
	cin>>item;
	arr[0]=item;
	for(i=0;i<=n;i++)
	{
	cout<<arr[i]<<endl;
	}
	}

