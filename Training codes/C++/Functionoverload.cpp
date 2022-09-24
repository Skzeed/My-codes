#include<iostream>
using namespace std;
void line();
void line(int);
void line(double);
int main()
{
line();
line(20.0);
line(10);
}
void line()
{
int i;
cout<<"\n";
for(i=0;i<50;i++)
	cout<<"-";
}
void line(int n)
{
int i;
cout<<"\n One parameter";
for(i=0;i<n;i++)
	cout<<"-";
}
void line(double n)
{
int x=n;
cout<<"\nDoubel type parameter";
line(x);
}

