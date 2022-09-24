#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
ifstream f;
	f.open("D:\\notes.txt");
	string s;
	while(!f.eof())
		{
		getline(f,s);
		cout<<s<<endl<<"line";
		}

f.close();
}

