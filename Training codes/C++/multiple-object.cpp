#include<iostream>
using namespace std;
class simpleinterest{
private:
	float p,n,r;
	char name[30];
public:
	float si;
void input()
	{
	cout<<"\nName: ";
	cin.getline(name,30);
	cout<<"\nPrincipal amount: ";
	cin>>p;
	cout<<"\nInterest: ";
	cin>>r;
	cout<<"\nNo.of years: ";
	cin>>n;
	cin.ignore();
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
void output()
	{
	cout<<"\nName: "<<name;
	cout<<"\nPrincipal amount: "<<p;
	cout<<"\nRate of interest: "<<r;
	cout<<"\nYears: "<<n;
	cout<<"\nSimple interest: "<<si;
	}
};
int main()
{
simpleinterest a,b,c;
simpleinterest h;
a.input(); a.calculate();
b.input(); b.calculate();
c.input(); c.calculate();

if(a.si>b.si && a.si>c.si)
	h=a;
else if(b.si>c.si)
	h=b;
else
	h=c;

h.output();
}

