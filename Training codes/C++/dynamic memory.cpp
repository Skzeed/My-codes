#include<iostream>
using namespace std;
class sum{
private:
	int a,b,c;
public:
	void input()
		{
		cout<<"\nEnter the valu of A and B: "<<endl;
		cin>>a>>b;
		}
	void display()
		{
		c=a+b;
		cout<<"\nThe sum is "<<c;
		}
};
int main()
{
sum *t=new sum();
t->input();
t->display();
delete t;
}

