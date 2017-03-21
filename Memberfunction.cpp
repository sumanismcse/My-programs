#include<iostream>
using namespace std;
class employee{
public:string name;
private:int salary;
public:void Input(){
cout << "Name";
cin >>name;
cout<< "Salary";
cin >> salary;
}
public : void Output()
{

cout << "Name" << name << endl;
cout<< "Salary"<< salary;
}
};
int main() {
employee e;
e.Input();
e.Output();
return 0;
}

