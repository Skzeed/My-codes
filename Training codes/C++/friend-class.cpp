#include<iostream>
using namespace std;
class square;
class rectangle{
	int h,w;
public:
	int area()
		{
		return h*w;
		}
	void convert(square s);
};
class square{
private:
	int sides;
public:
	square(int a)
		{
		sides=a;
		}
friend class rectangle;
};
void rectangle::convert(square s)
	{
	h=s.sides;
	w=s.sides;
	}
int main()
{
square s1(5);
rectangle r;
r.convert(s1);
cout<<"\nThe area is "<<r.area();
}

