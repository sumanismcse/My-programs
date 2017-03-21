#include<iostream>
using namespace std;
class function
{
public:
void area(int );
void area(double);
void area(int , int);
};
void function::area(int r)
{
cout << "Area of Circle"<<3.14*r*r;
}
void function::area(double a)
{
cout<<"Area of Square"<<a*a;
}
void function::area(int l,int b)
{
cout<<"Area of Rectangle"<<l*b;
}
int main()
{
function obj;
obj.area(10);
obj.area(5.4);
obj.area(3,4);
}

