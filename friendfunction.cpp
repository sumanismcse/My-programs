#include<iostream>
using namespace std;
class rectangle
{ int height,width;
friend void area(rectangle );
void area(rectangle r)
{
 int a;
a=r.height*r.width;
cout<<"Area"<<a;
}
};
int main() {
rectangle r;
r.area(10,20);
area(r);
}
