#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
ifstream f;
try
{
	f.open("D:\\notes.txt");
	char c;
	if(!f.is_open())
		throw("Unable to open the file");
	while(!f.eof())
		{
		c=f.get();
		cout.put(c);
		}
}
catch(char* se)
	{
	cout<<"Error: "<<se;
	}
f.close();
}

