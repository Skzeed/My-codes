#include<iostream>
using namespace std;
class simpleinterest{
private:
	float p,n,r;
public:
	float si;
void input()
	{
	cout<<"\nPrincipal amount: ";
	cin>>p;
	cout<<"\nInterest: ";
	cin>>r;
	cout<<"\nNo.of years: ";
	cin>>n;
	}
float calculate()
	{
	si=p*n*r/100;
	}
float principal()
	{
	return p;
	}
float interest()
	{
	return r;
	}
float years()
	{
	return n;
	}
};
int main()
{
simpleinterest si;
si.input();
si.calculate();
cout<<"\nPrincipal amount: "<<si.principal();
cout<<"\nRate of interest: "<<si.interest();
cout<<"\nYears: "<<si.years();
cout<<"\nSimple interest: "<<si.si;
}

