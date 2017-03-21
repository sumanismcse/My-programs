#include<iostream>
using namespace std;
class A
{
protected:
int n;
public:
virtual void area(int n)
{
cout<<"Enter no.of sides";
cin>>n;
} 
};
class B:public A
{
protected:
int sqr;
public:
virtual void square(int sqr)
{
sqr=n*n;
}
};
class C:public A
{
protected:
int d;
public:
virtual void prime(int d)
{
d=n%2;
}
};
class D:public B,public C
{
public:
void display()
{
cout<<sqr<<"\n"<<d<<"\n";
}
};
int main()
{
D z,*p;
p=&z;
p->area();
p->square();
p->prime();
p->display();
return 0;
}


