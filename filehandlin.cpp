#include<iostream>
#include<fstream>
using namespace std;
int main()
	{
	char data[100];	
	ofstream ofile;
	ofile.open("file.txt");
	cout<<"Writing to a file "<<endl;
	cout<<"Enter Name";
	cin.get(data,100);
	ofile<<data<<endl;
	cout<<"Enter age"<<endl;
	cin>>data;
	ofile.close();
	return 0;
	}

