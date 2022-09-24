#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream f;
f.open("D:\\notes.txt");
string s;
cout<<"\nEnter the string";
getline(cin,s);
f<<s;
f.close();
}

