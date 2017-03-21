#include<iostream>
#include<fstream>
using namespace std;
int main()
	{
		char data;
	ifstream ifile;
	ifile.open("file.txt");
	while(ifile>>data)
	{
		cout<<data;
	}
	return 0;
	}

