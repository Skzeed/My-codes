#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
int a=10, b=20;
cout<<"\nValues before swapping a="<<a<<" b="<<b;
swap(a,b);
cout<<"\nValues after swapping a="<<a<<" b="<<b;
}
void swap(int& x, int& y)
{
int t;
t=x;
x=y;
y=t;
}

