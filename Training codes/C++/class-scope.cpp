#include<iostream>
using namespace std;
class operation{
private:
	int calls;
	void inccalls();
public:
	void initcalls();
	int fact(int);
	bool prime(int);
	int getcalls();
};
int main()
{
operation o;
o.initcalls();
cout<<"\n5! is "<<o.fact(5);
cout<<"\n4 is "<<(o.prime(4)?"Prime":"Not prime")<<endl;
cout<<"\n5 is "<<(o.prime(5)?"Prime":"Not prime")<<endl;
cout<<"\nTotal calls: "<<o.getcalls();
}
int operation::getcalls()
	{
	return calls;
	}
void operation::inccalls()
	{
	calls++;
	}
void operation::initcalls()
	{
	calls=0;
	}
int operation::fact(int n)
	{
	inccalls();
	int f=1,i;
	for(i=1;i<=n;i++)
		{
		f=f*i;
		}
	return f;
	}
bool operation::prime(int n)
	{
	inccalls();
	int i;
	int count=0;
	if(n==1)
		return true;
	else
		{
		for(i=1;i<=n;i++)
			{
			if(n%i==0)
				count++;
			}
		if(count==2)
			return true;
			
		else
			return false;
		}
	}

