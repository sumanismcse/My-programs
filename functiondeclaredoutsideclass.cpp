#include<iostream>
using namespace std;
class employee {
public:string name;
public:int salary;
public:void Input();
public:void Output();
};
void employee::Input(){
 cout << "Name";
cin >> name;
cout << "Salary";
cin >> salary;
}
void employee::Output() {
cout << "Name"<< name<< endl;
cout<<"Salary"<<salary;
}
int main()
{
employee e;
e.Input();
e.Output();
return 0;
};

