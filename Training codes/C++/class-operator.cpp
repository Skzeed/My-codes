#include<iostream>
using namespace std;
class timecalc{
private:
	int second;
	string formatHMS();
public:
	timecalc(int h,int m,int s)
		{
		second=(long)h*3600+(long)m*60+s;
		}
	void operator +=(timecalc t);
	void display();
};
void timecalc::operator +=(timecalc t)
	{
	this->second+=t.second;
	}
string timecalc::formatHMS()
	{
	int t=second;
	int h,m,s;
	h=t/3600;
	t=t-(h*3600);
	m=t/60;
	t=t-(m*60);
	s=t;
	char res[20];
	sprintf(res,"%2d %2d %2d",h,m,s);
	string ress(res);
	return ress;
	}
void timecalc::display()
	{
	cout<<"\nTime is: "<<formatHMS();
	}
	
int main()
{
timecalc A(1,30,0), B(0,30,15);
A.display();
A+=B;
A.display();
}

