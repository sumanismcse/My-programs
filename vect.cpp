#include<iostream>
#include<vector>
using namespace std;
int main( )
{
	vector<int> v;
	int i;
	cout<<"vector size="<<v.size()<<endl;
	for(i=0;i<=10;i++)
	{
		v.push_back(i);
	}
	cout<<"extended vector size="<<v.size();
	cout<<"inserted elements="<<endl;
	for(i=0;i<=10;i++)
	{
	cout<<v[i];
	}
	v.erase(v.begin()+2);
	v.insert(v.begin()+2,25);
	for(i=0;i<=9;i++)
	{
		v.pop_back();
		cout<<v[i];
	}
}
