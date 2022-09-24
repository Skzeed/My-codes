#include<iostream>
#include<math.h>
using namespace std;
class sphere{
private:
	float r,v,a;
public:
	void process()
		{
		cout<<"\nEnter the radius: ";
		cin>>r;
		v=4*(22.0/7)*(pow(r,3)/3);
		a=(22.0/7)*r*r*4;
		}
	float volume()
		{
		return v;
		}
	float area()
		{
		return a;
		}
};
int main()
{
sphere s;
s.process();
cout<<"\nArea: "<<s.area();
cout<<"\nVolume: "<<s.volume();
}

