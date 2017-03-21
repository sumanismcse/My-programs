#include<iostream>
using namespace std;
class shape
{
	public:
		void setwidth(int w)
		{
			width=w;
		}
		void setheight(int h)
		{
			height=h;
		}
		protected:
			int width;
			int height;
};
class rectangle:public shape
{
	public:
		int getarea()
		{
			return(width*height);
		}
		
};
class triangle:public shape
{
	public:
		int getarea()
		{
			return(width*height/2);
		}
};
int main(void)
{
	rectangle r;
	r.setwidth(6);
	r.setheight(8);
	cout<<"area of rectangle="<<r.getarea()<<endl;
	triangle t;
	t.setwidth(5);
	t.setheight(6);
	cout<<"area of triangle="<<t.getarea()<<endl;
return 0;	
}
