#include<iostream>
using namespace std;
class area 
{
	public:
		void setlength(int l)
		{
			length=l;
		}
		void setbreath(int b)
		{
			breath=b;
		}
		protected:
			int length;
			int breath;
};
class pertilecost
{
	public:
		int getcost(int area)
		{
			return(area*1500);
		}
};
class room:public area,public pertilecost
{
	public:
		int getarea()
		{
			return(length*breath);
		}
};
int main(void)
	{
	room r;
	r.setlength(5);
	r.setbreath(7);
	int area=r.getarea();
	cout<<"area of room"<<r.getarea()<<endl;
	cout<<"cost of room:$"<<r.getcost(area)<<endl;
	return 0;
	}

