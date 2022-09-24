#include<iostream>
using namespace std;
class statistics{
private:
	int *ages;
	int age;
	int max,min;
	float avg;
	void calculation();
public:
	statistics(int);
	~statistics()
		{
		delete ages;
		}
	void input();
	void display();
};
int main()
{
int n;
cout<<"\nHow many members: ";
cin>>n;
statistics s(n);
s.input();
s.display();

}
statistics::statistics(int n)
	{
	age=n;
	ages=new int[n];
	}
void statistics::input()
	{
	int i;
	cout<<"\nEnter ages: ";
	for(i=0;i<age;i++)
		{
		cout<<"\nEnter age "<<i+1<<" :";
		cin>>ages[i];
		}
	}
void statistics::calculation()
	{
	int i,sum=0;
	max=ages[0]; min=ages[0];
	for(i=0;i<age;i++)
		{
		sum=sum+ages[i];
		if(ages[i]>max)
			max=ages[i];
		if(ages[i]<min)
			min=ages[i];
		}
	avg=sum/age;
	}
void statistics::display()
	{
	calculation();
	int i;
	cout<<"\nAges entered are: ";
	for(i=0;i<age;i++)
		{
		cout<<ages[i]<<" ";
		}
	cout<<"\nThe highest age is :"<<max;
	cout<<"\nThe lowest age is  :"<<min;
	cout<<"\nThe average is     :"<<avg;
	}

