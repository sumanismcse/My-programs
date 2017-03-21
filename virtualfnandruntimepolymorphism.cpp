#include<iostream>
using namespace std;

class Base
{
public:
virtual void display( )
{
cout<<"Base Class";
}
};
class Der:public Base
{
public:
virtual void display( )
{
cout<<"Derived Class";
}
};
int main( )
{
Base b;
Der d;
Base *ptr;
ptr=&b;
ptr->display( );
ptr=&d;
ptr->display( );
}

