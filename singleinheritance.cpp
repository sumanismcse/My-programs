#include<iostream>
using namespace std;
class base
{
	int hpr;
	public:
		int hpu;
		
};
class derived:public base
{
	void dval(int value)
	{
		hpu=value;
	cout<<hpu;
}
};
int main()
	{
	derived d;
	d.hpu=10;
	cout<<d.hpu;
	return 0;
	}

