#include<iostream>
using namespace std;
class temperature{
public:
	float far,cel;
	
public:
	void farenheit(float c)
		{
		cel=c;
		far=(c*9.0/5)+32;
		}
	void celcius(float f)
		{
		far=f;
		cel=(5/9.0)*(f-32);
		}
	float celci()
		{
		return cel;
		}
	float faren()
		{
		return far;
		}
};
int main()
{
temperature t,s;
t.farenheit(45);
s.celcius(130);
cout<<t.celci()<<" The farenheit is"<<t.faren()<<endl;
cout<<s.faren()<<" The celcius is "<<s.celci();
}

