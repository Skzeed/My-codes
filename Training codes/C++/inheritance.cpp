#include<iostream>
using namespace std;
class circle{
protected:
	float r;
public:
	circle(float a)
		{
		r=a;
		}
	float radius(){return r;}
	float area(){return ((22.0/7)*r*r);}
	float circumferance(){return 2*(22.0/7)*r;}
	
};
class circle1:public circle
{
public:
circle1(float a):circle(a)
	{}
float diameter(){return 2*r;}
};
int main()
{
circle1 c(10.2);
cout<<"\nRadius: "<<c.radius();
cout<<"\narea: "<<c.area();
cout<<"\ncircumferance: "<<c.circumferance();
cout<<"\nDiameter: "<<c.diameter();
}

