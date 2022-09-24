#include<iostream>
#include<math.h>
using namespace std;
class compoundinterest{
private:
	float p,n,r;
public:
	float f;
void input()
	{
	cout<<"\nPrincipal amount: ";
	cin>>p;
	cout<<"\nInterest: ";
	cin>>r;
	cout<<"\nNo.of years: ";
	cin>>n;
	}
void calculate()
	{
	f=p* pow((1+(r/100)),n);
	}
void output()
	{
	cout<<"\nPrincipal amount: "<<p;
	cout<<"\nRate of interest: "<<r;
	cout<<"\nYears: "<<n;
	cout<<"\ncompound interest: "<<f;
	}
};
int main()
{
compoundinterest ci;
ci.input();
ci.calculate();
ci.output();
}

