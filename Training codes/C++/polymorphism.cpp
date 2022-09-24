#include<iostream>
using namespace std;
class control{
public:
	virtual void display(){};
};
class rectangle:public control{
protected:
	float w,h,a;
public:
	rectangle()
		{
		cout<<"\nEnter witdth and height: "<<endl;
		cin>>w>>h;
		}
	void calculate()
		{
		a=w*h;
		}
	void display()
		{
		calculate();
		cout<<"\nRectangle..";
		cout<<"\nWidth: "<<w<<" Height: "<<h;
		cout<<"\nArea: "<<a;
		}
};
class triangle:public control{
protected:
	float s,a;
public:
	triangle()
		{
		cout<<"\nEnter side length: "<<endl;
		cin>>s;
		}
	void calculate()
		{
		a=s*s;
		}
	void display()
		{
		calculate();
		cout<<"\nRectangle..";
		cout<<"\nsides: "<<s;
		cout<<"\nArea: "<<a;
		}
};
int main()
{
int i;
rectangle r;
triangle t;
control *c[2];
c[0]=&r;
c[1]=&t;
for(i=0;i<2;i++)
	{
	c[i]->display();
	}
}

